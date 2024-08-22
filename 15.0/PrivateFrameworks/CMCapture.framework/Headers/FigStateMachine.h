// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGSTATEMACHINE_H
#define FIGSTATEMACHINE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FigStateMachine : NSObject {
    id *_owner;
    os_unfair_lock_s _lock;
    unsigned int _currentState;
    *FigStateMachineStateConfiguration _stateConfigurations;
    char _stateCount;
    NSString *_label;
}


@property (readonly) unsigned int currentState;
@property (readonly) NSString *currentStateLabel;
@property (readonly) NSString *label;
@property (nonatomic) BOOL performsAtomicStateTransitions; // ivar: _performsAtomicStateTransitions


+(void)initialize;
-(BOOL)transitionToState:(unsigned int)arg0 ;
-(BOOL)transitionToState:(unsigned int)arg0 errorStatus:(int)arg1 ;
-(BOOL)transitionToState:(unsigned int)arg0 fromState:(unsigned int)arg1 ;
-(BOOL)transitionToState:(unsigned int)arg0 fromStates:(unsigned int)arg1 ;
-(id)description;
-(id)initWithLabel:(id)arg0 stateCount:(char)arg1 initialState:(unsigned int)arg2 owner:(id)arg3 ;
-(id)labelForState:(unsigned int)arg0 ;
-(void)dealloc;
-(void)markStateAsTerminal:(unsigned int)arg0 ;
-(void)whenTransitioningFromState:(unsigned int)arg0 toState:(unsigned int)arg1 callHandler:(id)arg2 ;
-(void)whenTransitioningToState:(unsigned int)arg0 callHandler:(id)arg1 ;
-(void)whenTransitioningToStateFails:(unsigned int)arg0 callHandler:(id)arg1 ;
-(void)whenTransitioningToStates:(unsigned int)arg0 callHandler:(id)arg1 ;
-(void)whenTransitioningToStatesFail:(unsigned int)arg0 callHandler:(id)arg1 ;


@end


#endif