// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPMODEMANAGER_H
#define HDSPSLEEPMODEMANAGER_H

@class NSDate, NSString, HKSPObserverSet, HKSPSleepScheduleModel;
@protocol HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPDiagnosticsProvider, HKSPSleepFocusModeBridgeDelegate, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepScheduleStateObserver, NAScheduler, HDSPSleepFocusModeBridge;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSleepModeStateMachine.h"

@interface HDSPSleepModeManager : NSObject <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPDiagnosticsProvider, HKSPSleepFocusModeBridgeDelegate, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepScheduleStateObserver>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HDSPSleepFocusModeBridge> *sleepFocusModeBridge; // ivar: _sleepFocusModeBridge
@property (nonatomic) NSInteger sleepMode;
@property (readonly, nonatomic) os_unfair_lock_s sleepModeLock; // ivar: _sleepModeLock
@property (readonly, nonatomic) HKSPObserverSet *sleepModeObservers; // ivar: _sleepModeObservers
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly, nonatomic) HDSPSleepModeStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


+(NSUInteger)_sleepModeChangeReasonForBiomeReason:(NSUInteger)arg0 source:(NSInteger)arg1 ;
-(BOOL)_isScheduledSleepModeEnabled;
-(BOOL)_isSleepModeDuringWindDownEnabled;
-(BOOL)_shouldHandleBiomeEvent:(id)arg0 ;
-(BOOL)createFocusModeWithError:(*id)arg0 ;
-(BOOL)deleteFocusModeWithError:(*id)arg0 ;
-(BOOL)inUserRequestedSleepMode;
-(BOOL)isInDemoMode;
-(BOOL)shouldGoIntoSleepModeDuringState:(NSUInteger)arg0 ;
-(id)computeUserVisibleEndDate;
-(id)currentState;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 sleepFocusModeBridge:(id)arg1 ;
-(void)_automationTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)_automationTurnedOnSleepModeWithReason:(NSUInteger)arg0 ;
-(void)_createFocusModeIfNeeded;
-(void)_enableSleepModeControlCenterModuleIfNeeded;
-(void)_ensureFocusModeCreatedForSleepMode:(NSInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)_handleFocusModeEvent:(id)arg0 ;
-(void)_powerLogSleepMode:(BOOL)arg0 ;
-(void)_userTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)_userTurnedOnSleepModeWithReason:(NSUInteger)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)notifyObserversForSleepModeChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)scheduledEventIsDue;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepFocusModeBridge:(id)arg0 didUpdateSleepFocusConfiguration:(id)arg1 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)updateState;


@end


#endif