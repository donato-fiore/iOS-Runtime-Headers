// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORINITIALSTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORINITIALSTATE_H



#import "HDSPSleepScheduleStateCoordinatorStateMachineState.h"

@interface HDSPSleepScheduleStateCoordinatorInitialState : HDSPSleepScheduleStateCoordinatorStateMachineState



-(NSUInteger)scheduleState;
-(id)stateName;
-(void)updateStateWithChangeReason:(NSUInteger)arg0 ;


@end


#endif