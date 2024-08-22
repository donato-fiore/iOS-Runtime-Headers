// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSTATEMACHINE_H
#define PFSTATEMACHINE_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFStateMachineGraph.h"
#import "PFStateMachineNode.h"

@interface PFStateMachine : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PFStateMachineGraph *_graph;
    PFStateMachineNode *_previousNode;
    PFStateMachineNode *_currentNode;
    id *_owner;
    id *_delayedEventCancelToken;
    NSMutableArray *_subflowStack;
}


@property (readonly) NSString *name; // ivar: _name
@property (readonly) id *uuid; // ivar: _uuid


-(id)_popReturnTransition;
-(id)atomicQueue;
-(id)currentNode;
-(id)description;
-(id)graph;
-(id)initWithGraph:(id)arg0 name:(id)arg1 owner:(id)arg2 ;
-(id)owner;
-(id)previousNode;
-(void)_cancelLastDelayedEvent;
-(void)_handleEvent:(id)arg0 ;
-(void)_pushReturnTransition:(id)arg0 ;
-(void)atomicHandleEvent:(id)arg0 ;
-(void)atomicHandleEventAsync:(id)arg0 ;
-(void)dealloc;
-(void)handleEvent:(id)arg0 ;
-(void)postEvent:(id)arg0 afterTimeout:(CGFloat)arg1 ;
-(void)trace:(id)arg0 ;
-(void)traceObject:(id)arg0 state:(id)arg1 ;


@end


#endif