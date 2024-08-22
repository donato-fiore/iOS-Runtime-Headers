// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPTIMEASLEEPTRACKER_H
#define HDSPTIMEASLEEPTRACKER_H

@class NSArray, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPWakeDetector, HDSPNotificationObserver, HDSPDevicePowerObserver, HDSPWatchOnWristObserver, HDSPSleepTracker, NAScheduler, HDSPSleepTrackerDelegate, HDSPSleepEventDelegate, HDSPTimeAsleepTracker, HDSPWakeDetectorDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPTimeAsleepTrackerStateMachine.h"

@interface HDSPTimeAsleepTracker : NSObject <HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPWakeDetector, HDSPNotificationObserver, HDSPDevicePowerObserver, HDSPWatchOnWristObserver, HDSPSleepTracker>



@property (readonly, nonatomic) NSArray *appLaunchRegistrations; // ivar: _appLaunchRegistrations
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSleepTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL inWakeDetectionWindow;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) BOOL isDetecting; // ivar: _isDetecting
@property (readonly, nonatomic) BOOL isPendingDetectionEnd; // ivar: _isPendingDetectionEnd
@property (readonly, nonatomic) BOOL isWristDetectEnabled;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly, nonatomic) NSObject<HDSPTimeAsleepTracker> *sleepTracker; // ivar: _sleepTracker
@property (readonly, copy, nonatomic) id *sleepTrackerProvider; // ivar: _sleepTrackerProvider
@property (readonly, nonatomic) HDSPTimeAsleepTrackerStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (readonly, nonatomic) os_unfair_lock_s timeAsleepTrackerLock; // ivar: _timeAsleepTrackerLock
@property (readonly, nonatomic) NSUInteger type;
@property (weak, nonatomic) NSObject<HDSPWakeDetectorDelegate> *wakeDetectorDelegate; // ivar: _wakeDetectorDelegate


-(id)_createSleepSessionWithSleepAnalysis:(id)arg0 endReason:(NSUInteger)arg1 ;
-(id)currentState;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 sleepTrackerProvider:(id)arg1 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(id)processedSessionForSession:(id)arg0 ;
-(id)trackingWindowAfterDate:(id)arg0 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(void)_assertLock:(id)arg0 ;
-(void)_handleActivityDetectedOnDate:(id)arg0 ;
-(void)_handleAppLaunched:(id)arg0 onDate:(id)arg1 ;
-(void)_handleInternalSleepSessionEndRequest;
-(void)_handleSleepSessionAnalysisResults:(id)arg0 endReason:(NSUInteger)arg1 ;
-(void)_withLock:(id)arg0 ;
-(void)detectedOffWristOnDate:(id)arg0 ;
-(void)detectedOnWristOnDate:(id)arg0 ;
-(void)deviceChangedChargingState:(BOOL)arg0 ;
-(void)endSleepTrackingSessionWithReason:(NSUInteger)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)notifyForActivityDetectedOnDate:(id)arg0 ;
-(void)previousSessionFinished;
-(void)scheduleStateExpiration;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)startActivityDetection;
-(void)startAppLaunchDetection;
-(void)startDetecting;
-(void)startSleepTrackingSessionWithReason:(NSUInteger)arg0 ;
-(void)stopActivityDetection;
-(void)stopAppLaunchDetection;
-(void)stopDetecting;
-(void)unscheduleStateExpiration;
-(void)updateState;
-(void)wristDetectEnabledDidChange;


@end


#endif