// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITASSETSDATASOURCEMANAGER_H
#define PXPHOTOKITASSETSDATASOURCEMANAGER_H

@class NSNumber, NSString, NSPredicate, PHPhotoLibrary;
@protocol PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager, PXChangeObserver, OS_dispatch_queue, PXPhotosDataSourceProvider;


#import "PXAssetsDataSourceManager.h"
#import "PXPhotosDataSource.h"
#import "PXPhotoKitAssetsDataSource.h"

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager, PXChangeObserver>

 {
    PXPhotosDataSource *_photosDataSource;
    NSNumber *_backgroundFetchOriginSection;
    NSObject<OS_dispatch_queue> *_initialDataSourceLoadingQueue;
    NSString *_localizedLoadingInitialDataSourceMessage;
    NSPredicate *_filterPredicate;
}


@property (nonatomic, setter=_setLoadingInitialPhotosDataSource:) BOOL _isLoadingInitialPhotosDataSource; // ivar: __isLoadingInitialPhotosDataSource
@property (nonatomic) NSInteger backgroundFetchOriginSection;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger libraryFilter; // ivar: _libraryFilter
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceIfExists;
@property (retain, nonatomic) NSObject<PXPhotosDataSourceProvider> *photosDataSourceProvider; // ivar: _photosDataSourceProvider
@property (readonly) Class superclass;


+(BOOL)_includeUnsavedSyndicatedAssetsForAssetCollection:(id)arg0 ;
+(id)dataSourceManagerForAssetCollection:(id)arg0 ;
+(id)dataSourceManagerForAssetCollection:(id)arg0 existingAssetsFetchResult:(id)arg1 existingKeyAssetsFetchResult:(id)arg2 fetchPropertySets:(id)arg3 basePredicate:(id)arg4 options:(NSUInteger)arg5 ignoreSharedLibraryFilters:(BOOL)arg6 ;
+(id)dataSourceManagerForAssetCollection:(id)arg0 existingAssetsFetchResult:(id)arg1 existingKeyAssetsFetchResult:(id)arg2 fetchPropertySets:(id)arg3 basePredicate:(id)arg4 options:(NSUInteger)arg5 ignoreSharedLibraryFilters:(BOOL)arg6 reverseSortOrder:(BOOL)arg7 ;
+(id)dataSourceManagerWithAsset:(id)arg0 ;
+(id)dataSourceManagerWithAsset:(id)arg0 options:(NSUInteger)arg1 ;
+(id)dataSourceManagerWithAssets:(id)arg0 ;
+(id)dataSourceManagerWithAssets:(id)arg0 containerTitle:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)forceAccurateSection:(NSInteger)arg0 andSectionsBeforeAndAfter:(NSInteger)arg1 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg0 ;
-(BOOL)isBackgroundFetching;
-(BOOL)isLoadingInitialDataSource;
-(BOOL)supportsFiltering;
-(id)_createAssetsDataSourceWithPhotosDataSource:(id)arg0 withChange:(id)arg1 ;
-(id)createDataSourceManagerForAssetsInSectionOfAsset:(id)arg0 ;
-(id)createInitialDataSource;
-(id)init;
-(id)initWithPhotosDataSource:(id)arg0 ;
-(id)initWithPhotosDataSourceProvider:(id)arg0 ;
-(id)localizedEmptyPlaceholderAttributedMessage;
-(id)localizedEmptyPlaceholderTitle;
-(id)localizedLoadingInitialDataSourceMessage;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)photosDataSourceInterestingAssetReferences:(id)arg0 ;
-(id)px_sharedLibrarySharingSuggestionsCountsManager;
-(void)_didFinishLoadingInitialPhotosDataSource;
-(void)_ensurePhotosDataSource;
-(void)dealloc;
-(void)excludeAssetsAtIndexPaths:(id)arg0 ;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)photosDataSourceDidFinishBackgroundFetching:(id)arg0 ;
-(void)refreshResultsForAssetCollection:(id)arg0 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg0 ;
-(void)setCurationEnabled:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)setFilteringDisabled:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(void)stopExcludingAssets:(id)arg0 ;
-(void)stopForceIncludingAllAssets;
-(void)updateWithPhotosDataSource:(id)arg0 andDataSourceChange:(id)arg1 ;


@end


#endif