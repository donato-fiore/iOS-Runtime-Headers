// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFSTATEMACHINETRANSITION_H
#define NFSTATEMACHINETRANSITION_H

@protocol NFStateMachineContextType;

#import <Foundation/Foundation.h>

#import "NFStateMachineEvent.h"
#import "NFStateMachineState.h"
#import "NFStateMachine.h"

@interface NFStateMachineTransition : NSObject

@property (retain, nonatomic) NSObject<NFStateMachineContextType> *context; // ivar: _context
@property (retain, nonatomic) NFStateMachineEvent *event; // ivar: _event
@property (retain, nonatomic) NFStateMachineState *fromState; // ivar: _fromState
@property (retain, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (retain, nonatomic) NFStateMachineState *toState; // ivar: _toState


-(id)description;
-(id)initWithStateMachine:(id)arg0 event:(id)arg1 fromState:(id)arg2 toState:(id)arg3 context:(id)arg4 ;


@end


#endif