// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPWIDGETBEDTIMESTATE_H
#define HDSPSLEEPWIDGETBEDTIMESTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetBedtimeState : HDSPSleepWidgetStateMachineState



-(BOOL)schedulesWidgetStateChange;
-(NSInteger)widgetState;
-(id)stateName;
-(void)bedtimeExpiredEventDue;


@end


#endif