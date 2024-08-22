// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEANINGFULEVENTCOLLECTIONTRAIT_H
#define PGMEANINGFULEVENTCOLLECTIONTRAIT_H



#import "PGMeaningfulEventTrait.h"
#import "PGGraphNodeCollection.h"

@interface PGMeaningfulEventCollectionTrait : PGMeaningfulEventTrait

@property (copy, nonatomic) id *additionalMatchingBlock; // ivar: _additionalMatchingBlock
@property (readonly, nonatomic) PGGraphNodeCollection *negativeNodes; // ivar: _negativeNodes
@property (readonly, nonatomic) PGGraphNodeCollection *nodes; // ivar: _nodes


-(BOOL)isActive;
-(id)debugDescriptionWithMomentNode:(id)arg0 ;
-(id)initWithNodes:(id)arg0 ;
-(id)initWithNodes:(id)arg0 negativeNodes:(id)arg1 ;


@end


#endif