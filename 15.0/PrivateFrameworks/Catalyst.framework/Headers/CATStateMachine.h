// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATSTATEMACHINE_H
#define CATSTATEMACHINE_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "CATState.h"

@interface CATStateMachine : NSObject {
    NSMutableDictionary *mStateByName;
    NSString *mCalloutReason;
}


@property (retain, nonatomic) CATState *currentState; // ivar: _currentState
@property (retain, nonatomic) CATState *initialState; // ivar: _initialState
@property (nonatomic) NSUInteger logLevel; // ivar: _logLevel
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, weak, nonatomic) id *target; // ivar: _target


+(id)new;
-(BOOL)canTransitionWithTriggeringEvent:(id)arg0 ;
-(id)addStateWithName:(id)arg0 ;
-(id)description;
-(id)eventForTriggeringEvent:(id)arg0 ;
-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(id)stateWithName:(id)arg0 ;
-(void)addState:(id)arg0 ;
-(void)dealloc;
-(void)delegateDidEnterState:(id)arg0 event:(id)arg1 ;
-(void)delegateWillExitState:(id)arg0 event:(id)arg1 ;
-(void)invokeAction:(SEL)arg0 event:(id)arg1 ;
-(void)start;
-(void)transitionWithTriggeringEvent:(id)arg0 ;


@end


#endif