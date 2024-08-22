// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEDETECTIONDETECTINGSTATE_H
#define HDSPWAKEDETECTIONDETECTINGSTATE_H



#import "HDSPWakeDetectionStateMachineState.h"

@interface HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState



-(BOOL)schedulesWakeDetection;
-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)earlyWakeUpWasNotifiedRemotely;
-(void)wakeDetectionEventDue;
-(void)wakeupEventDetected:(id)arg0 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif