// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPMODEMANUALBEDTIMESTATE_H
#define HDSPSLEEPMODEMANUALBEDTIMESTATE_H



#import "HDSPSleepModeBedtimeState.h"

@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState



-(NSUInteger)defaultChangeReason;
-(id)stateName;
-(void)_handleSleepFocusModeDeletionIfNecessary;
-(void)automationTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)sleepFocusModeDidChange;
-(void)sleepScheduleStateChangedToBedtime:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)sleepScheduleStateChangedToDisabledFromState:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWakeUp:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWindDown:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)updateState;


@end


#endif