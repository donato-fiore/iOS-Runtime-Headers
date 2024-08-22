// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPWIDGETSTATEMACHINESTATE_H
#define HDSPSLEEPWIDGETSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPSleepWidgetStateMachineEventHandler;



@interface HDSPSleepWidgetStateMachineState : HKSPPersistentStateMachineState <HDSPSleepWidgetStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL reloadsWidgetOnModelChange;
@property (readonly, nonatomic) BOOL reloadsWidgetOnTimeChange;
@property (readonly, nonatomic) BOOL schedulesWidgetStateChange;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger widgetState;
@property (readonly, nonatomic) BOOL widgetStateHasTimeComponent;


-(id)_determineNextState;
-(id)stateName;
-(void)bedtimeExpiredEventDue;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)greetingExpiredEventDue;
-(void)significantTimeChangeOccurred;
-(void)sleepModeDidChange:(NSInteger)arg0 isUserRequested:(BOOL)arg1 ;
-(void)sleepScheduleModelDidChange:(id)arg0 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 ;
-(void)upcomingChangeEventDue;
-(void)updateState;


@end


#endif