// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPTIMEASLEEPTRACKERSTATEMACHINE_H
#define HDSPTIMEASLEEPTRACKERSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineEventHandler, NAScheduler;


#import "HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState.h"
#import "HDSPTimeAsleepTrackerActivityTrackingState.h"
#import "HDSPTimeAsleepTrackerAutoTrackingState.h"
#import "HDSPTimeAsleepTrackerDisabledState.h"
#import "HDSPTimeAsleepTrackerInternalEndState.h"
#import "HDSPTimeAsleepTrackerManualTrackingState.h"
#import "HDSPTimeAsleepTrackerWaitingState.h"

@interface HDSPTimeAsleepTrackerStateMachine : HKSPPersistentStateMachine <HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineEventHandler>



@property (readonly, nonatomic) HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState *activityAfterWakeUpTrackingState; // ivar: _activityAfterWakeUpTrackingState
@property (readonly, nonatomic) HDSPTimeAsleepTrackerActivityTrackingState *activityTrackingState; // ivar: _activityTrackingState
@property (readonly, nonatomic) HDSPTimeAsleepTrackerAutoTrackingState *autoTrackingState; // ivar: _autoTrackingState
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPTimeAsleepTrackerStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerDisabledState *disabledState; // ivar: _disabledState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL inWakeDetectionWindow;
@property (readonly, weak, nonatomic) NSObject<HDSPTimeAsleepTrackerStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerInternalEndState *internalEndState; // ivar: _internalEndState
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerManualTrackingState *manualTrackingState; // ivar: _manualTrackingState
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerWaitingState *waitingState; // ivar: _waitingState


-(NSUInteger)loggingCategory;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(id)trackingWindowAfterDate:(id)arg0 ;
-(void)activityDetectedOnDate:(id)arg0 ;
-(void)appLaunchedOnDate:(id)arg0 ;
-(void)bedtimeOccurred;
-(void)endSleepTrackingSessionWithReason:(NSUInteger)arg0 ;
-(void)notifyForActivityDetectedOnDate:(id)arg0 ;
-(void)scheduleSleepTracking;
-(void)sleepModeExitedWithReason:(NSUInteger)arg0 ;
-(void)sleepSessionEndRequestedInternally;
-(void)sleepSessionFinished;
-(void)sleepTrackingEventDue;
-(void)startActivityDetection;
-(void)startAppLaunchDetection;
-(void)startSleepTrackingSessionWithReason:(NSUInteger)arg0 ;
-(void)startWakeDetectionOccurred;
-(void)stopActivityDetection;
-(void)stopAppLaunchDetection;
-(void)unscheduleSleepTracking;
-(void)userEngagedSleepMode;
-(void)wakeUpOccurredWithReason:(NSUInteger)arg0 ;


@end


#endif