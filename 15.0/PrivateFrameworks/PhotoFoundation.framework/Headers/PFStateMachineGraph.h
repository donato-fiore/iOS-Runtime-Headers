// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTATEMACHINEGRAPH_H
#define PFSTATEMACHINEGRAPH_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PFStateMachineNode.h"

@interface PFStateMachineGraph : NSObject {
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_globalTransitions;
}


@property (retain) PFStateMachineNode *initialNode; // ivar: _initialNode


-(id)addNode:(id)arg0 ;
-(id)dot:(BOOL)arg0 ;
-(id)findNodeWithName:(id)arg0 ;
-(id)init;
-(id)transitionForEventName:(id)arg0 ;
-(void)addGlobalTransition:(id)arg0 ;
-(void)addGlobalTransitionOn:(id)arg0 to:(id)arg1 ;


@end


#endif