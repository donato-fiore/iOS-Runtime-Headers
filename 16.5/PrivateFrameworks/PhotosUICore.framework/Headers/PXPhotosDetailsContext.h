// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSCONTEXT_H
#define PXPHOTOSDETAILSCONTEXT_H

@class PHFetchResult, NSDictionary, NSString, PHAsset;
@protocol PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver, PXHierarchicalContext;


#import "PXObservable.h"
#import "PXDisplayTitleInfo.h"
#import "PXPhotosDetailsContext.h"
#import "PXPhotosDataSource.h"
#import "PXPhotosDetailsViewModel.h"
#import "PXPhotosDetailsVisualLookupData.h"

@interface PXPhotosDetailsContext : PXObservable <PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver, PXHierarchicalContext>



@property (readonly, nonatomic) PHFetchResult *assetCollections; // ivar: _assetCollections
@property (readonly, copy, nonatomic) NSDictionary *assetsByCollection; // ivar: _assetsByCollection
@property (readonly, nonatomic) NSUInteger contextHierarchyDepth; // ivar: _contextHierarchyDepth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // ivar: _displayTitleInfo
@property (readonly, nonatomic) PHAsset *firstAsset;
@property (readonly, nonatomic) BOOL hasLocation; // ivar: _hasLocation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHFetchResult *keyAssetsFetchResult; // ivar: _keyAssetsFetchResult
@property (readonly, copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, weak, nonatomic) PXPhotosDetailsContext *parentContext; // ivar: _parentContext
@property (readonly, nonatomic) PHFetchResult *people; // ivar: _people
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (readonly, nonatomic) BOOL shouldShowHeaderTitle;
@property (readonly, nonatomic) BOOL shouldShowMovieHeader; // ivar: _shouldShowMovieHeader
@property (readonly, nonatomic) BOOL shouldUseKeyFace; // ivar: _shouldUseKeyFace
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *titleFontName; // ivar: _titleFontName
@property (copy, nonatomic) id *unlockDeviceStatus; // ivar: _unlockDeviceStatus
@property (readonly, nonatomic) PXPhotosDetailsViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) NSInteger viewSourceOrigin; // ivar: _viewSourceOrigin
@property (readonly, nonatomic) PXPhotosDetailsVisualLookupData *visualLookupData; // ivar: _visualLookupData


+(id)_assetFetchResultForAssets:(id)arg0 ;
+(id)_fetchPropertySets;
+(id)_preheatedFetchResultForAsset:(id)arg0 ;
+(id)photosDetailsContextForAsset:(id)arg0 parentContext:(id)arg1 ;
+(id)photosDetailsContextForAssetCollection:(id)arg0 assets:(id)arg1 keyAssets:(id)arg2 enableCuration:(BOOL)arg3 enableKeyAssets:(BOOL)arg4 useVerboseSmartDescription:(BOOL)arg5 viewSourceOrigin:(NSInteger)arg6 ;
+(id)photosDetailsContextForAssetCollection:(id)arg0 assets:(id)arg1 keyAssets:(id)arg2 enableCuration:(BOOL)arg3 enableKeyAssets:(BOOL)arg4 useVerboseSmartDescription:(BOOL)arg5 viewSourceOrigin:(NSInteger)arg6 ignoreSharedLibraryFilters:(BOOL)arg7 ;
+(id)photosDetailsContextForAssetCollection:(id)arg0 assets:(id)arg1 viewSourceOrigin:(NSInteger)arg2 ;
+(id)photosDetailsContextForMemory:(id)arg0 ;
+(id)photosDetailsContextForMemory:(id)arg0 enableCuration:(BOOL)arg1 enableKeyAssets:(BOOL)arg2 ;
+(id)preheatedAssets;
+(void)photosDetailsContextPreheatForAssets:(id)arg0 ;
-(id)init;
-(id)initWithPhotosDataSource:(id)arg0 displayTitleInfo:(id)arg1 parentContext:(id)arg2 keyAssetsFetchResult:(id)arg3 ;
-(id)mutableChangeObject;
-(void)_updatePropertiesDerivedFromDisplayTitleInfo;
-(void)_updatePropertiesDerivedFromPhotosDataSource;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;


@end


#endif