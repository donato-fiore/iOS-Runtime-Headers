// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MACHAINRELATION_H
#define MACHAINRELATION_H

@class NSArray;


#import "MARelation.h"

@interface MAChainRelation : MARelation

@property (readonly, nonatomic) NSArray *steps; // ivar: _steps


+(id)scanRelationWithScanner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjacencyByJoiningWithAdjacency:(id)arg0 graph:(id)arg1 ;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)initWithSteps:(id)arg0 ;
-(id)inverse;
-(id)visualString;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif