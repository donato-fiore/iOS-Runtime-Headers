// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAMULTISTEPRELATION_H
#define MAMULTISTEPRELATION_H



#import "MARelation.h"

@interface MAMultiStepRelation : MARelation

@property (readonly, nonatomic) MARelation *base; // ivar: _base
@property (readonly, nonatomic) NSUInteger maxNumberOfSteps; // ivar: _maxNumberOfSteps
@property (readonly, nonatomic) NSUInteger minNumberOfSteps; // ivar: _minNumberOfSteps


+(id)scanRelationWithScanner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjacencyByJoiningWithAdjacency:(id)arg0 graph:(id)arg1 ;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)initWithBase:(id)arg0 minNumberOfSteps:(NSUInteger)arg1 maxNumberOfSteps:(NSUInteger)arg2 ;
-(id)initWithBase:(id)arg0 numberOfSteps:(NSUInteger)arg1 ;
-(id)inverse;
-(id)visualString;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif