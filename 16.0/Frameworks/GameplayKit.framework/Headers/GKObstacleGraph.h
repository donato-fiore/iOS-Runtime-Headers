// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKOBSTACLEGRAPH_H
#define GKOBSTACLEGRAPH_H

@class NSMutableArray, NSArray;


#import "GKGraph.h"

@interface GKObstacleGraph : GKGraph {
    NSMutableArray *_sourceObstacles;
    *void _cObstacleGraph;
    Class _nodeClass;
}


@property (readonly, nonatomic) float bufferRadius;
@property (readonly, nonatomic) NSArray *obstacles;


+(BOOL)supportsSecureCoding;
+(id)graphWithObstacles:(id)arg0 bufferRadius:(float)arg1 ;
+(id)graphWithObstacles:(id)arg0 bufferRadius:(float)arg1 nodeClass:(Class)arg2 ;
-(*void)cObstacleGraph;
-(*void)makeCGraph;
-(BOOL)isConnectionLockedFromNode:(id)arg0 toNode:(id)arg1 ;
-(Class)classForGenericArgumentAtIndex:(NSUInteger)arg0 ;
-(Class)nodeClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObstacles:(id)arg0 bufferRadius:(float)arg1 ;
-(id)initWithObstacles:(id)arg0 bufferRadius:(float)arg1 nodeClass:(Class)arg2 ;
-(id)mutObstacles;
-(id)nodesForObstacle:(id)arg0 ;
-(void)addObstacles:(id)arg0 ;
-(void)connectNodeUsingObstacles:(id)arg0 ;
-(void)connectNodeUsingObstacles:(id)arg0 ignoringBufferRadiusOfObstacles:(id)arg1 ;
-(void)connectNodeUsingObstacles:(id)arg0 ignoringObstacles:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)lockConnectionFromNode:(id)arg0 toNode:(id)arg1 ;
-(void)removeAllObstacles;
-(void)removeObstacles:(id)arg0 ;
-(void)unlockConnectionFromNode:(id)arg0 toNode:(id)arg1 ;


@end


#endif