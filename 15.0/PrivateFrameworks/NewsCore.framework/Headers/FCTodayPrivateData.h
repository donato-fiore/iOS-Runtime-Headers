// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTODAYPRIVATEDATA_H
#define FCTODAYPRIVATEDATA_H

@class NSArray, NSString, NSDictionary, NSSet, NSNumber;
@protocol FCTodayPrivateData, FCDerivedPersonalizationData><NSCoding;

#import <Foundation/Foundation.h>

#import "FCBundleSubscription.h"

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData>



@property (readonly, copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSObject<FCDerivedPersonalizationData><NSCoding> *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property (readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)prepareForUseWithCompletion:(id)arg0 ;


@end


#endif