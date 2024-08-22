// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALMEANINGFULEVENTMEMORY_H
#define PGPOTENTIALMEANINGFULEVENTMEMORY_H

@protocol PGGraphMeaningfulEvent;


#import "PGPotentialMemory.h"
#import "PGGraphMeaningNode.h"

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory {
    PGGraphMeaningNode *_preciseMeaningNode;
}


@property (readonly) NSUInteger meaning; // ivar: _meaning
@property (readonly) NSObject<PGGraphMeaningfulEvent> *meaningfulEvent; // ivar: _meaningfulEvent


-(NSUInteger)memoryCategory;
-(id)initWithCategory:(NSUInteger)arg0 meaningfulEvent:(id)arg1 meaning:(NSUInteger)arg2 preciseMeaningNode:(id)arg3 controller:(id)arg4 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif