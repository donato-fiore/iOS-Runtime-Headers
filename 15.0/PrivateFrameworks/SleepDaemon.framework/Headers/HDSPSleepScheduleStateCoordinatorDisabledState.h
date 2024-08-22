// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORDISABLEDSTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORDISABLEDSTATE_H



#import "HDSPSleepScheduleStateCoordinatorStateMachineState.h"

@interface HDSPSleepScheduleStateCoordinatorDisabledState : HDSPSleepScheduleStateCoordinatorStateMachineState



-(NSUInteger)scheduleState;
-(id)stateName;
-(void)updateStateWithChangeReason:(NSUInteger)arg0 ;


@end


#endif