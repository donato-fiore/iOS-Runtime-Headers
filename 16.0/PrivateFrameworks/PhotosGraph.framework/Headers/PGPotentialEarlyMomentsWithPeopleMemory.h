// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPOTENTIALEARLYMOMENTSWITHPEOPLEMEMORY_H
#define PGPOTENTIALEARLYMOMENTSWITHPEOPLEMEMORY_H

@class NSArray, NSSet;


#import "PGPotentialMemory.h"

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory

@property (retain, nonatomic) NSArray *facedAssetLocalIdentifiers; // ivar: _facedAssetLocalIdentifiers
@property (readonly, nonatomic) NSSet *personNodes; // ivar: _personNodes


-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategory;
-(id)initWithMomentNodes:(id)arg0 personNodes:(id)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif