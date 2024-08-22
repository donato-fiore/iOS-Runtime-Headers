// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICPROGRESSSTATEMACHINE_H
#define SUICPROGRESSSTATEMACHINE_H

@class CUStateMachine, NSDictionary, CUState, NSPointerArray;

#import <Foundation/Foundation.h>


@interface SUICProgressStateMachine : NSObject {
    CUStateMachine *_underlyingStateMachine;
    NSDictionary *_stateForStateName;
    NSUInteger _currentState;
    CUState *_abstractState;
}


@property (readonly) NSUInteger state;
@property (retain, nonatomic, getter=_stateMachineObservers, setter=_setStateMachineObservers:) NSPointerArray *stateMachineObservers; // ivar: _stateMachineObservers


-(id)init;
-(void)_ignoreEvent:(NSUInteger)arg0 ;
-(void)_transitionToState:(NSUInteger)arg0 forEvent:(NSUInteger)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)addObservers:(id)arg0 ;
-(void)dealloc;
-(void)handleEvent:(NSUInteger)arg0 ;
-(void)setObservers:(id)arg0 ;


@end


#endif