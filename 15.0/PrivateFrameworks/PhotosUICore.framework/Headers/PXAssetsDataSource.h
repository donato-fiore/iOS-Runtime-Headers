// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETSDATASOURCE_H
#define PXASSETSDATASOURCE_H

@class NSPredicate;
@protocol PXDisplayCollection, PXDisplayAssetCollection, PXDisplayAsset;


#import "PXSectionedDataSource.h"

@interface PXAssetsDataSource : PXSectionedDataSource {
    NSInteger _cachedNumberOfAssets;
}


@property (readonly, nonatomic) BOOL areAllSectionsConsideredAccurate;
@property (readonly, nonatomic) NSObject<PXDisplayCollection> *containerCollection;
@property (readonly, nonatomic) NSUInteger estimatedOtherCount; // ivar: _estimatedOtherCount
@property (readonly, nonatomic) NSUInteger estimatedPhotosCount; // ivar: _estimatedPhotosCount
@property (readonly, nonatomic) NSUInteger estimatedVideosCount; // ivar: _estimatedVideosCount
@property (readonly, nonatomic) NSPredicate *filterPredicate;
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *firstAssetCollection;
@property (readonly, nonatomic) BOOL isFiltered;
@property (readonly, nonatomic) BOOL isSorted;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset;
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *lastAssetCollection;
@property (readonly, nonatomic) NSUInteger numberOfAssets;
@property (readonly, nonatomic) NSInteger startingSection;
@property (readonly, nonatomic) BOOL startsAtEnd;


-(BOOL)hasCurationForAssetCollection:(id)arg0 ;
-(BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath )arg0 ;
-(BOOL)isFilteringAssetCollection:(id)arg0 ;
-(BOOL)isFilteringDisabledForAssetCollection:(id)arg0 ;
-(BOOL)isFilteringDisabledForSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(BOOL)isFilteringSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(Class)objectReferenceClassForItem;
-(Class)objectReferenceClassForSection;
-(NSInteger)aggregateMediaType;
-(NSInteger)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg0 ;
-(NSInteger)numberOfCuratedItemsInAssetCollection:(id)arg0 ;
-(NSInteger)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(NSInteger)numberOfSectionsWithEnrichmentState:(unsigned short)arg0 ;
-(NSInteger)numberOfUncuratedItemsInAssetCollection:(id)arg0 ;
-(NSInteger)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(NSInteger)totalNumberOfItems;
-(NSUInteger)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)assetAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)assetCollectionReferenceAtSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)assetCollectionReferenceForAssetCollectionReference:(id)arg0 ;
-(id)assetCollectionReferenceNearestToObjectReference:(id)arg0 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg0 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg0 assetCollectionReferenceWithSameKeyAssetAsParent:(*id)arg1 ;
-(id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)assetReferenceForAssetReference:(id)arg0 ;
-(id)assetsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)keyAssetsForAssetCollection:(id)arg0 ;
-(id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)metadataAssetAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectIDAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectReferenceNearestToObjectReference:(id)arg0 inSection:(NSInteger)arg1 ;
-(id)photosGraphSuggestedContributions;
-(id)startingAssetReference;
-(id)uncuratedAssetsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForAssetCollectionReference:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForAssetReference:(id)arg0 ;
-(struct PXSimpleIndexPath )keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)prefetchIndexPaths:(id)arg0 level:(NSUInteger)arg1 ;


@end


#endif