// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPLOCKSCREENMANAGER_H
#define HDSPSLEEPLOCKSCREENMANAGER_H

@class NSDictionary, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenAssertionManagerDelegate, HKSPSensitiveUIObserver, HDSPTimeChangeObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPDiagnosticsProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPGoodMorningAlertObserver, HDSPEnvironmentAware, HDSPSleepLockScreenAssertionManager, NAScheduler, HDSPSleepEventDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSleepLockScreenStateMachine.h"

@interface HDSPSleepLockScreenManager : NSObject <HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenAssertionManagerDelegate, HKSPSensitiveUIObserver, HDSPTimeChangeObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPDiagnosticsProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPGoodMorningAlertObserver, HDSPEnvironmentAware>

 {
    NSInteger _state;
    NSInteger _overrideState;
    NSDictionary *_overrideUserInfo;
}


@property (readonly, nonatomic) NSObject<HDSPSleepLockScreenAssertionManager> *assertionManager; // ivar: _assertionManager
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) NSInteger currentLockScreenState; // ivar: _currentLockScreenState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didUpdateAlertAssertion; // ivar: _didUpdateAlertAssertion
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL isLockScreenActive;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly, nonatomic) os_unfair_lock_s sleepLockScreenLock; // ivar: _sleepLockScreenLock
@property (readonly, nonatomic) NSInteger sleepMode;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(BOOL)_lock_overridingLockScreenState;
-(BOOL)_lock_shouldShowLockScreenForState:(NSInteger)arg0 ;
-(NSInteger)_lock_resolvedLockScreenState;
-(id)_currentState;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 assertionManager:(id)arg1 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(void)_lock_updateLockScreenAssertion;
-(void)_withLock:(id)arg0 ;
-(void)dismissAlertForGoodMorning;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)lockScreenDidConnect;
-(void)overrideLockScreenState:(NSInteger)arg0 userInfo:(id)arg1 ;
-(void)presentAlertForGoodMorning;
-(void)scheduleStateExpiration;
-(void)sensitiveUIStateChanged;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepLockScreenStateDidChange:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepSettings:(id)arg1 ;
-(void)timeZoneChangeDetected:(id)arg0 ;
-(void)unscheduleStateExpiration;


@end


#endif