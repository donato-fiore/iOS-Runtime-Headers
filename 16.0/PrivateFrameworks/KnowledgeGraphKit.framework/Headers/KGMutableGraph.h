// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGMUTABLEGRAPH_H
#define KGMUTABLEGRAPH_H

@protocol KGMutableGraphImplementation, OS_dispatch_queue;


#import "KGGraph.h"

@interface KGMutableGraph : KGGraph

@property (readonly, nonatomic) NSObject<KGMutableGraphImplementation> *mutableImplementation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // ivar: _transactionQueue


-(BOOL)_applyEdgeChangeRequests:(id)arg0 error:(*id)arg1 ;
-(BOOL)_applyNodeChangeRequests:(id)arg0 error:(*id)arg1 ;
-(BOOL)_performChangesAndWait:(id)arg0 error:(*id)arg1 ;
-(BOOL)performChangesAndWait:(id)arg0 error:(*id)arg1 ;
-(id)initWithMutableImplementation:(id)arg0 ;


@end


#endif