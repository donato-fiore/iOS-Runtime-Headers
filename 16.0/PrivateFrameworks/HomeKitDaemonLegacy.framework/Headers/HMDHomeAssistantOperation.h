// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEASSISTANTOPERATION_H
#define HMDHOMEASSISTANTOPERATION_H

@class HMFObject, HMFTimer, NSSet, NSMutableSet, NSString;
@protocol HMFTimerDelegate, OS_dispatch_queue;



@interface HMDHomeAssistantOperation : HMFObject <HMFTimerDelegate>

 {
    BOOL _completionHandlerCalled;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_accessoryConnectivityWaitTimer;
    NSSet *_accessoriesToOperateOn;
    NSMutableSet *_reachableAccessoriesToOperateOn;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)homeAssistantOperationWithActionSet:(id)arg0 queue:(id)arg1 ;
+(id)homeAssistantOperationWithReadRequests:(id)arg0 queue:(id)arg1 ;
+(id)homeAssistantOperationWithWriteRequests:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)handleAccessoryIsReachable:(id)arg0 ;
-(void)startWithCompletion:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif