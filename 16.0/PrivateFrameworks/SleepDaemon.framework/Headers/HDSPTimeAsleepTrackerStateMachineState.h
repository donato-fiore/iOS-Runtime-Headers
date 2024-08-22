// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPTIMEASLEEPTRACKERSTATEMACHINESTATE_H
#define HDSPTIMEASLEEPTRACKERSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPTimeAsleepTrackerStateMachineEventHandler;


#import "HDSPTimeAsleepTrackerStateMachine.h"

@interface HDSPTimeAsleepTrackerStateMachineState : HKSPPersistentStateMachineState <HDSPTimeAsleepTrackerStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDSPTimeAsleepTrackerStateMachine *stateMachine;
@property (readonly) Class superclass;


-(BOOL)inTrackingWindow;
-(BOOL)inWakeDetectionWindow;
-(BOOL)isActivityTrackingState;
-(BOOL)isSleepScheduleDisabled;
-(BOOL)isSleepTrackingState;
-(BOOL)isTimeAsleepTrackingDisabled;
-(BOOL)sleepTrackingIsDisabledWithContext:(*id)arg0 ;
-(id)nextStateWithContext:(*id)arg0 ;
-(void)activityDetectedOnDate:(id)arg0 ;
-(void)appLaunchedOnDate:(id)arg0 ;
-(void)bedtimeOccurred;
-(void)sleepModeExitedWithReason:(NSUInteger)arg0 ;
-(void)sleepSessionEndRequestedInternally;
-(void)sleepSessionFinished;
-(void)startWakeDetectionOccurred;
-(void)userEngagedSleepMode;
-(void)wakeUpOccurredWithReason:(NSUInteger)arg0 ;


@end


#endif