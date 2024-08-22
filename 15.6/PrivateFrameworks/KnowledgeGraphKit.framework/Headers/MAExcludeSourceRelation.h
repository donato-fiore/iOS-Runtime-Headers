// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAEXCLUDESOURCERELATION_H
#define MAEXCLUDESOURCERELATION_H



#import "MARelation.h"

@interface MAExcludeSourceRelation : MARelation

@property (readonly, nonatomic) MARelation *base; // ivar: _base


+(id)scanRelationWithScanner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjacencyByJoiningWithAdjacency:(id)arg0 graph:(id)arg1 ;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)initWithBase:(id)arg0 ;
-(id)inverse;
-(id)visualString;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif