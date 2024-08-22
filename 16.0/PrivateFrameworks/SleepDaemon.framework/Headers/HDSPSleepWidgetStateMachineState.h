// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPWIDGETSTATEMACHINESTATE_H
#define HDSPSLEEPWIDGETSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPSleepWidgetStateMachineEventHandler;


#import "HDSPSleepWidgetStateMachine.h"

@interface HDSPSleepWidgetStateMachineState : HKSPPersistentStateMachineState <HDSPSleepWidgetStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL reloadsWidgetOnModelChange;
@property (readonly, nonatomic) BOOL reloadsWidgetOnTimeChange;
@property (readonly, weak, nonatomic) HDSPSleepWidgetStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger widgetState;
@property (readonly, nonatomic) BOOL widgetStateHasTimeComponent;


-(BOOL)shouldGoIntoUpcomingState;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)sleepModeDidChange:(NSInteger)arg0 isUserRequested:(BOOL)arg1 ;
-(void)sleepScheduleModelDidChange:(id)arg0 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 ;


@end


#endif