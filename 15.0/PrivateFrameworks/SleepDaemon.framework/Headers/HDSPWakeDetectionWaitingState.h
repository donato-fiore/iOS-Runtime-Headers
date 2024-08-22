// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEDETECTIONWAITINGSTATE_H
#define HDSPWAKEDETECTIONWAITINGSTATE_H



#import "HDSPWakeDetectionStateMachineState.h"

@interface HDSPWakeDetectionWaitingState : HDSPWakeDetectionStateMachineState



-(BOOL)schedulesWakeDetection;
-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)wakeDetectionEventDue;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif