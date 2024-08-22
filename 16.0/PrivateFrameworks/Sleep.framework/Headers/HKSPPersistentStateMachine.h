// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPPERSISTENTSTATEMACHINE_H
#define HKSPPERSISTENTSTATEMACHINE_H

@class NSSet, NSDate, NSString, NSArray;
@protocol HKSPPersistentStateMachineEventHandler, HKSPPersistentStateMachineDelegate, NAScheduler, HKSPStatePersistence;


#import "HKSPStateMachine.h"
#import "HKSPPersistentStateMachineState.h"

@interface HKSPPersistentStateMachine : HKSPStateMachine <HKSPPersistentStateMachineEventHandler, HKSPPersistentStateMachineDelegate>



@property (readonly, nonatomic) NSSet *allowedStates; // ivar: _allowedStates
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, nonatomic) HKSPPersistentStateMachineState *currentState;
@property (readonly, nonatomic) NSDate *currentStateExpirationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<HKSPStatePersistence> *persistence; // ivar: _persistence
@property (readonly, nonatomic) NSArray *scheduledExpirationStateIdentifiers;
@property (readonly) Class superclass;


-(BOOL)enterState:(id)arg0 context:(id)arg1 ;
-(id)initWithAllowedStates:(id)arg0 delegate:(id)arg1 infoProvider:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 allowedStates:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 allowedStates:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(id)persistedState;
-(void)scheduleStateExpiration;
-(void)stateWithIdentifierDidExpire:(id)arg0 ;
-(void)unscheduleStateExpiration;


@end


#endif