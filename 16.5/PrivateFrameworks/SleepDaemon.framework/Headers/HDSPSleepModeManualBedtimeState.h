// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPMODEMANUALBEDTIMESTATE_H
#define HDSPSLEEPMODEMANUALBEDTIMESTATE_H



#import "HDSPSleepModeBedtimeState.h"

@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState



-(NSUInteger)defaultChangeReason;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)stateName;
-(void)automationTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToBedtime:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)sleepScheduleStateChangedToDisabledFromState:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWakeUp:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWindDown:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;


@end


#endif