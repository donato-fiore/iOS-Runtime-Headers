// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSTATEMACHINE_H
#define GKSTATEMACHINE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "GKState.h"

@interface GKStateMachine : NSObject {
    NSDictionary *_states;
}


@property (readonly, nonatomic) GKState *currentState; // ivar: _currentState


+(id)stateMachineWithStates:(id)arg0 ;
-(BOOL)canEnterState:(Class)arg0 ;
-(BOOL)enterState:(Class)arg0 ;
-(id)_dotStringInstanceData;
-(id)_instanceData;
-(id)init;
-(id)initWithStates:(id)arg0 ;
-(id)stateForClass:(Class)arg0 ;
-(void)forceEnterState:(Class)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;


@end


#endif