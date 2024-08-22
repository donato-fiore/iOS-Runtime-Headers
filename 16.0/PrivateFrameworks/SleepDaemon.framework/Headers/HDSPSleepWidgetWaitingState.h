// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPWIDGETWAITINGSTATE_H
#define HDSPSLEEPWIDGETWAITINGSTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetWaitingState : HDSPSleepWidgetStateMachineState



-(BOOL)schedulesExpiration;
-(NSInteger)widgetState;
-(id)expirationDate;
-(id)stateName;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif