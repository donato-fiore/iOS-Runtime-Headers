// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPGOODMORNINGALERTPRESENTINGSTATE_H
#define HDSPGOODMORNINGALERTPRESENTINGSTATE_H



#import "HDSPGoodMorningAlertStateMachineState.h"

@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState



-(BOOL)schedulesExpiration;
-(CGFloat)expirationDuration;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)sleepScheduleStateChangedToBedtime;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif