// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUSERVECTOR_H
#define FCUSERVECTOR_H

@class NSOrderedSet, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "FCPersonalizationTreatment.h"
#import "FCSubscriptionController.h"

@interface FCUserVector : NSObject

@property (retain, nonatomic) NSOrderedSet *bundleChannelIDs; // ivar: _bundleChannelIDs
@property (retain, nonatomic) NSString *bundleChannelIDsVersion; // ivar: _bundleChannelIDsVersion
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (retain, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // ivar: _personalizationTreatment
@property (retain, nonatomic) NSOrderedSet *sportsTagIDs; // ivar: _sportsTagIDs
@property (retain, nonatomic) FCSubscriptionController *subscriptionController; // ivar: _subscriptionController
@property (retain, nonatomic) NSURL *whitelistURL; // ivar: _whitelistURL


-(id)bundleSubscribedVector;
-(id)computePersonalizationVectorWithAggregateStore:(id)arg0 personalizationTreatment:(id)arg1 tagRanker:(id)arg2 options:(NSInteger)arg3 ;
-(id)findVector:(id)arg0 closestToBins:(id)arg1 ;
-(id)init;
-(id)initWithWhitelistURL:(id)arg0 modelURL:(id)arg1 personalizationTreatment:(id)arg2 bundleChannelIDs:(id)arg3 bundleChannelIDsVersion:(id)arg4 subscriptionController:(id)arg5 sportsTagIDs:(id)arg6 ;
-(id)subscribedBundleChannelIDs;
-(id)subscribedSportsTagsWithPersonalizationTreatment:(id)arg0 tagRanker:(id)arg1 ;


@end


#endif