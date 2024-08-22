// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATEMACHINE_H
#define _UISTATEMACHINE_H


#import <Foundation/Foundation.h>


@interface _UIStateMachine : NSObject {
    *? _spec;
    BOOL _externalSpec;
}


@property (readonly, nonatomic) *void spec;
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)initWithSpec:(*void)arg0 initialState:(NSUInteger)arg1 ;
-(id)initWithStates:(NSUInteger)arg0 events:(NSUInteger)arg1 initialState:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)handleEvent:(NSUInteger)arg0 withContext:(unsigned int)arg1 ;
-(void)setStaticTransitionFromState:(NSUInteger)arg0 withEvent:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)setTransitionHandlerForState:(NSUInteger)arg0 withEvent:(NSUInteger)arg1 transitionHandler:(id)arg2 ;
// -(void)setTransitionHandlerForState:(NSUInteger)arg0 withEvent:(NSUInteger)arg1 transitionHandler:(id)arg2 postTransitionHandler:(unk)arg3  ;


@end


#endif