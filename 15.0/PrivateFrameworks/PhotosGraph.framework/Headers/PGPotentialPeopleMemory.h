// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALPEOPLEMEMORY_H
#define PGPOTENTIALPEOPLEMEMORY_H

@class NSMutableSet, NSArray;


#import "PGPotentialMemory.h"
#import "PGGraphPersonNode.h"

@interface PGPotentialPeopleMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (retain) NSArray *facedAssetLocalIdentifiers; // ivar: _facedAssetLocalIdentifiers
@property (retain) PGGraphPersonNode *personNode; // ivar: _personNode
@property (readonly) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithSubcategory:(NSUInteger)arg0 peopleNode:(id)arg1 year:(NSInteger)arg2 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif