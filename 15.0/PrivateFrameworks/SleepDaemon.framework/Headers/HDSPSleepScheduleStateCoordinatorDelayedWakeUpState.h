// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORDELAYEDWAKEUPSTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORDELAYEDWAKEUPSTATE_H



#import "HDSPSleepScheduleStateCoordinatorStateMachineState.h"

@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState



-(NSUInteger)scheduleState;
-(id)determineExpirationDateForCurrentDate:(id)arg0 ;
-(id)stateName;
-(void)bedtimeReached;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)significantScheduleChangeOccurred:(NSUInteger)arg0 ;
-(void)updateStateWithChangeReason:(NSUInteger)arg0 ;
-(void)wakeUpConfirmed;
-(void)windDownReached;


@end


#endif