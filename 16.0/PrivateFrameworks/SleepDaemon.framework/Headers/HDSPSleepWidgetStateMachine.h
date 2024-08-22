// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPWIDGETSTATEMACHINE_H
#define HDSPSLEEPWIDGETSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPSleepWidgetStateMachineDelegate, HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineEventHandler, NAScheduler;


#import "HDSPSleepWidgetBedtimeInProgressState.h"
#import "HDSPSleepWidgetBedtimeState.h"
#import "HDSPSleepWidgetDisabledState.h"
#import "HDSPSleepWidgetGreetingState.h"
#import "HDSPSleepWidgetNotOnboardedState.h"
#import "HDSPSleepWidgetUpcomingState.h"
#import "HDSPSleepWidgetWaitingState.h"
#import "HDSPSleepWidgetWindDownState.h"

@interface HDSPSleepWidgetStateMachine : HKSPPersistentStateMachine <HDSPSleepWidgetStateMachineDelegate, HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineEventHandler>



@property (readonly, nonatomic) HDSPSleepWidgetBedtimeInProgressState *bedtimeInProgressState; // ivar: _bedtimeInProgressState
@property (readonly, nonatomic) HDSPSleepWidgetBedtimeState *bedtimeState; // ivar: _bedtimeState
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPSleepWidgetStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPSleepWidgetDisabledState *disabledState; // ivar: _disabledState
@property (readonly, nonatomic) HDSPSleepWidgetGreetingState *greetingState; // ivar: _greetingState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, weak, nonatomic) NSObject<HDSPSleepWidgetStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) BOOL isOnboarded;
@property (readonly, nonatomic) HDSPSleepWidgetNotOnboardedState *notOnboardedState; // ivar: _notOnboardedState
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPSleepWidgetUpcomingState *upcomingState; // ivar: _upcomingState
@property (readonly, nonatomic) HDSPSleepWidgetWaitingState *waitingState; // ivar: _waitingState
@property (readonly, nonatomic) HDSPSleepWidgetWindDownState *windDownState; // ivar: _windDownState


-(NSUInteger)loggingCategory;
-(id)allStates;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)significantTimeChangeOccurred;
-(void)sleepModeDidChange:(NSInteger)arg0 isUserRequested:(BOOL)arg1 ;
-(void)sleepScheduleModelDidChange:(id)arg0 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 ;
-(void)sleepWidgetShouldReload;
-(void)sleepWidgetStateDidChange:(NSInteger)arg0 previousState:(NSInteger)arg1 ;


@end


#endif