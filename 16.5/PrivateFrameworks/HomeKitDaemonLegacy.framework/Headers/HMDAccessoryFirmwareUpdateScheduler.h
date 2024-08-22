// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATESCHEDULER_H
#define HMDACCESSORYFIRMWAREUPDATESCHEDULER_H

@class HMFObject, NSBackgroundActivityScheduler, NSString, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, HMDAccessoryFirmwareUpdateTask, HMDAccessoryFirmwareUpdatePolicy, HMDAccessoryFirmwareUpdateSchedulerWingman, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDAccessoryFirmwareUpdateProfile.h"
#import "HMDAccessoryFirmwareUpdateSession.h"

@interface HMDAccessoryFirmwareUpdateScheduler : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (copy, nonatomic) id *activityCompletion; // ivar: _activityCompletion
@property (retain, nonatomic) NSBackgroundActivityScheduler *backgroundScheduler; // ivar: _backgroundScheduler
@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (retain, nonatomic) NSObject<HMDAccessoryFirmwareUpdateTask> *currentTask; // ivar: _currentTask
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMFTimer *deferCheckTimer; // ivar: _deferCheckTimer
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (retain, nonatomic) HMFTimer *initialDelayTimer; // ivar: _initialDelayTimer
@property (readonly, nonatomic) BOOL needsToScheduleApply;
@property (readonly, nonatomic) BOOL needsToScheduleRegister;
@property (readonly, nonatomic) BOOL needsToScheduleStaging;
@property (readonly, nonatomic) BOOL needsToStop;
@property (readonly, nonatomic, getter=isStagingInProgress) BOOL stagingInProgress;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HMDAccessoryFirmwareUpdatePolicy> *updatePolicy; // ivar: _updatePolicy
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateProfile *updateProfile;
@property (readonly, weak) HMDAccessoryFirmwareUpdateSession *updateSession; // ivar: _updateSession
@property (readonly) NSObject<HMDAccessoryFirmwareUpdateSchedulerWingman> *wingman; // ivar: _wingman
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 firmwareUpdateSession:(id)arg1 wingman:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithAccessory:(id)arg0 firmwareUpdateSession:(id)arg1 workQueue:(id)arg2 ;
-(id)logIdentifier;
-(id)privateDescription;
-(void)_createUpdatePolicy;
-(void)_defer;
-(void)_handleSchedulingConditionChanged;
-(void)_invalidateExistingScheduling;
-(void)_logDebugStates:(char *)arg0 ;
-(void)_registerForNotifications;
-(void)_removeUpdatePolicy;
-(void)_scheduleCurrentTask;
-(void)_scheduleCurrentTaskBackgroundRun;
-(void)_startDeferCheckTimer;
-(void)_startTaskInitialDelayTimer;
-(void)_stop;
-(void)_stopDeferCheckTimer;
-(void)_stopInitialDelayTimer;
-(void)_taskCanRunInCurrentDevice:(id)arg0 ;
-(void)configure;
-(void)dealloc;
-(void)handleAccessoryReachabilityChanged:(id)arg0 ;
-(void)handleApplyNotReadyReasonsChanged:(id)arg0 ;
-(void)handleBridgeUpdate:(id)arg0 ;
-(void)handlePolicyStatusChange:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)handleStagingNotReadyReasonsChanged:(id)arg0 ;
-(void)handleUpdateStateChanged:(id)arg0 ;
-(void)removeUpdatePolicy;
-(void)scheduleWithDelay:(BOOL)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif