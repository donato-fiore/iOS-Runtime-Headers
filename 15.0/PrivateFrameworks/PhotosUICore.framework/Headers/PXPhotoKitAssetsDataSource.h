// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETSDATASOURCE_H
#define PXPHOTOKITASSETSDATASOURCE_H

@class NSMutableDictionary, NSCache;


#import "PXAssetsDataSource.h"
#import "PXPhotosDataSourceChange.h"
#import "PXPhotosDataSource.h"

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource {
    NSMutableDictionary *_layoutItemByAssetCache;
    NSCache *_fetchedKeyAssetByAssetCollectionLocalIdentifierCache;
    NSCache *_assetReferenceNearestToAssetCache;
}


@property (readonly, nonatomic) PXPhotosDataSourceChange *change; // ivar: _change
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource


+(id)dataSourceWithAsset:(id)arg0 ;
+(id)dataSourceWithAssets:(id)arg0 ;
-(BOOL)areAllSectionsConsideredAccurate;
-(BOOL)containsAnyItems;
-(BOOL)containsMultipleItems;
-(BOOL)couldObjectReferenceAppear:(id)arg0 ;
-(BOOL)hasCurationForAssetCollection:(id)arg0 ;
-(BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath )arg0 ;
-(BOOL)isFiltered;
-(BOOL)isFilteringAssetCollection:(id)arg0 ;
-(BOOL)isFilteringDisabledForAssetCollection:(id)arg0 ;
-(BOOL)isSorted;
-(BOOL)startsAtEnd;
-(NSInteger)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg0 ;
-(NSInteger)identifier;
-(NSInteger)numberOfCuratedItemsInAssetCollection:(id)arg0 ;
-(NSInteger)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSectionsWithEnrichmentState:(unsigned short)arg0 ;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(NSInteger)numberOfUncuratedItemsInAssetCollection:(id)arg0 ;
-(NSInteger)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(NSInteger)startingSection;
-(NSUInteger)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(NSUInteger)estimatedOtherCount;
-(NSUInteger)estimatedPhotosCount;
-(NSUInteger)estimatedVideosCount;
-(id)_assetCollectionReferenceNearestToObjectReferenceAssumingSortedByIncreasingCreationDate:(id)arg0 ;
-(id)_assetReferenceReferenceNearestToAssetReferenceUsingExhaustiveSearch:(id)arg0 ;
-(id)_fastKeyCuratedAssetForAssetCollection:(id)arg0 ;
-(id)assetCollectionReferenceNearestToObjectReference:(id)arg0 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg0 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg0 assetCollectionReferenceWithSameKeyAssetAsParent:(*id)arg1 ;
-(id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)containerCollection;
-(id)description;
-(id)filterPredicate;
-(id)firstAssetCollection;
-(id)indexPathSetForObjectIDs:(id)arg0 ;
-(id)initWithImmutablePhotosDataSource:(id)arg0 withChange:(id)arg1 ;
-(id)inputForItem:(id)arg0 ;
-(id)keyAssetsForAssetCollection:(id)arg0 ;
-(id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)lastAssetCollection;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectReferenceNearestToObjectReference:(id)arg0 ;
-(id)objectReferenceNearestToObjectReference:(id)arg0 inSection:(NSInteger)arg1 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)photosGraphSuggestedContributions;
-(id)selectionSnapshotForAsset:(id)arg0 assetCollection:(id)arg1 ;
-(id)startingAssetReference;
-(id)uncuratedAssetsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )_indexPathForObjectReference:(id)arg0 restrictedToSection:(NSInteger)arg1 ;
-(struct PXSimpleIndexPath )_indexPathForSavedSyndicatedAssetReference:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectID:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;
-(struct PXSimpleIndexPath )keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)prefetchIndexPaths:(id)arg0 ;
-(void)prefetchIndexPaths:(id)arg0 level:(NSUInteger)arg1 ;
-(void)prefetchSections:(id)arg0 ;


@end


#endif