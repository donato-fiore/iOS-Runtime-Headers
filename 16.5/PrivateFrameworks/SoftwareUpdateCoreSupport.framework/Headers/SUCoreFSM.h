// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREFSM_H
#define SUCOREFSM_H

@class NSString, NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;


#import "SUCoreDiag.h"

@interface SUCoreFSM : NSString

@property (retain, nonatomic) NSString *currentState; // ivar: _currentState
@property (readonly, nonatomic) SUCoreDiag *diag; // ivar: _diag
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *extendedStateQueue; // ivar: _extendedStateQueue
@property (readonly, retain, nonatomic) NSString *fsmName; // ivar: _fsmName
@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, retain, nonatomic) NSString *instanceName; // ivar: _instanceName
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) NSString *pendingFollowupEvent; // ivar: _pendingFollowupEvent
@property (retain, nonatomic) id *pendingFollowupInfo; // ivar: _pendingFollowupInfo
@property (nonatomic) BOOL performingEvent; // ivar: _performingEvent
@property (readonly, nonatomic) NSMutableDictionary *registeredActionTable; // ivar: _registeredActionTable
@property (readonly, nonatomic) NSString *startState; // ivar: _startState
@property (readonly, nonatomic) NSDictionary *stateTable; // ivar: _stateTable
@property (nonatomic) NSUInteger untrackedOccurrences; // ivar: _untrackedOccurrences
@property (retain, nonatomic) NSMutableDictionary *usageTable; // ivar: _usageTable


-(BOOL)_activateMachineWithStateTable:(id)arg0 withActionTable:(id)arg1 ;
-(id)_acceptEvent:(id)arg0 withInfo:(id)arg1 issueType:(id)arg2 attachedAction:(*id)arg3 ;
-(id)_initMachine:(id)arg0 ofInstance:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 usingDelegate:(id)arg4 registeringAllInfoClass:(Class)arg5 registeringAndActivating:(BOOL)arg6 ;
-(id)copyCurrentState;
-(id)copyCurrentStateProtected;
-(id)initMachine:(id)arg0 ofInstance:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 ;
-(id)initMachine:(id)arg0 ofInstance:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 usingDelegate:(id)arg4 registeringAllInfoClass:(Class)arg5 ;
-(id)initMachine:(id)arg0 withTable:(id)arg1 startingIn:(id)arg2 ;
-(id)initMachine:(id)arg0 withTable:(id)arg1 startingIn:(id)arg2 usingDelegate:(id)arg3 registeringAllInfoClass:(Class)arg4 ;
-(void)_performEvent:(id)arg0 withInfo:(id)arg1 issueType:(id)arg2 forCell:(id)arg3 attachedAction:(id)arg4 checkingAttached:(BOOL)arg5 ;
-(void)_postEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)_registerAction:(id)arg0 ForEvent:(id)arg1 inState:(id)arg2 usingDelegate:(id)arg3 withInfoClass:(Class)arg4 actionTable:(id)arg5 loggingRegistration:(BOOL)arg6 ;
-(void)_registerAllActions:(id)arg0 withInfoClass:(Class)arg1 stateTable:(id)arg2 actionTable:(id)arg3 loggingRegistration:(BOOL)arg4 ;
-(void)_simulateEventAlteration:(id)arg0 fsmEvent:(*id)arg1 eventInfo:(*id)arg2 attachedAction:(*id)arg3 ;
-(void)_trackEventOccurrence:(id)arg0 withInfo:(id)arg1 issueType:(id)arg2 ;
-(void)_triggerAction:(id)arg0 usingAttached:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 ;
-(void)activateMachine;
-(void)dumpEventInStateOccurrences:(id)arg0 ;
-(void)followupEvent:(id)arg0 ;
-(void)followupEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)postEvent:(id)arg0 ;
-(void)postEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)postProtectedEvent:(id)arg0 ;
-(void)postProtectedEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)registerAction:(id)arg0 ForEvent:(id)arg1 inState:(id)arg2 usingDelegate:(id)arg3 withInfoClass:(Class)arg4 ;
-(void)registerAllActions:(id)arg0 withInfoClass:(Class)arg1 ;
-(void)teardownMachine;


@end


#endif