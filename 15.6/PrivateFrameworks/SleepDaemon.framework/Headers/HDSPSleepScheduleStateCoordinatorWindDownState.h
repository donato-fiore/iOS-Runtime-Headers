// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORWINDDOWNSTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORWINDDOWNSTATE_H



#import "HDSPSleepScheduleStateCoordinatorStateMachineState.h"

@interface HDSPSleepScheduleStateCoordinatorWindDownState : HDSPSleepScheduleStateCoordinatorStateMachineState



-(NSUInteger)scheduleState;
-(id)determineExpirationDateForCurrentDate:(id)arg0 ;
-(id)stateName;
-(void)bedtimeReached;


@end


#endif