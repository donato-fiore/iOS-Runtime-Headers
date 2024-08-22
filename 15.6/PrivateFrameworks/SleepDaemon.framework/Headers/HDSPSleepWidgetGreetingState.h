// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPWIDGETGREETINGSTATE_H
#define HDSPSLEEPWIDGETGREETINGSTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetGreetingState : HDSPSleepWidgetStateMachineState



-(BOOL)reloadsWidgetOnModelChange;
-(BOOL)reloadsWidgetOnTimeChange;
-(BOOL)schedulesWidgetStateChange;
-(NSInteger)widgetState;
-(id)stateName;
-(void)greetingExpiredEventDue;


@end


#endif