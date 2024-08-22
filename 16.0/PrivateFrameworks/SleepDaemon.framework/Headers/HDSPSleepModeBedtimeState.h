// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPMODEBEDTIMESTATE_H
#define HDSPSLEEPMODEBEDTIMESTATE_H



#import "HDSPSleepModeStateMachineState.h"

@interface HDSPSleepModeBedtimeState : HDSPSleepModeStateMachineState



-(NSInteger)sleepMode;
-(id)stateName;
-(void)automationTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)sleepModeTurnedOffForUnknownReason;
-(void)sleepModeTurnedOnForUnknownReason;
-(void)userTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;


@end


#endif