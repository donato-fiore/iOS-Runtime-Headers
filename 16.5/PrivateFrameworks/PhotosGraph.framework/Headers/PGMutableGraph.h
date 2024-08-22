// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMUTABLEGRAPH_H
#define PGMUTABLEGRAPH_H



#import "PGGraph.h"

@interface PGMutableGraph : PGGraph



-(id)addEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)addNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)addUniqueNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 didCreate:(*BOOL)arg3 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 didCreate:(*BOOL)arg3 ;


@end


#endif