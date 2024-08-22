// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPOTENTIALHOBBYMEMORY_H
#define PGPOTENTIALHOBBYMEMORY_H

@class NSMutableSet, NSArray;


#import "PGPotentialMemory.h"
#import "PGGraphPersonNode.h"

@interface PGPotentialHobbyMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
    NSUInteger _memoryCategorySubcategory;
}


@property (retain) NSArray *hobbyAssetLocalIdentifiers; // ivar: _hobbyAssetLocalIdentifiers
@property (readonly) NSInteger hobbyType; // ivar: _hobbyType
@property (readonly) PGGraphPersonNode *personNode; // ivar: _personNode
@property (readonly) NSInteger year; // ivar: _year


+(id)sceneFeatureNameForHobbyType:(NSInteger)arg0 ;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategory;
-(id)initWithPerson:(id)arg0 year:(NSInteger)arg1 hobbyType:(NSInteger)arg2 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif