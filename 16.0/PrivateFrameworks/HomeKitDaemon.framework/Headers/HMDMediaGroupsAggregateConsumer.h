// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSAGGREGATECONSUMER_H
#define HMDMEDIAGROUPSAGGREGATECONSUMER_H

@class HMFObject, NSString, NSArray, NSUUID, NSNotificationCenter;
@protocol HMFLogging, HMEEventConsumer, HMDMediaGroupsAggregateConsumerDataProvider, HMDMediaGroupsAggregateConsumerDelegate, HMESubscriptionProviding;


#import "HMDMediaGroupsAggregateData.h"

@interface HMDMediaGroupsAggregateConsumer : HMFObject <HMFLogging, HMEEventConsumer, HMDMediaGroupsAggregateConsumerDataProvider>

 {
    os_unfair_lock_s _lock;
    HMDMediaGroupsAggregateData *_lastReceivedData;
}


@property (readonly) HMDMediaGroupsAggregateData *aggregationData;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaGroupsAggregateConsumerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isAggregateTopic:(id)arg0 ;
-(id)allMediaSystemData;
-(id)destinationControllerDataWithParentIdentifier:(id)arg0 ;
-(id)destinationWithIdentifier:(id)arg0 ;
-(id)destinationWithParentIdentifier:(id)arg0 ;
-(id)groupWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 subscriptionProvider:(id)arg1 notificationCenter:(id)arg2 ;
-(id)logIdentifier;
-(id)mediaSystemDataWithIdentifier:(id)arg0 ;
-(void)configureWithHome:(id)arg0 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)notifyOfUpdatedAggregateData;
-(void)startSubscriptionForHome:(id)arg0 ;
-(void)stopSubscription;
-(void)unconfigure;


@end


#endif