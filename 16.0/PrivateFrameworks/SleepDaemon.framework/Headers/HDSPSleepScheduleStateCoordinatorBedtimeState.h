// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORBEDTIMESTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORBEDTIMESTATE_H



#import "HDSPSleepScheduleStateCoordinatorStateMachineState.h"

@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState



-(NSUInteger)scheduleState;
-(id)expirationDate;
-(id)stateName;
-(void)wakeTimeReached;
-(void)wakeUpConfirmed;


@end


#endif