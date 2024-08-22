// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGFULEVENTSETTRAIT_H
#define PGMEANINGFULEVENTSETTRAIT_H

@class NSSet;


#import "PGMeaningfulEventTrait.h"

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait

@property (copy, nonatomic) id *additionalMatchingBlock; // ivar: _additionalMatchingBlock
@property (readonly, nonatomic) NSSet *negativeNodes; // ivar: _negativeNodes
@property (readonly, nonatomic) NSSet *nodes; // ivar: _nodes


-(BOOL)isActive;
-(id)debugDescriptionWithMomentNode:(id)arg0 ;
-(id)initWithNodes:(id)arg0 ;
-(id)initWithNodes:(id)arg0 negativeNodes:(id)arg1 ;


@end


#endif