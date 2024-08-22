// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISTATEMACHINE_H
#define AFUISTATEMACHINE_H

@class NSMutableDictionary;
@protocol AFUIStateMachineDelegate;

#import <Foundation/Foundation.h>


@interface AFUIStateMachine : NSObject

@property (weak, nonatomic) NSObject<AFUIStateMachineDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic, getter=_endStatesByEventByStartState) NSMutableDictionary *endStatesByEventByStartState; // ivar: _endStatesByEventByStartState
@property (nonatomic, setter=_setState:) NSInteger state; // ivar: _state


-(id)_descriptionForEvent:(NSInteger)arg0 ;
-(id)_endStateNumberFromDictionary:(id)arg0 forEvent:(NSInteger)arg1 ;
-(id)initWithInitialState:(NSInteger)arg0 ;
-(void)addTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 forEvent:(NSInteger)arg2 ;
-(void)performTransitionForEvent:(NSInteger)arg0 ;


@end


#endif