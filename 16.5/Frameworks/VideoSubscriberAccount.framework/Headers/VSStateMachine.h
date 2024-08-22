// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSTATEMACHINE_H
#define VSSTATEMACHINE_H

@class NSMutableArray, NSMutableDictionary, NSString, NSOperationQueue;
@protocol VSStateMachineDelegate;

#import <Foundation/Foundation.h>

#import "VSOptional.h"

@interface VSStateMachine : NSObject {
    int _mode;
}


@property (retain, nonatomic) VSOptional *currentState; // ivar: _currentState
@property (weak, nonatomic) NSObject<VSStateMachineDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *enqueuedTransitions; // ivar: _enqueuedTransitions
@property (retain, nonatomic) NSMutableDictionary *ignoredEventsByState; // ivar: _ignoredEventsByState
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSOperationQueue *transitionQueue; // ivar: _transitionQueue
@property (retain, nonatomic) NSMutableDictionary *transitionTable; // ivar: _transitionTable


-(id)description;
-(id)init;
-(void)_enteringState:(id)arg0 ;
-(void)_exitingState:(id)arg0 ;
-(void)_handleEnqueuedTransitions;
-(void)_setDestinationState:(id)arg0 forEvent:(id)arg1 inState:(id)arg2 ignoringEvent:(BOOL)arg3 ;
-(void)activateWithState:(id)arg0 ;
-(void)enqueueEvent:(id)arg0 ;
-(void)ignoreEvent:(id)arg0 inState:(id)arg1 ;
-(void)setDestinationState:(id)arg0 forEvent:(id)arg1 inState:(id)arg2 ;


@end


#endif