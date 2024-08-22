// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEDETECTIONNOTIFIEDSTATE_H
#define HDSPWAKEDETECTIONNOTIFIEDSTATE_H



#import "HDSPWakeDetectionStateMachineState.h"

@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState



-(id)determineExpirationDateForCurrentDate:(id)arg0 ;
-(id)determineNextState;
-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif