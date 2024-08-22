// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GVGRAPH_H
#define GVGRAPH_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface GVGraph : NSObject

@property (readonly, nonatomic) CGRect bounds;
@property (retain, nonatomic) NSMutableOrderedSet *edges; // ivar: edges
@property (retain, nonatomic) NSMutableOrderedSet *nodes; // ivar: nodes


-(BOOL)hasEdgeFrom:(id)arg0 to:(id)arg1 ;
-(BOOL)hasNode:(id)arg0 ;
-(BOOL)render:(id)arg0 ;
-(id)allEdges;
-(id)allNodes;
-(id)connectedSubgraphs;
-(id)description;
-(id)edgeFrom:(id)arg0 to:(id)arg1 ;
-(id)init;
-(void)addEdgeFrom:(id)arg0 to:(id)arg1 ;
-(void)addEdgeFrom:(id)arg0 to:(id)arg1 reversed:(BOOL)arg2 ;
-(void)addNode:(id)arg0 ;
-(void)dealloc;
-(void)iterateOverAllEdges:(id)arg0 ;
-(void)iterateOverAllNodes:(id)arg0 ;
-(void)removeEdgeFrom:(id)arg0 to:(id)arg1 ;
-(void)removeNode:(id)arg0 ;
-(void)reverseEdge:(id)arg0 ;
-(void)undoReverseEdge:(id)arg0 ;


@end


#endif