// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMESHGRAPH_H
#define GKMESHGRAPH_H

@class NSMutableArray, NSArray;


#import "GKGraph.h"

@interface GKMeshGraph : GKGraph {
    NSMutableArray *_sourceObstacles;
    *void _cMeshGraph;
    Class _nodeClass;
}


@property (readonly, nonatomic) float bufferRadius;
@property (readonly, nonatomic) NSArray *obstacles;
@property (readonly, nonatomic) NSUInteger triangleCount;
@property (nonatomic) NSUInteger triangulationMode;


+(BOOL)supportsSecureCoding;
+(id)graphWithBufferRadius:(float)arg0 minCoordinate:(Class)arg1 maxCoordinatenodeClass;
+(id)graphWithBufferRadius:(float)arg0 minCoordinatemaxCoordinate;
-(*void)cMeshGraph;
-(*void)makeCGraph;
-(BOOL)makeNodesFromTriangleCenters;
-(BOOL)makeNodesFromTriangleEdgeMidpoints;
-(BOOL)makeNodesFromTriangleVertices;
-(Class)classForGenericArgumentAtIndex:(NSUInteger)arg0 ;
-(Class)nodeClass;
-(id)initWithBufferRadius:(float)arg0 minCoordinate:(Class)arg1 maxCoordinatenodeClass;
-(id)initWithBufferRadius:(float)arg0 minCoordinatemaxCoordinate;
-(id)initWithCoder:(id)arg0 ;
-(struct GKTriangle )triangleAtIndex:(NSUInteger)arg0 ;
-(void)addObstacles:(id)arg0 ;
-(void)connectNodeUsingObstacles:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeObstacles:(id)arg0 ;
-(void)setMakeNodesFromTriangleCenters:(BOOL)arg0 ;
-(void)setMakeNodesFromTriangleEdgeMidpoints:(BOOL)arg0 ;
-(void)setMakeNodesFromTriangleVertices:(BOOL)arg0 ;
-(void)triangulate;


@end


#endif