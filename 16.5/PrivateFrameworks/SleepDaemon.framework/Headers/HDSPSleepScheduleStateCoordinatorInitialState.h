// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORINITIALSTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORINITIALSTATE_H



#import "HDSPSleepScheduleStateCoordinatorStateMachineState.h"

@interface HDSPSleepScheduleStateCoordinatorInitialState : HDSPSleepScheduleStateCoordinatorStateMachineState



-(NSUInteger)scheduleState;
-(id)nextStateWithContext:(*id)arg0 forceUpdate:(BOOL)arg1 ;
-(id)stateName;


@end


#endif