// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEPERSONDATAMESSENGER_H
#define HMDREMOTEPERSONDATAMESSENGER_H

@class HMFObject, NSUUID, NSString, HMIHomePersonManager, HMFMessageDispatcher, HMFTimer, HMIExternalPersonManager;
@protocol HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDPersonDataInterface, HMDPersonDataSource, OS_dispatch_queue, HMDResidentDeviceManager;



@interface HMDRemotePersonDataMessenger : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDPersonDataInterface>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (weak) NSObject<HMDPersonDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) HMFTimer *notifyResidentsOfUpdatedDataDebounceTimer; // ivar: _notifyResidentsOfUpdatedDataDebounceTimer
@property (copy) id *notifyResidentsOfUpdatedDataDebounceTimerFactory; // ivar: _notifyResidentsOfUpdatedDataDebounceTimerFactory
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) NSObject<HMDResidentDeviceManager> *residentDeviceManager; // ivar: _residentDeviceManager
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithUUID:(id)arg0 home:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithUUID:(id)arg0 messageDispatcher:(id)arg1 residentDeviceManager:(id)arg2 workQueue:(id)arg3 ;
-(id)logIdentifier;
-(void)_notifyResidentsOfUpdatedFaceClassificationDependentData;
-(void)_sendMessagesToNotifyResidentsOfUpdatedFaceClassificationDependentData;
-(void)configureWithDataSource:(id)arg0 home:(id)arg1 ;
-(void)handlePerformCloudPullMessage:(id)arg0 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedPerson:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedSettings:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif