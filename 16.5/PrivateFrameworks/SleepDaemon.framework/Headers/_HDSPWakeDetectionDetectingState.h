// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDSPWAKEDETECTIONDETECTINGSTATE_H
#define _HDSPWAKEDETECTIONDETECTINGSTATE_H



#import "HDSPWakeDetectionStateMachineState.h"

@interface _HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState

@property (readonly, nonatomic) NSUInteger activeTypes;


-(BOOL)_isActivityDateInDetectionWindow:(id)arg0 type:(NSUInteger)arg1 ;
-(BOOL)isDetectingState;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)earlyWakeUpWasNotifiedRemotely;
-(void)wakeupEventDetected:(NSUInteger)arg0 date:(id)arg1 ;


@end


#endif