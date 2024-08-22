// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYSLEEPWAKESTATECONTROLLER_H
#define HMDAPPLEMEDIAACCESSORYSLEEPWAKESTATECONTROLLER_H

@class HMFObject, NAFuture, NSUUID, HMFMessageDispatcher, NSString;
@protocol HMFMessageReceiver, OS_dispatch_queue, HMDAppleMediaAccessorySleepWakeStateControllerDataSource;



@interface HMDAppleMediaAccessorySleepWakeStateController : HMFObject <HMFMessageReceiver>

 {
    os_unfair_lock_s _lock;
    NAFuture *_fetchSleepWakeFuture;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_accessoryUUID;
    HMFMessageDispatcher *_messageDispatcher;
    id<HMDAppleMediaAccessorySleepWakeStateControllerDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


-(id)initWithAccessoryUUID:(id)arg0 dataSource:(id)arg1 ;
-(void)_handleFetchSleepWakeStateMessage:(id)arg0 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 ;
-(void)fetchSleepWakeStateWithCompletion:(id)arg0 ;


@end


#endif