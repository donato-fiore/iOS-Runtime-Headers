// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANEIGHBORRELATION_H
#define MANEIGHBORRELATION_H



#import "MARelation.h"
#import "MAEdgeFilter.h"

@interface MANeighborRelation : MARelation

@property (readonly, copy, nonatomic) MAEdgeFilter *edgeFilter; // ivar: _edgeFilter
@property (readonly, nonatomic) NSUInteger edgeType; // ivar: _edgeType


+(id)scanRelationWithScanner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjacencyByJoiningWithAdjacency:(id)arg0 graph:(id)arg1 ;
-(id)adjacencyWithEndNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)initWithEdgeType:(NSUInteger)arg0 edgeFilter:(id)arg1 ;
-(id)inverse;
-(id)visualString;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif