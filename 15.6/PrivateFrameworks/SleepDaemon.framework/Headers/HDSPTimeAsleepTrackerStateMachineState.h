// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(BOOL)_updateStateCommon;
-(BOOL)inTrackingWindow;
-(BOOL)isActivityTrackingState;
-(BOOL)isSleepScheduleDisabled;
-(BOOL)isSleepTrackingSchedulingState;
-(BOOL)isSleepTrackingState;
-(BOOL)isTimeAsleepTrackingDisabled;
-(void)_updateStateSpecific;
-(void)activityDetectedOnDate:(id)arg0 ;
-(void)appLaunchedOnDate:(id)arg0 ;
-(void)bedtimeOccurred;
-(void)sleepModeExitedWithReason:(NSUInteger)arg0 ;
-(void)sleepSessionEndRequestedInternally;
-(void)sleepSessionFinished;
-(void)sleepTrackingEventDue;
-(void)startWakeDetectionOccurred;
-(void)updateState;
-(void)userEngagedSleepMode;
-(void)wakeUpOccurredWithReason:(NSUInteger)arg0 ;


@end


#endif