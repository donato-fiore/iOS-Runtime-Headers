// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORSTATEMACHINE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;
@protocol HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSleepScheduleStateCoordinatorStateMachineEventHandler, NAScheduler;


#import "HDSPSleepScheduleStateCoordinatorBedtimeState.h"
#import "HDSPSleepScheduleStateCoordinatorDelayedWakeUpState.h"
#import "HDSPSleepScheduleStateCoordinatorDisabledState.h"
#import "HDSPSleepScheduleStateCoordinatorInitialState.h"
#import "HDSPSleepScheduleStateCoordinatorWakeUpState.h"
#import "HDSPSleepScheduleStateCoordinatorWindDownState.h"

@interface HDSPSleepScheduleStateCoordinatorStateMachine : HKSPPersistentStateMachine <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>



@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorBedtimeState *bedtimeState; // ivar: _bedtimeState
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDelayedWakeUpState *delayedWakeUpState; // ivar: _delayedWakeUpState
@property (readonly, weak, nonatomic) NSObject<HDSPSleepScheduleStateCoordinatorStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDisabledState *disabledState; // ivar: _disabledState
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorInitialState *initialState; // ivar: _initialState
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWakeUpState *wakeUpState; // ivar: _wakeUpState
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWindDownState *windDownState; // ivar: _windDownState


-(NSUInteger)loggingCategory;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)bedtimeReached;
-(void)scheduleModelChanged:(id)arg0 ;
-(void)significantTimeChange;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 context:(id)arg2 ;
-(void)snoozeFireDateShouldBeReset;
-(void)timeZoneChange;
-(void)wakeTimeReached;
-(void)wakeUpConfirmed;
-(void)windDownReached;


@end


#endif