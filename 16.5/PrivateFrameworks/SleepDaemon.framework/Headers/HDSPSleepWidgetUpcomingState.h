// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPWIDGETUPCOMINGSTATE_H
#define HDSPSLEEPWIDGETUPCOMINGSTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetUpcomingState : HDSPSleepWidgetStateMachineState



-(BOOL)schedulesExpiration;
-(NSInteger)widgetState;
-(id)stateName;


@end


#endif