// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPWIDGETNOTONBOARDEDSTATE_H
#define HDSPSLEEPWIDGETNOTONBOARDEDSTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetNotOnboardedState : HDSPSleepWidgetStateMachineState



-(BOOL)reloadsWidgetOnModelChange;
-(BOOL)reloadsWidgetOnTimeChange;
-(BOOL)widgetStateHasTimeComponent;
-(NSInteger)widgetState;
-(id)stateName;
-(void)sleepModeDidChange:(NSInteger)arg0 isUserRequested:(BOOL)arg1 ;
-(void)sleepScheduleModelDidChange:(id)arg0 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 ;


@end


#endif