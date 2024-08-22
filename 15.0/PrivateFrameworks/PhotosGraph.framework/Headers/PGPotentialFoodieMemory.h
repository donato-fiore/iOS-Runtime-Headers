// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALFOODIEMEMORY_H
#define PGPOTENTIALFOODIEMEMORY_H

@class PGGraphNode<PGAssetCollectionFeature>, NSDictionary, NSSet, PGGraphNode<PGGraphLocationOrArea>;


#import "PGPotentialMemory.h"

@interface PGPotentialFoodieMemory : PGPotentialMemory

@property (retain, nonatomic) PGGraphNode<PGAssetCollectionFeature> *featuredNode; // ivar: _featuredNode
@property (readonly, nonatomic) NSUInteger foodieType; // ivar: _foodieType
@property (readonly, nonatomic) NSUInteger kind; // ivar: _kind
@property (retain, nonatomic) NSDictionary *personAssetUUIDsByMomentNodeLocalIdentifier; // ivar: _personAssetUUIDsByMomentNodeLocalIdentifier
@property (retain, nonatomic) NSSet *relevantAssetLocalIdentifiers; // ivar: _relevantAssetLocalIdentifiers
@property (readonly, nonatomic) NSUInteger relevantFoodAssetCount; // ivar: _relevantFoodAssetCount
@property (retain, nonatomic) NSDictionary *relevantFoodAssetUUIDsByMomentNodeLocalIdentifier; // ivar: _relevantFoodAssetUUIDsByMomentNodeLocalIdentifier
@property (retain, nonatomic) PGGraphNode<PGGraphLocationOrArea> *tripLocationNode; // ivar: _tripLocationNode
@property (nonatomic) NSUInteger tripTitleLocationType; // ivar: _tripTitleLocationType
@property (retain, nonatomic) NSSet *uuidsOfRequiredAssets; // ivar: _uuidsOfRequiredAssets
@property (readonly, nonatomic) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithMomentNodes:(id)arg0 kind:(NSUInteger)arg1 type:(NSUInteger)arg2 year:(NSInteger)arg3 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif