// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAANALYSISSTATEPUBLISHER_H
#define HMDCAMERAANALYSISSTATEPUBLISHER_H

@class HMFObject, HMIAnalysisStateManager, HMFTimer, NSString, NSUUID, HMIAnalysisStateUpdate;
@protocol HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMIAnalysisStateManagerDelegate, OS_dispatch_queue, HMDHomeResidentMessagingContext;



@interface HMDCameraAnalysisStatePublisher : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMIAnalysisStateManagerDelegate>



@property (readonly) HMIAnalysisStateManager *analysisStateManager; // ivar: _analysisStateManager
@property (readonly) HMFTimer *cameraAnalysisStatePublisherDebounceTimer; // ivar: _cameraAnalysisStatePublisherDebounceTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (weak) NSObject<HMDHomeResidentMessagingContext> *messagingContext; // ivar: _messagingContext
@property (retain) HMIAnalysisStateUpdate *stateUpdate; // ivar: _stateUpdate
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHomeMessagingContext:(id)arg0 analysisStateManager:(id)arg1 workQueue:(id)arg2 cameraAnalysisStatePublisherDebounceTimer:(id)arg3 ;
-(void)_handleRemoteAnalysisStateUpdate:(id)arg0 ;
-(void)_processStateUpdate:(id)arg0 ;
-(void)_publishAnalysisStateUpdate;
-(void)configureWithHome:(id)arg0 ;
-(void)stateManager:(id)arg0 didReceiveLocalUpdate:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif