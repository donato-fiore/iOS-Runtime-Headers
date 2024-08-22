// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORDELAYEDWAKEUPSTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORDELAYEDWAKEUPSTATE_H



#import "HDSPSleepScheduleStateCoordinatorStateMachineState.h"

@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState



-(NSUInteger)scheduleState;
-(id)expirationDate;
-(id)nextStateWithContext:(*id)arg0 forceUpdate:(BOOL)arg1 ;
-(id)stateName;
-(void)bedtimeReached;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)significantScheduleChangeOccurred:(NSUInteger)arg0 ;
-(void)wakeUpConfirmed;
-(void)windDownReached;


@end


#endif