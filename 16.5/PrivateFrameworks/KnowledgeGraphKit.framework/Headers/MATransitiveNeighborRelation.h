// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MATRANSITIVENEIGHBORRELATION_H
#define MATRANSITIVENEIGHBORRELATION_H



#import "MANeighborRelation.h"

@interface MATransitiveNeighborRelation : MANeighborRelation



-(BOOL)isTransitive;
-(id)initWithEdgeType:(NSUInteger)arg0 edgeFilter:(id)arg1 ;
-(id)initWithNeighborRelation:(id)arg0 ;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif