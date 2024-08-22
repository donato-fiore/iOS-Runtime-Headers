// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPFINALIZEHANDLERQUEUE_H
#define TSPFINALIZEHANDLERQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPCancellationState.h"

@interface TSPFinalizeHandlerQueue : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSInteger _rootObjectIdentifier;
    TSPCancellationState *_cancellationState;
    vector<TSP::FinalizeHandlerItem *, std::allocator<TSP::FinalizeHandlerItem *>> _order;
    IdentifierMap<TSP::FinalizeHandlerItem> _map;
    *void _currentItem;
}




-(BOOL)runFinalizeHandlers;
-(NSInteger)currentObjectIdentifier;
-(id)init;
-(id)initWithRootObjectIdentifier:(NSInteger)arg0 ;
-(id)initWithRootObjectIdentifier:(NSInteger)arg0 cancellationState:(id)arg1 ;
-(void)addFinalizeHandlers:(*void)arg0 strongReferences:(*void)arg1 forIdentifier:(NSInteger)arg2 ;
-(void)reset;
-(void)runFinalizeHandlerForItem:(*void)arg0 ;
-(void)visitItemForCycleDetection:(*void)arg0 ;


@end


#endif