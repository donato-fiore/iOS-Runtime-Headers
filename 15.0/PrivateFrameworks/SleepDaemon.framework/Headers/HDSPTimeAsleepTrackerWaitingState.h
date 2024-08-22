// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPTIMEASLEEPTRACKERWAITINGSTATE_H
#define HDSPTIMEASLEEPTRACKERWAITINGSTATE_H



#import "HDSPTimeAsleepTrackerStateMachineState.h"

@interface HDSPTimeAsleepTrackerWaitingState : HDSPTimeAsleepTrackerStateMachineState



-(BOOL)isSleepTrackingSchedulingState;
-(id)stateName;
-(void)bedtimeOccurred;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)sleepTrackingEventDue;
-(void)startWakeDetectionOccurred;
-(void)userEngagedSleepMode;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif