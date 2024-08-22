// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOWPOWERMODEPROFILE_H
#define HMDLOWPOWERMODEPROFILE_H

@class HMFTimer, NSString, HAPSuspendedAccessory;
@protocol HMFTimerDelegate, HMDLowPowerModeProfileDelegate;


#import "HMDAccessoryProfile.h"

@interface HMDLowPowerModeProfile : HMDAccessoryProfile <HMFTimerDelegate>



@property (retain, nonatomic) HMFTimer *backoffTimer; // ivar: _backoffTimer
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDLowPowerModeProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger internalOldState; // ivar: _internalOldState
@property (nonatomic) NSUInteger internalState; // ivar: _internalState
@property (copy, nonatomic) id *pendingWakeBlock; // ivar: _pendingWakeBlock
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPSuspendedAccessory *suspendedAccessory; // ivar: _suspendedAccessory
@property (retain, nonatomic) HMFTimer *waitForWakeTimer; // ivar: _waitForWakeTimer


+(id)WoWLANInfoForSupportedSleepConfiguration:(id)arg0 ;
+(id)logCategory;
-(BOOL)_canEnterNewState:(NSUInteger)arg0 ;
-(BOOL)_shouldManageAccessoryLPM;
-(NSUInteger)suspendedState;
-(id)connectivityInfo;
-(id)hapAccessory;
-(id)initWithAccessory:(id)arg0 powerManagementservice:(id)arg1 workQueue:(id)arg2 ;
-(id)newHAPSuspendedAccessoryFromAccessoryConnectivityInfoWithType:(NSUInteger)arg0 ;
-(id)powerManagementService;
-(id)selectedSleepConfigurationCharacteristic;
-(id)supportedSleepConfigurationCharacteristic;
-(void)_configureAccessoryWithCompletion:(id)arg0 ;
-(void)_enterState:(NSUInteger)arg0 ;
-(void)_processSelectedSleepConfigurationParametersWithCharacteristic:(id)arg0 ;
-(void)_processSupportedSleepConfigurationParametersWithCharacteristic:(id)arg0 ;
-(void)_queryAccessoryWithOperation:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_readAccessorySelectedConfigWithCompletion:(id)arg0 ;
-(void)_readFromCharacteristic:(id)arg0 completion:(id)arg1 ;
-(void)_readInitialRequiredCharacteristics;
-(void)_resetStateMachine;
-(void)_runStateMachine;
-(void)_startTimerForType:(NSUInteger)arg0 ;
-(void)_stateMachine_Idle;
-(void)_stateMachine_backoffOperation;
-(void)_stateMachine_configureAccessory;
-(void)_stateMachine_readAccessoryConfiguration;
-(void)_stateMachine_unconfigureAccessory;
-(void)_stopBackoffTimerForType:(NSUInteger)arg0 ;
-(void)_unconfigureAccessoryWithCompletion:(id)arg0 ;
-(void)_updateCharacteristicsNotifications:(BOOL)arg0 ;
-(void)_wakeSuspendedAccessory:(id)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(void)_writeToCharacteristic:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)enterState:(NSUInteger)arg0 ;
-(void)handleAccessoryCharacteristicsChanged:(id)arg0 ;
-(void)handleAccessoryConnectionChanged:(id)arg0 ;
-(void)handleInitialState;
-(void)registerForMessages;
-(void)timerDidFire:(id)arg0 ;
-(void)unconfigure;
-(void)wakeSuspendedAccessoryWithCompletion:(id)arg0 ;
-(void)wakeSuspendedAccessoryWithType:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif