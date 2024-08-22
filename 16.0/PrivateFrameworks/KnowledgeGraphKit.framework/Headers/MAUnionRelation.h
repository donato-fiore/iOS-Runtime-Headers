// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAUNIONRELATION_H
#define MAUNIONRELATION_H

@class NSArray;


#import "MARelation.h"

@interface MAUnionRelation : MARelation

@property (readonly, nonatomic) NSArray *relations; // ivar: _relations


+(id)scanRelationWithScanner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 graph:(id)arg1 ;
-(id)initWithRelations:(id)arg0 ;
-(id)inverse;
-(id)visualString;
-(void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg0 toTargetNodeIdentifiers:(id)arg1 graph:(id)arg2 ;


@end


#endif