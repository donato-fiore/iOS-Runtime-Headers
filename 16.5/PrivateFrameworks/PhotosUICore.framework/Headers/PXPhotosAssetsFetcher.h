// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSASSETSFETCHER_H
#define PXPHOTOSASSETSFETCHER_H

@class NSMapTable, NSString, PHPhotoLibrary;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPhotosAssetsFetcher : NSObject <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_resultsByAssetCollectionByConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


+(id)sharedFetcherForPhotoLibrary:(id)arg0 ;
-(id)_fetchConfigurationForCurationWithReferencePersons:(id)arg0 curationType:(NSInteger)arg1 options:(NSUInteger)arg2 libraryFilter:(NSInteger)arg3 ;
-(id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)arg0 referencePersons:(id)arg1 curated:(BOOL)arg2 libraryFilter:(NSInteger)arg3 ;
-(id)_fetchConfigurationWithFilterPredicate:(id)arg0 inclusionPredicate:(id)arg1 includeUnsavedSyndicatedAssets:(BOOL)arg2 fetchLimit:(NSUInteger)arg3 sortDescriptors:(id)arg4 reverseSortOrder:(BOOL)arg5 hideHiddenAssets:(BOOL)arg6 fetchPropertySets:(id)arg7 libraryFilter:(NSInteger)arg8 ;
-(id)_fetchKeyAssetsInAssetCollection:(id)arg0 curated:(BOOL)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 libraryFilter:(NSInteger)arg4 ;
-(id)_importantFetchNameForCollectionSubypte:(NSInteger)arg0 ;
-(id)existingCuratedAssetsFetchResultForAssetCollection:(id)arg0 referencePersons:(id)arg1 curationType:(NSInteger)arg2 options:(NSUInteger)arg3 libraryFilter:(NSInteger)arg4 ;
-(id)existingFetchResultForAssetCollection:(id)arg0 withFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 includeUnsavedSyndicatedAssets:(BOOL)arg3 fetchLimit:(NSUInteger)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(BOOL)arg6 hideHiddenAssets:(BOOL)arg7 fetchPropertySets:(id)arg8 libraryFilter:(NSInteger)arg9 ;
-(id)existingKeyAssetsFetchResultForAssetCollection:(id)arg0 referenceAsset:(id)arg1 referencePersons:(id)arg2 curated:(BOOL)arg3 libraryFilter:(NSInteger)arg4 ;
-(id)fetchAssetsInAssetCollection:(id)arg0 withFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 includeUnsavedSyndicatedAssets:(BOOL)arg3 fetchLimit:(NSUInteger)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(BOOL)arg6 hideHiddenAssets:(BOOL)arg7 fetchPropertySets:(id)arg8 libraryFilter:(NSInteger)arg9 ;
-(id)fetchCuratedAssetsInAssetCollection:(id)arg0 referencePersons:(id)arg1 curationType:(NSInteger)arg2 options:(NSUInteger)arg3 libraryFilter:(NSInteger)arg4 ;
-(id)fetchCuratedKeyAssetsInAssetCollection:(id)arg0 referenceAsset:(id)arg1 referencePersons:(id)arg2 libraryFilter:(NSInteger)arg3 ;
-(id)fetchKeyAssetsInAssetCollection:(id)arg0 libraryFilter:(NSInteger)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_storeExistingFetchResult:(id)arg0 forAssetCollection:(id)arg1 withFetchConfiguration:(id)arg2 ;
-(void)clearFetchResultsForAssetCollection:(id)arg0 ;
-(void)clearFetchResultsForAssetCollections:(id)arg0 ;
-(void)dealloc;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;


@end


#endif