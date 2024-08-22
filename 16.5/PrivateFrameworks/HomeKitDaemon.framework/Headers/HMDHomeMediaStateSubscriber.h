// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMEDIASTATESUBSCRIBER_H
#define HMDHOMEMEDIASTATESUBSCRIBER_H

@class HMFObject, NSString, NSUUID;
@protocol HMEEventConsumer, HMFLogging, HMDHomeMediaStateSubscriberDataSource, HMESubscriptionProviding, OS_dispatch_queue;



@interface HMDHomeMediaStateSubscriber : HMFObject <HMEEventConsumer, HMFLogging>



@property (readonly, weak, nonatomic) NSObject<HMDHomeMediaStateSubscriberDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)shortDescription;
-(id)initWithHomeUUID:(id)arg0 workQueue:(id)arg1 dataSource:(id)arg2 subscriptionProvider:(id)arg3 ;
-(id)logIdentifier;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)subscribeForAppleMediaState;
-(void)subscribeForAppleMediaStateForAccessory:(id)arg0 ;
-(void)unsubscribeForAppleMediaState;
-(void)unsubscribeForAppleMediaStateForAccessory:(id)arg0 ;


@end


#endif