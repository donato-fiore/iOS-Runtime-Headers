// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPWIDGETWAITINGSTATE_H
#define HDSPSLEEPWIDGETWAITINGSTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetWaitingState : HDSPSleepWidgetStateMachineState



-(BOOL)schedulesWidgetStateChange;
-(NSInteger)widgetState;
-(id)stateName;
-(void)upcomingChangeEventDue;


@end


#endif