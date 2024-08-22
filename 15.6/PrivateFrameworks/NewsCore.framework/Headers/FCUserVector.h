// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUSERVECTOR_H
#define FCUSERVECTOR_H

@class NSOrderedSet, NSString, NSURL;
@protocol FCUserVectorProvider;

#import <Foundation/Foundation.h>

#import "FCPersonalizationTreatment.h"
#import "FCSubscriptionList.h"

@interface FCUserVector : NSObject <FCUserVectorProvider>



@property (retain, nonatomic) NSOrderedSet *bundleChannelIDs; // ivar: _bundleChannelIDs
@property (retain, nonatomic) NSString *bundleChannelIDsVersion; // ivar: _bundleChannelIDsVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (retain, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // ivar: _personalizationTreatment
@property (retain, nonatomic) FCSubscriptionList *subscriptionList; // ivar: _subscriptionList
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *whitelistURL; // ivar: _whitelistURL


-(id)bundleSubscribedVector;
-(id)computePersonalizationVectorWithBaselineAggregate:(id)arg0 allAggregates:(id)arg1 options:(NSInteger)arg2 ;
-(id)findVector:(id)arg0 closestToBins:(id)arg1 ;
-(id)init;
-(id)initWithWhitelistURL:(id)arg0 modelURL:(id)arg1 personalizationTreatment:(id)arg2 bundleChannelIDs:(id)arg3 bundleChannelIDsVersion:(id)arg4 subscriptionList:(id)arg5 ;
-(id)subscribedBundleChannelIDs;


@end


#endif