// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSTATEMACHINE_H
#define CSSTATEMACHINE_H

@class NSMutableDictionary;
@protocol CSStateMachineDelegate;

#import <Foundation/Foundation.h>


@interface CSStateMachine : NSObject

@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (weak, nonatomic) NSObject<CSStateMachineDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *eventToStateTransitions; // ivar: _eventToStateTransitions
@property (nonatomic) NSInteger initialState; // ivar: _initialState
@property (retain, nonatomic) NSMutableDictionary *transitions; // ivar: _transitions


-(id)initWithInitialState:(NSInteger)arg0 ;
-(void)addTransitionFrom:(NSInteger)arg0 to:(NSInteger)arg1 for:(NSInteger)arg2 ;
-(void)addTransitionFromAnyStateTo:(NSInteger)arg0 for:(NSInteger)arg1 ;
-(void)performTransitionForEvent:(NSInteger)arg0 ;
-(void)reset;


@end


#endif