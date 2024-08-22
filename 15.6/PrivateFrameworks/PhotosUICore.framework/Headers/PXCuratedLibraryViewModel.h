// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYVIEWMODEL_H
#define PXCURATEDLIBRARYVIEWMODEL_H

@class NSHashTable, NSMutableSet, NSSet, NSString, NSArray, NSNumber;
@protocol PXMutablePhotosLibraryViewModel, PXCuratedLibraryAssetsDataSourceManagerDelegate, PXSectionedSelectionManagerSnapshotValidator, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXSettingsKeyObserver, NSObject, PXCuratedLibraryViewModelPresenter;


#import "PXObservable.h"
#import "PXCPLUIStatusProvider.h"
#import "PXCuratedLibraryActionManager.h"
#import "PXContentFilterState.h"
#import "PXCuratedLibraryAnalysisStatus.h"
#import "PXAssetActionManager.h"
#import "PXAssetCollectionActionManager.h"
#import "PXCuratedLibraryAssetsDataSourceManager.h"
#import "PXAssetsDataSource.h"
#import "PXScrollViewSpeedometer.h"
#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"
#import "PXAssetReference.h"
#import "PXCuratedLibraryAssetCollectionSkimmingInfo.h"
#import "PXCuratedLibraryLayoutSpecManager.h"
#import "PXCuratedLibraryStyleGuide.h"
#import "PXUpdater.h"
#import "PXZoomablePhotosViewModel.h"

@interface PXCuratedLibraryViewModel : PXObservable <PXMutablePhotosLibraryViewModel, PXCuratedLibraryAssetsDataSourceManagerDelegate, PXSectionedSelectionManagerSnapshotValidator, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXSettingsKeyObserver>

 {
    NSHashTable *_presenters;
    NSHashTable *_views;
    NSMutableSet *_visibleAssetCollections;
    BOOL _attemptedLazyCreationOfCPLUIStatusProvider;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    NSInteger _pendingChromeVisibilityChangeReason;
    id<NSObject> *_filterTimeoutObserver;
}


@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) PXContentFilterState *allPhotosContentFilterState; // ivar: _allPhotosContentFilterState
@property (readonly, nonatomic) NSSet *allowedActions; // ivar: _allowedActions
@property (readonly, nonatomic) PXCuratedLibraryAnalysisStatus *analysisStatus; // ivar: _analysisStatus
@property (readonly, nonatomic) BOOL aspectFitContent; // ivar: _aspectFitContent
@property (retain, nonatomic) PXAssetActionManager *assetActionManager; // ivar: _assetActionManager
@property (retain, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // ivar: _assetCollectionActionManager
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (readonly, nonatomic) Class cplActionManagerClass; // ivar: _cplActionManagerClass
@property (readonly, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (readonly, nonatomic) PXContentFilterState *currentContentFilterState; // ivar: _currentContentFilterState
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource; // ivar: _currentDataSource
@property (readonly, nonatomic) CGFloat daysMarginScale; // ivar: _daysMarginScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *draggedAssetReferences; // ivar: _draggedAssetReferences
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideStatusFooterInSelectMode; // ivar: _hideStatusFooterInSelectMode
@property (readonly, nonatomic) BOOL isAppearing; // ivar: _isAppearing
@property (readonly, nonatomic) BOOL isFilteringContent;
@property (readonly, nonatomic) BOOL isPerformingInitialChanges; // ivar: _isPerformingInitialChanges
@property (readonly, nonatomic) BOOL isSelecting; // ivar: _isSelecting
@property (readonly, nonatomic) NSInteger lastChromeVisibilityChangeReason; // ivar: _lastChromeVisibilityChangeReason
@property (nonatomic) CGPoint lastScrollDirection; // ivar: _lastScrollDirection
@property (readonly, nonatomic) NSUInteger libraryState; // ivar: _libraryState
@property (readonly, nonatomic) NSObject<PXCuratedLibraryViewModelPresenter> *mainPresenter;
@property (readonly, nonatomic) NSArray *presenters;
@property (nonatomic) NSInteger scrollRegime; // ivar: _scrollRegime
@property (retain, nonatomic) PXScrollViewSpeedometer *scrollingSpeedometer; // ivar: _scrollingSpeedometer
@property (readonly, nonatomic) NSString *selectModeCaption; // ivar: _selectModeCaption
@property (readonly, nonatomic) ? selectedAssetsTypedCount; // ivar: _selectedAssetsTypedCount
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) BOOL sidebarCanBecomeVisible; // ivar: _sidebarCanBecomeVisible
@property (readonly, nonatomic) PXAssetReference *singleSelectedAssetReference;
@property (readonly, nonatomic) PXCuratedLibraryAssetCollectionSkimmingInfo *skimmingInfo; // ivar: _skimmingInfo
@property (readonly, nonatomic) PXCuratedLibraryLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // ivar: _styleGuide
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, copy, nonatomic) NSNumber *userWantsAspectFitContent; // ivar: _userWantsAspectFitContent
@property (readonly, nonatomic) BOOL viewBasedDecorationsEnabled; // ivar: _viewBasedDecorationsEnabled
@property (readonly, nonatomic) NSArray *views;
@property (readonly, nonatomic) NSSet *visibleAssetCollections;
@property (readonly, nonatomic) BOOL wantsDarkStatusBar; // ivar: _wantsDarkStatusBar
@property (nonatomic) BOOL wantsNavigationBarVisible; // ivar: _wantsNavigationBarVisible
@property (readonly, nonatomic) BOOL wantsOptionalChromeVisible; // ivar: _wantsOptionalChromeVisible
@property (nonatomic) BOOL wantsSecondaryToolbarVisible; // ivar: _wantsSecondaryToolbarVisible
@property (readonly, nonatomic) BOOL wantsSidebarVisible; // ivar: _wantsSidebarVisible
@property (nonatomic) BOOL wantsTabBarVisible; // ivar: _wantsTabBarVisible
@property (nonatomic) BOOL wantsToolbarVisible; // ivar: _wantsToolbarVisible
@property (readonly, nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel
@property (readonly, nonatomic) NSInteger zoomLevelTransitionPhase; // ivar: _zoomLevelTransitionPhase
@property (readonly, nonatomic) PXZoomablePhotosViewModel *zoomablePhotosViewModel; // ivar: _zoomablePhotosViewModel


-(BOOL)isSelectingAssetsFromCuratedLibraryAssetsDataSourceManager:(id)arg0 ;
-(BOOL)selectionManagerShouldAvoidEmptySelection:(id)arg0 ;
-(NSInteger)curatedLibraryAssetsDataSourceManager:(id)arg0 transitionTypeFromZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 ;
-(id)_createCPLUIStatusProvider;
-(id)_indexPathsForAssetCollectionReference:(id)arg0 ;
-(id)curatedLibraryAssetsDataSourceManager:(id)arg0 dominantAssetCollectionReferenceForZoomLevel:(NSInteger)arg1 ;
-(id)init;
-(id)initWithAssetsDataSourceManagerConfiguration:(id)arg0 zoomLevel:(NSInteger)arg1 mediaProvider:(id)arg2 specManager:(id)arg3 styleGuide:(id)arg4 ;
-(id)initWithPhotoLibrary:(id)arg0 zoomLevel:(NSInteger)arg1 mediaProvider:(id)arg2 specManager:(id)arg3 styleGuide:(id)arg4 ;
-(id)mutableChangeObject;
-(id)selectionManager:(id)arg0 validateSnapshot:(id)arg1 ;
-(id)visibleAssetCollectionsFromCuratedLibraryAssetsDataSourceManager:(id)arg0 ;
-(void)_handleIsSelectingChange;
-(void)_handleSelectionManagerChange:(NSUInteger)arg0 ;
-(void)_handleSpecChange;
-(void)_invalidateAllowedActions;
-(void)_invalidateAspectFitContent;
-(void)_invalidateAssetCollectionActionManager;
-(void)_invalidateAssetsDataSourceManager;
-(void)_invalidateChromeVisibility;
-(void)_invalidateChromeVisibilityWithChangeReason:(NSInteger)arg0 ;
-(void)_invalidateCurrentContentFilterState;
-(void)_invalidateCurrentDataSource;
-(void)_invalidateDraggedAssetReferences;
-(void)_invalidateLibraryState;
-(void)_invalidateScrollingProperties;
-(void)_invalidateScrollingSpeedometer;
-(void)_invalidateSelectModeCaption;
-(void)_invalidateUserWantsAspectFitContent;
-(void)_invalidateZoomablePhotosViewModel;
-(void)_setNeedsUpdate;
-(void)_systemPhotoLibraryDidChange;
-(void)_updateAllowedActions;
-(void)_updateAspectFitContent;
-(void)_updateAssetsDataSourceManager;
-(void)_updateChromeVisibility;
-(void)_updateCurrentContentFilterState;
-(void)_updateCurrentDataSource;
-(void)_updateDraggedAssetReferences;
-(void)_updateFilteringTimeoutObserver;
-(void)_updateLibraryState;
-(void)_updateScrollingProperties;
-(void)_updateScrollingSpeedometer;
-(void)_updateSelectModeCaption;
-(void)_updateUserWantsAspectFitContent;
-(void)_updateZoomablePhotosViewModel;
-(void)addPresenter:(id)arg0 ;
-(void)addView:(id)arg0 ;
-(void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg0 ;
-(void)curatedLibraryAssetsDataSourceManager:(id)arg0 didTransitionFromZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 ;
-(void)curatedLibraryAssetsDataSourceManager:(id)arg0 willTransitionFromZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performChanges:(id)arg0 ;
-(void)performInitialChanges:(id)arg0 ;
-(void)removePresenter:(id)arg0 ;
-(void)removeView:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)toggleSelectionForAssetCollectionReference:(id)arg0 ;
-(void)toggleSelectionForAssetReference:(id)arg0 ;
-(void)toggleSelectionForAssetReference:(id)arg0 updateCursorIndexPath:(BOOL)arg1 ;
-(void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath )arg0 updateCursorIndexPath:(BOOL)arg1 ;


@end


#endif