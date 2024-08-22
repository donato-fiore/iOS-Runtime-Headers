// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALPETMEMORY_H
#define PGPOTENTIALPETMEMORY_H

@class NSMutableSet, NSArray;


#import "PGPotentialMemory.h"
#import "PGGraphPersonNode.h"

@interface PGPotentialPetMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (readonly) PGGraphPersonNode *ownerPersonNode; // ivar: _ownerPersonNode
@property (retain) NSArray *petAssetLocalIdentifiers; // ivar: _petAssetLocalIdentifiers
@property (readonly) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithOwner:(id)arg0 year:(NSInteger)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif