// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPMODEWINDDOWNSTATE_H
#define HDSPSLEEPMODEWINDDOWNSTATE_H



#import "HDSPSleepModeStateMachineState.h"

@interface HDSPSleepModeWindDownState : HDSPSleepModeStateMachineState



-(NSInteger)sleepMode;
-(id)stateName;
-(void)automationTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)userTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;


@end


#endif