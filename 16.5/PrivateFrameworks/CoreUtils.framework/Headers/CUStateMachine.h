// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUSTATEMACHINE_H
#define CUSTATEMACHINE_H

@class NSMutableArray, NSPointerArray, NSArray;

#import <Foundation/Foundation.h>

#import "CUState.h"

@interface CUStateMachine : NSObject {
    CUState *_currentState;
    NSMutableArray *_eventQueue;
    BOOL _dispatching;
    NSPointerArray *_lcaPath;
    BOOL _started;
    CUState *_targetState;
}


@property (retain, nonatomic) CUState *initialState; // ivar: _initialState
@property (retain, nonatomic) NSArray *states; // ivar: _states


-(void)_firstTimeInit;
-(void)dealloc;
-(void)dispatchEvent:(id)arg0 ;
-(void)invalidate;
-(void)start;
-(void)transitionToState:(id)arg0 ;


@end


#endif