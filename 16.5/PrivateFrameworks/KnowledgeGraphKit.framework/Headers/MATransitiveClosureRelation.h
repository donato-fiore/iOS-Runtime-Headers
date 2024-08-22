// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MATRANSITIVECLOSURERELATION_H
#define MATRANSITIVECLOSURERELATION_H



#import "MARelation.h"

@interface MATransitiveClosureRelation : MARelation

@property (readonly, nonatomic) MARelation *base; // ivar: _base


+(id)scanRelationWithScanner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTransitive;
-(NSUInteger)hash;
-(id)adjacencyByJoiningWithAdjacency:(id)arg0 graph:(id)arg1 ;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)initWithBase:(id)arg0 ;
-(id)inverse;
-(id)transitiveClosure;
-(id)visualString;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif