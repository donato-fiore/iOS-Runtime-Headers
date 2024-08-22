// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPWIDGETBEDTIMEINPROGRESSSTATE_H
#define HDSPSLEEPWIDGETBEDTIMEINPROGRESSSTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetBedtimeInProgressState : HDSPSleepWidgetStateMachineState



-(NSInteger)widgetState;
-(id)stateName;
-(void)sleepModeDidChange:(NSInteger)arg0 isUserRequested:(BOOL)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 ;


@end


#endif