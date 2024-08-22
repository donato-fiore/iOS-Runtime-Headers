// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSGRAPH_H
#define CLSGRAPH_H

@class NSMapTable;
@protocol CLSGraphVertex><NSObject;

#import <Foundation/Foundation.h>


@interface CLSGraph : NSObject {
    NSMapTable *_verticesMap;
    NSMapTable *_inEdgesMap;
    NSMapTable *_outEdgesMap;
    NSUInteger _options;
}


@property (readonly, nonatomic) NSObject<CLSGraphVertex><NSObject> *anyVertex;
@property (readonly, nonatomic) NSUInteger edgeCount;
@property (readonly, nonatomic) NSUInteger vertexCount;


-(BOOL)containsVertex:(id)arg0 ;
-(BOOL)containsVertexWithVertexID:(id)arg0 ;
-(BOOL)hasEdgeFromVertex:(id)arg0 toVertex:(id)arg1 ;
-(NSUInteger)_degreeOfVertex:(id)arg0 inEdgeMap:(id)arg1 ;
-(NSUInteger)degree:(id)arg0 ;
-(NSUInteger)inDegree:(id)arg0 ;
-(NSUInteger)outDegree:(id)arg0 ;
-(id)inNeighboursOfVertex:(id)arg0 ;
-(id)init;
-(id)initWithMemoryOptions:(NSUInteger)arg0 ;
-(id)neighboursOfVertex:(id)arg0 ;
-(id)outNeighboursOfVertex:(id)arg0 ;
-(id)vertexWithVertexID:(id)arg0 ;
-(void)_enumerateVerticesInEdges:(id)arg0 skipingEdges:(id)arg1 enumerationBlock:(id)arg2 ;
-(void)_removeEdgeFromVertexWithID:(id)arg0 toVertexWithID:(id)arg1 ;
-(void)_traverseStartingAtVertex:(id)arg0 previousVertex:(id)arg1 visitedVertices:(id)arg2 enumerationBlock:(id)arg3 ;
-(void)addEdgeFromVertex:(id)arg0 toVertex:(id)arg1 ;
-(void)addVertex:(id)arg0 ;
-(void)enumerate:(id)arg0 ;
-(void)enumerateInNeighboursOfVertex:(id)arg0 enumerationBlock:(id)arg1 ;
-(void)enumerateNeighboursOfVertex:(id)arg0 enumerationBlock:(id)arg1 ;
-(void)enumerateOutNeighboursOfVertex:(id)arg0 enumerationBlock:(id)arg1 ;
-(void)removeEdgeFromVertex:(id)arg0 toVertex:(id)arg1 ;
-(void)removeSubtreeStartingAtVertex:(id)arg0 ;
-(void)removeVertex:(id)arg0 ;
-(void)reset;
-(void)traverse:(id)arg0 ;
-(void)traverseStartingAtVertex:(id)arg0 enumerationBlock:(id)arg1 ;
// -(void)traverseVerticesPassingTest:(id)arg0 enumerationBlock:(unk)arg1  ;


@end


#endif