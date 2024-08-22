// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCURATIONMANAGER_H
#define PGCURATIONMANAGER_H

@class PHPhotoLibrary, PFSceneGeography;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGCurationCache.h"
#import "PGCurationCriteriaFactory.h"

@interface PGCurationManager : NSObject

@property (readonly, nonatomic) PGCurationCache *cache; // ivar: _cache
@property (readonly, nonatomic) PGCurationCriteriaFactory *curationCriteriaFactory; // ivar: _curationCriteriaFactory
@property (readonly, nonatomic) NSObject<OS_os_log> *curationLoggingConnection; // ivar: _curationLoggingConnection
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PFSceneGeography *sceneGeography; // ivar: _sceneGeography


+(BOOL)areAssetsInteresting:(id)arg0 minimumNumberOfCuratedAssets:(NSUInteger)arg1 duration:(NSUInteger)arg2 precision:(NSUInteger)arg3 ;
+(CGFloat)contentScoreForAssets:(id)arg0 ;
+(NSUInteger)maximumNumberOfItemsForDuration:(NSUInteger)arg0 withTotalNumberOfItems:(NSUInteger)arg1 ;
+(NSUInteger)maximumNumberOfItemsForDuration:(NSUInteger)arg0 withTotalNumberOfItems:(NSUInteger)arg1 spanningNumberOfDays:(CGFloat)arg2 ;
+(NSUInteger)minimumNumberOfItemsForDuration:(NSUInteger)arg0 withMaximumNumberOfItems:(NSUInteger)arg1 ;
+(id)_filterAssets:(id)arg0 withPositiveLocations:(id)arg1 negativeLocations:(id)arg2 maximumDistance:(CGFloat)arg3 ;
+(id)_filteredAssetsWithFaceFilter:(NSUInteger)arg0 forAssets:(id)arg1 ;
+(id)assetPropertySetsForCuration;
+(id)assetsBeautifierForPrecision:(NSUInteger)arg0 ;
+(id)dedupedAssetsWithAssets:(id)arg0 precision:(NSUInteger)arg1 ;
+(id)defaultAssetSortDescriptors;
+(id)dejunkAndDedupeItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
+(id)filterAssets:(id)arg0 inMomentNodes:(id)arg1 forAreaNodes:(id)arg2 withMaximumDistance:(CGFloat)arg3 ;
+(id)filterAssets:(id)arg0 inMomentNodes:(id)arg1 forCityNodes:(id)arg2 withMaximumDistance:(CGFloat)arg3 ;
+(id)filterAssets:(id)arg0 inMomentNodes:(id)arg1 forLocationNodes:(id)arg2 withMaximumDistance:(CGFloat)arg3 ;
+(id)filterAssets:(id)arg0 inMomentNodes:(id)arg1 forStateNodes:(id)arg2 withMaximumDistance:(CGFloat)arg3 ;
+(id)filterAssets:(id)arg0 withLocation:(id)arg1 maximumDistance:(CGFloat)arg2 ;
+(id)filterAssets:(id)arg0 withLocations:(id)arg1 maximumDistance:(CGFloat)arg2 ;
+(id)filteredAssetsFromAssets:(id)arg0 withContextualAssetLocalIdentifiers:(id)arg1 approximateTimeDistance:(CGFloat)arg2 ;
+(id)representativeAssetsForAssetCollection:(id)arg0 curationContext:(id)arg1 progressBlock:(id)arg2 ;
+(id)representativeAssetsForAssets:(id)arg0 extendedCuratedAssets:(id)arg1 progressBlock:(id)arg2 ;
+(id)representativeAssetsForAssets:(id)arg0 progressBlock:(id)arg1 ;
+(id)sceneInfoWithAsset:(id)arg0 curationSession:(id)arg1 ;
+(id)summaryClusteringForDuration:(NSUInteger)arg0 andPrecision:(NSUInteger)arg1 ;
-(BOOL)isAssetCollectionInteresting:(id)arg0 precision:(NSUInteger)arg1 curationContext:(id)arg2 ;
-(BOOL)isAssetFeederInteresting:(id)arg0 withAlternateJunking:(BOOL)arg1 precision:(NSUInteger)arg2 ;
-(CGFloat)contentScoreForAssetCollection:(id)arg0 precision:(NSUInteger)arg1 curationContext:(id)arg2 ;
-(CGFloat)contentScoreForAssetFeeder:(id)arg0 precision:(NSUInteger)arg1 ;
-(NSUInteger)optimalDurationForAssetCollection:(id)arg0 duration:(NSUInteger)arg1 precision:(NSUInteger)arg2 options:(id)arg3 curationContext:(id)arg4 ;
-(id)_bestAssetInSummarizedAssets:(id)arg0 forReferencePersonLocalIdentifiers:(id)arg1 ;
-(id)_bestAssetsInAssets:(id)arg0 forReferencePersonLocalIdentifiers:(id)arg1 minimumRatioOfReferencePersonsPerAsset:(CGFloat)arg2 progressBlock:(id)arg3 ;
-(id)_contextualBestAssetInAssets:(id)arg0 ;
-(id)_curatedKeyAssetIdentifierForCollectionUUID:(id)arg0 curatedAssetCollection:(id)arg1 options:(id)arg2 criteria:(id)arg3 curatedKeyAsset:(*id)arg4 curationContext:(id)arg5 ;
-(id)_extendedAssetsForCurationForAssets:(id)arg0 matchingAssetsRange:(struct _NSRange )arg1 ;
-(id)_filteredAssetsForAssets:(id)arg0 inMoments:(id)arg1 keepFavorites:(BOOL)arg2 ;
-(id)_firstBestFacedAssetInAssetCluster:(id)arg0 facesByAssetIdentifiers:(id)arg1 ;
-(id)_libraryDateInterval;
-(id)_timeBasedAssetClustersForAssets:(id)arg0 maximumClusterCount:(NSUInteger)arg1 ;
-(id)bestAssetForAssetFeeder:(id)arg0 options:(id)arg1 ;
-(id)bestAssetForAssetFeeder:(id)arg0 options:(id)arg1 criteria:(id)arg2 ;
-(id)bestAssetInAssets:(id)arg0 forReferencePersonLocalIdentifiers:(id)arg1 minimumNumberOfCommonPeople:(NSUInteger)arg2 forKeyAsset:(BOOL)arg3 forMemories:(BOOL)arg4 allowGuestAsset:(BOOL)arg5 ;
-(id)bestAssetInAssets:(id)arg0 forReferencePersonLocalIdentifiers:(id)arg1 requiredMinimumNumberOfReferencePersons:(NSUInteger)arg2 forMemories:(BOOL)arg3 allowGuestAsset:(BOOL)arg4 wantsGoodSquareCropScore:(BOOL)arg5 ;
-(id)bestAssetInAssets:(id)arg0 options:(id)arg1 ;
-(id)bestAssetsForAssetFeeder:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)criteriaForKeyAssetCurationWithAssetCollection:(id)arg0 graph:(id)arg1 options:(id)arg2 ;
-(id)curatedAssetsForAssetCollection:(id)arg0 duration:(NSUInteger)arg1 precision:(NSUInteger)arg2 referencePersonLocalIdentifiers:(id)arg3 curationContext:(id)arg4 progressBlock:(id)arg5 ;
-(id)curatedAssetsForAssetCollection:(id)arg0 options:(id)arg1 curationContext:(id)arg2 progressBlock:(id)arg3 ;
-(id)curatedAssetsForPersonLocalIdentifier:(id)arg0 progressBlock:(id)arg1 ;
-(id)curatedKeyAssetForAssetCollection:(id)arg0 curatedAssetCollection:(id)arg1 options:(id)arg2 criteria:(id)arg3 curationContext:(id)arg4 ;
-(id)curatedKeyAssetForCollectionUUID:(id)arg0 curatedAssetCollection:(id)arg1 options:(id)arg2 criteria:(id)arg3 curationContext:(id)arg4 ;
-(id)curatedKeyAssetIdentifierForCollectionUUID:(id)arg0 curatedAssetCollection:(id)arg1 options:(id)arg2 criteria:(id)arg3 curationContext:(id)arg4 ;
-(id)defaultAssetFetchOptions;
-(id)defaultAssetFetchOptionsForMemories;
-(id)defaultAssetFetchOptionsForMemoriesWithoutPrefetch;
-(id)dejunkAndDedupeAssetsInAssetCollection:(id)arg0 options:(id)arg1 curationContext:(id)arg2 progressBlock:(id)arg3 ;
-(id)fetchAssetWithLocalIdentifier:(id)arg0 ;
-(id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)memoryCuratedAssetsForAssetCollection:(id)arg0 duration:(NSUInteger)arg1 withContextualAssetLocalIdentifiers:(id)arg2 minimumProportion:(CGFloat)arg3 graph:(id)arg4 curationContext:(id)arg5 progressBlock:(id)arg6 ;
-(id)memoryCuratedAssetsForAssets:(id)arg0 duration:(NSUInteger)arg1 withContextualAssetLocalIdentifiers:(id)arg2 minimumProportion:(CGFloat)arg3 graph:(id)arg4 curationContext:(id)arg5 progressBlock:(id)arg6 ;
-(void)invalidateCurationCacheForMomentUUIDs:(id)arg0 ;


@end


#endif