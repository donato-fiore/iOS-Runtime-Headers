// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMUTABLETODAYPRIVATEDATA_H
#define FCMUTABLETODAYPRIVATEDATA_H

@class NSArray, NSString, NSMutableDictionary, NSSet, NSNumber, NSDictionary;
@protocol FCMutableTodayPrivateData, FCDerivedPersonalizationData><NSCoding;


#import "FCTodayPrivateData.h"
#import "FCBundleSubscription.h"

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>



@property (copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property (copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSObject<FCDerivedPersonalizationData><NSCoding> *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *dictionary;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localNewsTagID;
@property (copy, nonatomic) NSSet *mutedTagIDs;
@property (copy, nonatomic) NSNumber *onboardingVersion;
@property (copy, nonatomic) NSSet *purchasedTagIDs;
@property (copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property (copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property (copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)_deleteObjectsForOldKeys;


@end


#endif