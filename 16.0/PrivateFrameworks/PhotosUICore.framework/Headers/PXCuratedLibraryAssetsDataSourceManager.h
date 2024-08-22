// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYASSETSDATASOURCEMANAGER_H
#define PXCURATEDLIBRARYASSETSDATASOURCEMANAGER_H

@class NSDictionary, NSPredicate, NSString;
@protocol PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver, PXCuratedLibraryAssetsDataSourceManagerDelegate;


#import "PXAssetsDataSourceManager.h"
#import "PXCuratedLibraryAssetsDataSourceManagerConfiguration.h"
#import "PXAssetsDataSource.h"
#import "PXPhotoKitAssetsDataSourceManager.h"
#import "PXVisualPositionsChangeDetails.h"
#import "PXUpdater.h"

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver>

 {
    ? _delegateRespondsTo;
    NSDictionary *_dataSourceManagerByZoomLevel;
    BOOL _isForcingSections;
}


@property (readonly, nonatomic) NSPredicate *allPhotosFilterPredicate; // ivar: _allPhotosFilterPredicate
@property (nonatomic) NSInteger backgroundFetchOriginSection;
@property (readonly, nonatomic) BOOL canIncludeUnsavedSyndicatedAssets; // ivar: _canIncludeUnsavedSyndicatedAssets
@property (nonatomic) BOOL canLoadData; // ivar: _canLoadData
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManagerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PXAssetsDataSourceManager *currentAssetsDataSourceManager;
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource; // ivar: _currentDataSource
@property (nonatomic) NSInteger currentDataSourceZoomLevel; // ivar: _currentDataSourceZoomLevel
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *currentPhotoKitAssetsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCuratedLibraryAssetsDataSourceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastTransitionType; // ivar: _lastTransitionType
@property (retain, nonatomic) PXVisualPositionsChangeDetails *lastVisualPositionsChangeDetails; // ivar: _lastVisualPositionsChangeDetails
@property (nonatomic) NSInteger lastVisualPositionsChangeFromDataSourceIdentifier; // ivar: _lastVisualPositionsChangeFromDataSourceIdentifier
@property (nonatomic) NSInteger lastVisualPositionsChangeToDataSourceIdentifier; // ivar: _lastVisualPositionsChangeToDataSourceIdentifier
@property (readonly, nonatomic) NSInteger libraryFilter; // ivar: _libraryFilter
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (nonatomic) BOOL wantsCuration; // ivar: _wantsCuration
@property (readonly, nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel
@property (nonatomic) NSInteger zoomLevelForCurrentDataSourceManager; // ivar: _zoomLevelForCurrentDataSourceManager


-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSection:(NSInteger)arg0 andSectionsBeforeAndAfter:(NSInteger)arg1 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg0 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg0 inZoomLevel:(NSInteger)arg1 ;
-(BOOL)forceAllPhotosAccurateIfNeeded;
-(NSInteger)transitionTypeFromDataSourceIdentifier:(NSInteger)arg0 toDataSourceIdentifier:(NSInteger)arg1 ;
-(NSUInteger)libraryStateForZoomLevel:(NSInteger)arg0 ;
-(id)_photosDataSourceForZoomLevel:(NSInteger)arg0 ;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(NSInteger)arg0 withParentAssetCollectionReference:(id)arg1 ;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(NSInteger)arg0 withParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(*id)arg2 ;
-(id)assetsInAssetCollection:(id)arg0 ;
-(id)createInitialDataSource;
-(id)dataSourceForZoomLevel:(NSInteger)arg0 ;
-(id)dataSourceManagerForZoomLevel:(NSInteger)arg0 ;
-(id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(NSInteger)arg0 withParent:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)visualPositionsChangeDetailsFromDataSourceIdentifier:(NSInteger)arg0 toDataSourceIdentifier:(NSInteger)arg1 ;
-(void)_enumeratePhotoKitDataDataSourceManagers:(id)arg0 ;
-(void)_invalidateCuration;
-(void)_invalidateDataSource;
-(void)_invalidateDataSourceFilters;
-(void)_invalidateDataSourceManagers;
-(void)_invalidatePropertiesDerivedFromZoomLevel;
-(void)_updateCuration;
-(void)_updateDataSource;
-(void)_updateDataSourceFilters;
-(void)_updateDataSourceManagers;
-(void)_updatePropertiesDerivedFromZoomLevel;
-(void)didPerformChanges;
-(void)loadIfNeeded;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)resumeChangeDelivery:(id)arg0 ;
-(void)setCurationEnabled:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)setNeedsUpdate;
-(void)setTransientKeyAsset:(id)arg0 forAssetCollection:(id)arg1 zoomLevel:(NSInteger)arg2 ;


@end


#endif