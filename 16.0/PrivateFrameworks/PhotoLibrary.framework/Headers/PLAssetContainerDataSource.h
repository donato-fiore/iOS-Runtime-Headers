// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETCONTAINERDATASOURCE_H
#define PLASSETCONTAINERDATASOURCE_H

@class NSMutableDictionary, PHFetchResult, NSString;
@protocol PHAssetCollectionDataSource;

#import <Foundation/Foundation.h>


@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource>

 {
    NSMutableDictionary *_assetsFetchResultByAssetCollection;
    NSUInteger _allAssetsCount;
    *NSUInteger _containerCounts;
    BOOL _cachedValuesNeedUpdate;
    NSUInteger _lastAssetCollectionIndex;
}


@property (readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult; // ivar: _assetCollectionsFetchResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasAssetAtIndexPath:(id)arg0 ;
-(NSUInteger)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(NSUInteger)arg0 wrap:(BOOL)arg1 ;
-(NSUInteger)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(NSUInteger)arg0 wrap:(BOOL)arg1 ;
-(NSUInteger)allAssetsCount;
-(NSUInteger)assetCountForContainer:(id)arg0 ;
-(NSUInteger)assetCountForContainerAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)decrementGlobalIndex:(NSUInteger)arg0 insideCurrentAssetContainer:(BOOL)arg1 andWrap:(BOOL)arg2 ;
-(NSUInteger)globalIndexForIndexPath:(id)arg0 ;
-(NSUInteger)globalIndexOfAsset:(id)arg0 ;
-(NSUInteger)incrementGlobalIndex:(NSUInteger)arg0 insideCurrentAssetContainer:(BOOL)arg1 andWrap:(BOOL)arg2 ;
-(NSUInteger)indexOfContainer:(id)arg0 ;
-(NSUInteger)indexOffsetForAssetContainerAtAssetIndex:(NSUInteger)arg0 ;
-(id)assetAtGlobalIndex:(NSUInteger)arg0 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetContainerAtIndex:(NSUInteger)arg0 ;
-(id)assetContainerForAsset:(id)arg0 ;
-(id)assetContainerForAssetGlobalIndex:(NSUInteger)arg0 ;
-(id)assetInAssetContainer:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)assetWithObjectID:(id)arg0 ;
-(id)assetsInAssetCollection:(id)arg0 ;
-(id)assetsInAssetCollectionAtIndex:(NSUInteger)arg0 ;
-(id)decrementAssetIndexPath:(id)arg0 insideCurrentAssetContainer:(BOOL)arg1 andWrap:(BOOL)arg2 ;
-(id)findNearestIndexPath:(id)arg0 preferNext:(BOOL)arg1 ;
-(id)firstAssetIndexPath;
-(id)incrementAssetIndexPath:(id)arg0 insideCurrentAssetContainer:(BOOL)arg1 andWrap:(BOOL)arg2 ;
-(id)indexPathForGlobalIndex:(NSUInteger)arg0 ;
-(id)indexPathOfAsset:(id)arg0 ;
-(id)initWithAssetCollectionsFetchResult:(id)arg0 collectionsAssetsFetchResults:(id)arg1 ;
-(id)lastAssetIndexPath;
-(id)newAssetsFetchResults;
-(id)pl_fetchAllAssets;
-(void)_updateCachedCount:(NSUInteger)arg0 forContainerAtContainerIndex:(NSUInteger)arg1 ;
-(void)_updateCachedValues;
-(void)dealloc;
-(void)viewControllerPhotoLibraryDidChange:(id)arg0 ;


@end


#endif