// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALPASTSUPERSETMEMORY_H
#define PGPOTENTIALPASTSUPERSETMEMORY_H

@class NSSet, NSDateInterval;


#import "PGPotentialMemory.h"
#import "PGGraphLocationNode.h"
#import "PGGraphLocationNodeCollection.h"

@interface PGPotentialPastSupersetMemory : PGPotentialMemory

@property (readonly) NSSet *interestingMomentNodes; // ivar: _interestingMomentNodes
@property (readonly) NSDateInterval *supersetDateInterval; // ivar: _supersetDateInterval
@property (readonly) PGGraphLocationNode *supersetLocationNode; // ivar: _supersetLocationNode
@property (retain) PGGraphLocationNodeCollection *supersetLocationNodes; // ivar: _supersetLocationNodes


-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategory;
-(id)initWithSupersetLocationNode:(id)arg0 supersetDateInterval:(id)arg1 interestingMomentNodes:(id)arg2 momentNodes:(id)arg3 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif