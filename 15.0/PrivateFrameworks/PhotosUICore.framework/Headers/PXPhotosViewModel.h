// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSVIEWMODEL_H
#define PXPHOTOSVIEWMODEL_H

@class NSMutableSet, NSMutableOrderedSet, NSString, NSSet, NSNumber, NSOrderedSet;
@protocol PXAssetsDataSourceManagerObserver, PXMutablePhotosViewModel, PXSectionedSelectionManagerSnapshotValidator, NSObject, PXAssetImportStatusManager, PXPhotosGridOptionsController, PXTapbackStatusManager, PXPhotosViewDelegate;


#import "PXObservable.h"
#import "PXFooterViewModel.h"
#import "PXAssetActionManager.h"
#import "PXAssetCollectionActionManager.h"
#import "PXContentFilterState.h"
#import "PXAssetsDataSource.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXStatusViewModel.h"
#import "PXPhotosGridActionManager.h"
#import "PXLoadingStatusManager.h"
#import "PXMediaProvider.h"
#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"
#import "PXPhotosLayoutSpecManager.h"
#import "PXUpdater.h"

@interface PXPhotosViewModel : PXObservable <PXAssetsDataSourceManagerObserver, PXMutablePhotosViewModel, PXSectionedSelectionManagerSnapshotValidator>

 {
    NSInteger _footerVisibilityStyle;
    PXFooterViewModel *_footerViewModel;
    NSMutableSet *_enterSelectModePreventedForReasons;
    NSMutableSet *_oneUpPresentationPreventedForReasons;
    NSMutableSet *_aspectRatioTogglePreventedForReasons;
    NSMutableSet *_hideSurroundingContentForReasons;
    BOOL _allowsAspectFitToggle;
    NSInteger _contentMode;
    id<NSObject> *_filterTimeoutObserver;
    NSMutableOrderedSet *_visibleAssetCollections;
    NSInteger _contentStartingPosition;
}


@property (readonly, nonatomic) BOOL _shouldMimicSystemChromelessUsingManualScrollEdgeAppearance; // ivar: __shouldMimicSystemChromelessUsingManualScrollEdgeAppearance
@property (readonly, nonatomic) BOOL allowsActionMenuBehavior; // ivar: _allowsActionMenuBehavior
@property (readonly, nonatomic) BOOL allowsAddAction; // ivar: _allowsAddAction
@property (readonly, nonatomic) BOOL allowsAddToLibraryAction; // ivar: _allowsAddToLibraryAction
@property (readonly, nonatomic) BOOL allowsCMMActions; // ivar: _allowsCMMActions
@property (readonly, nonatomic) BOOL allowsChromeManagementBehavior; // ivar: _allowsChromeManagementBehavior
@property (readonly, nonatomic) BOOL allowsContentSyndicationSaveAllAction; // ivar: _allowsContentSyndicationSaveAllAction
@property (readonly, nonatomic) BOOL allowsContextMenuCustomization; // ivar: _allowsContextMenuCustomization
@property (readonly, nonatomic) BOOL allowsCopyAction; // ivar: _allowsCopyAction
@property (readonly, nonatomic) BOOL allowsDismissAction; // ivar: _allowsDismissAction
@property (readonly, nonatomic) BOOL allowsDoubleTapBehavior; // ivar: _allowsDoubleTapBehavior
@property (readonly, nonatomic) BOOL allowsDragAndDrop; // ivar: _allowsDragAndDrop
@property (readonly, nonatomic) BOOL allowsEmptyPlaceholderBehavior; // ivar: _allowsEmptyPlaceholderBehavior
@property (readonly, nonatomic) BOOL allowsFileRadarAction; // ivar: _allowsFileRadarAction
@property (readonly, nonatomic) BOOL allowsGridAppearanceActions; // ivar: _allowsGridAppearanceActions
@property (readonly, nonatomic) BOOL allowsInfoAction; // ivar: _allowsInfoAction
@property (readonly, nonatomic) BOOL allowsInlineAddBehavior; // ivar: _allowsInlineAddBehavior
@property (readonly, nonatomic) BOOL allowsInteractiveFavoriteBadges; // ivar: _allowsInteractiveFavoriteBadges
@property (readonly, nonatomic) BOOL allowsMacStyleSelection; // ivar: _allowsMacStyleSelection
@property (readonly, nonatomic) BOOL allowsOneUpPresentation; // ivar: _allowsOneUpPresentation
@property (readonly, nonatomic) BOOL allowsPickAssetAction; // ivar: _allowsPickAssetAction
@property (readonly, nonatomic) BOOL allowsPopOnContainerDeleteBehavior; // ivar: _allowsPopOnContainerDeleteBehavior
@property (readonly, nonatomic) BOOL allowsQuickLookAction; // ivar: _allowsQuickLookAction
@property (readonly, nonatomic) BOOL allowsReplyAction; // ivar: _allowsReplyAction
@property (readonly, nonatomic) BOOL allowsSelectAllAction; // ivar: _allowsSelectAllAction
@property (readonly, nonatomic) BOOL allowsSelectModeToggle; // ivar: _allowsSelectModeToggle
@property (readonly, nonatomic) BOOL allowsSelectSectionAction; // ivar: _allowsSelectSectionAction
@property (readonly, nonatomic) BOOL allowsSelectionUserActivityBehavior; // ivar: _allowsSelectionUserActivityBehavior
@property (readonly, nonatomic) BOOL allowsShareAllAction; // ivar: _allowsShareAllAction
@property (readonly, nonatomic) BOOL allowsShowDetails; // ivar: _allowsShowDetails
@property (readonly, nonatomic) BOOL allowsShowMapAction; // ivar: _allowsShowMapAction
@property (readonly, nonatomic) BOOL allowsSlideshowAction; // ivar: _allowsSlideshowAction
@property (readonly, nonatomic) BOOL allowsSwipeToSelect; // ivar: _allowsSwipeToSelect
@property (readonly, nonatomic) BOOL allowsSyndicatedContentFiltering; // ivar: _allowsSyndicatedContentFiltering
@property (readonly, nonatomic) BOOL allowsTapbackAction; // ivar: _allowsTapbackAction
@property (readonly, nonatomic) BOOL allowsTrashAction; // ivar: _allowsTrashAction
@property (readonly, nonatomic) BOOL allowsUserDefaults; // ivar: _allowsUserDefaults
@property (nonatomic) BOOL aspectFitContent; // ivar: _aspectFitContent
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager; // ivar: _assetActionManager
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // ivar: _assetCollectionActionManager
@property (readonly, nonatomic) NSObject<PXAssetImportStatusManager> *assetImportStatusManager; // ivar: _assetImportStatusManager
@property (readonly, nonatomic) BOOL canEnterSelectMode;
@property (readonly, nonatomic) BOOL canExitSelectMode;
@property (readonly, nonatomic) BOOL canFilterContent;
@property (readonly, nonatomic) BOOL canPresentOneUp;
@property (readonly, nonatomic) BOOL canSwipeSelect;
@property (readonly, nonatomic) BOOL captionsVisible; // ivar: _captionsVisible
@property (readonly, nonatomic, getter=isContentBelowTitle) BOOL contentBelowTitle; // ivar: _contentBelowTitle
@property (readonly, nonatomic) PXContentFilterState *contentFilterState; // ivar: _contentFilterState
@property (readonly, nonatomic) BOOL contentStartsAtEnd;
@property (readonly, nonatomic) PXAssetsDataSource *currentDataSource; // ivar: _currentDataSource
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class decorationViewClass; // ivar: _decorationViewClass
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dismissRequested; // ivar: _dismissRequested
@property (readonly, copy, nonatomic) NSSet *draggedAssetReferences; // ivar: _draggedAssetReferences
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference; // ivar: _dropTargetAssetReference
@property (readonly, nonatomic) id *effectProvider; // ivar: _effectProvider
@property (nonatomic) NSInteger emptyPlaceholderState; // ivar: _emptyPlaceholderState
@property (retain, nonatomic) PXStatusViewModel *emptyPlaceholderStatusViewModel; // ivar: _emptyPlaceholderStatusViewModel
@property (readonly, nonatomic) CGFloat floatingTitleOpacity; // ivar: _floatingTitleOpacity
@property (readonly, nonatomic) BOOL footerHasImportantInformation; // ivar: _footerHasImportantInformation
@property (readonly, copy, nonatomic) NSString *footerSubtitle; // ivar: _footerSubtitle
@property (readonly, nonatomic) PXFooterViewModel *footerViewModel;
@property (readonly, nonatomic) NSUInteger forbiddenBadges; // ivar: _forbiddenBadges
@property (readonly, nonatomic) PXPhotosGridActionManager *gridActionManager; // ivar: _gridActionManager
@property (readonly, nonatomic) NSInteger gridStyle; // ivar: _gridStyle
@property (readonly, nonatomic) BOOL hasScrollableContent; // ivar: _hasScrollableContent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat headerTitleTopInset; // ivar: _headerTitleTopInset
@property (readonly, nonatomic) BOOL hideFooterInSelectMode; // ivar: _hideFooterInSelectMode
@property (readonly, nonatomic) BOOL hideSurroundingContent;
@property (readonly, nonatomic) BOOL hidesNavbar; // ivar: _hidesNavbar
@property (readonly, nonatomic) BOOL hidesToolbar; // ivar: _hidesToolbar
@property (copy, nonatomic) id *infoActionHandler; // ivar: _infoActionHandler
@property (readonly, nonatomic) BOOL isAppearing; // ivar: _isAppearing
@property (readonly, nonatomic) BOOL isEmbedded; // ivar: _isEmbedded
@property (readonly, nonatomic) BOOL isFilteringContent;
@property (readonly, nonatomic) BOOL isInCompactMode; // ivar: _isInCompactMode
@property (readonly, nonatomic) BOOL isInSelectMode; // ivar: _isInSelectMode
@property (nonatomic) BOOL isInteractiveZooming; // ivar: _isInteractiveZooming
@property (nonatomic) BOOL keepsTabBarAlwaysHidden; // ivar: _keepsTabBarAlwaysHidden
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (readonly, nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) NSInteger navBarStyle; // ivar: _navBarStyle
@property (readonly, nonatomic) NSInteger noContentPlaceholderType; // ivar: _noContentPlaceholderType
@property (readonly, nonatomic) NSInteger numberOfZoomSteps; // ivar: _numberOfZoomSteps
@property (readonly, nonatomic) NSInteger oneUpPresentationOrigin; // ivar: _oneUpPresentationOrigin
@property (readonly, nonatomic) NSObject<PXPhotosGridOptionsController> *optionsController; // ivar: _optionsController
@property (readonly, nonatomic) BOOL prefersActionsInToolbar; // ivar: _prefersActionsInToolbar
@property (readonly, nonatomic) BOOL providesOneUpActionManager; // ivar: _providesOneUpActionManager
@property (readonly, nonatomic) BOOL requiresLightTopBars; // ivar: _requiresLightTopBars
@property (readonly, nonatomic, getter=isScrolledToTop) BOOL scrolledToTop; // ivar: _scrolledToTop
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly, nonatomic) BOOL shouldAlwaysRespectToolbarActionPlacementPreference; // ivar: _shouldAlwaysRespectToolbarActionPlacementPreference
@property (nonatomic) BOOL shouldAnimateZooming; // ivar: _shouldAnimateZooming
@property (readonly, nonatomic) BOOL shouldAspectFitContentByDefault;
@property (readonly, nonatomic) BOOL shouldOptOutOfChromelessBars; // ivar: _shouldOptOutOfChromelessBars
@property (readonly, nonatomic, getter=isShowingAlternateContent) BOOL showingAlternateContent; // ivar: _showingAlternateContent
@property (readonly, nonatomic) PXAssetReference *singleSelectedAssetReference;
@property (readonly, nonatomic) PXPhotosLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAspectRatioToggle; // ivar: _supportsAspectRatioToggle
@property (readonly, nonatomic) BOOL supportsZooming; // ivar: _supportsZooming
@property (readonly, nonatomic) NSObject<PXTapbackStatusManager> *tapbackStatusManager; // ivar: _tapbackStatusManager
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) CGFloat titleBackgroundOpacity; // ivar: _titleBackgroundOpacity
@property (readonly, nonatomic) CGFloat topBarsAppearanceChangeAnimationDuration; // ivar: _topBarsAppearanceChangeAnimationDuration
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, copy, nonatomic) NSNumber *userWantsAspectFitContent; // ivar: _userWantsAspectFitContent
@property (readonly, nonatomic) BOOL viewBasedDecorationsEnabled; // ivar: _viewBasedDecorationsEnabled
@property (weak, nonatomic) NSObject<PXPhotosViewDelegate> *viewDelegate; // ivar: _viewDelegate
@property (readonly, nonatomic) NSUInteger viewDelegateRespondsTo; // ivar: _viewDelegateRespondsTo
@property (readonly, nonatomic) NSOrderedSet *visibleAssetCollections;
@property (readonly, nonatomic) BOOL wantsCPLStatus; // ivar: _wantsCPLStatus
@property (readonly, nonatomic) BOOL wantsContentFilterIndicatorVisible; // ivar: _wantsContentFilterIndicatorVisible
@property (readonly, nonatomic) BOOL wantsContentFilterVisible; // ivar: _wantsContentFilterVisible
@property (readonly, nonatomic) BOOL wantsDimmedSelectionStyle; // ivar: _wantsDimmedSelectionStyle
@property (readonly, nonatomic) BOOL wantsFloatingTitle; // ivar: _wantsFloatingTitle
@property (nonatomic) BOOL wantsFooterTransparent; // ivar: _wantsFooterTransparent
@property (nonatomic) BOOL wantsFooterVisible; // ivar: _wantsFooterVisible
@property (readonly, nonatomic) BOOL wantsModernNavBarButtons; // ivar: _wantsModernNavBarButtons
@property (nonatomic) BOOL wantsNavbarVisible; // ivar: _wantsNavbarVisible
@property (readonly, nonatomic) BOOL wantsNumberedSelectionStyle; // ivar: _wantsNumberedSelectionStyle
@property (readonly, nonatomic) BOOL wantsOneUpShowInLibraryButton; // ivar: _wantsOneUpShowInLibraryButton
@property (readonly, nonatomic) BOOL wantsRenderingStatus; // ivar: _wantsRenderingStatus
@property (nonatomic) BOOL wantsTabBarVisible; // ivar: _wantsTabBarVisible
@property (nonatomic) BOOL wantsToolbarVisible; // ivar: _wantsToolbarVisible
@property (retain, nonatomic) PXAssetReference *zoomAnchorAssetReference; // ivar: _zoomAnchorAssetReference
@property (nonatomic) CGFloat zoomStep; // ivar: _zoomStep


-(BOOL)attemptSetInSelectMode:(BOOL)arg0 ;
-(BOOL)selectionManagerShouldAvoidEmptySelection:(id)arg0 ;
-(BOOL)viewDelegateRespondsTo:(NSUInteger)arg0 ;
-(id)_indexPathsForAssetCollectionReference:(id)arg0 ;
-(id)_initialContentFilterStateForConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 specManager:(id)arg1 ;
-(id)selectionManager:(id)arg0 validateSnapshot:(id)arg1 ;
-(void)_invalidateAspectFitContent;
-(void)_invalidateAssetsDataSourceManager;
-(void)_invalidateChromeVisibility;
-(void)_invalidateDraggedAssetReferences;
-(void)_invalidateEmptyPlaceholderState;
-(void)_invalidateFooterVisibility;
-(void)_invalidateGridAppearance;
-(void)_invalidateTopBarsStyles;
-(void)_invalidateUserWantsAspectFitContent;
-(void)_invalidateWantsContentFilterIndicatorVisible;
-(void)_setNeedsUpdate;
-(void)_updateAspectFitContent;
-(void)_updateAssetsDataSourceManager;
-(void)_updateChromeVisibility;
-(void)_updateDataSourceDependentProperties;
-(void)_updateDraggedAssetReferences;
-(void)_updateEmptyPlaceholderState;
-(void)_updateFilteringTimeoutObserver;
-(void)_updateFooterVisibility;
-(void)_updateGridAppearance;
-(void)_updateTopBarsStyles;
-(void)_updateUserWantsAspectFitContent;
-(void)_updateWantsContentFilterIndicatorVisible;
-(void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg0 ;
-(void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(id)arg0 ;
-(void)clickSelectAssetReference:(id)arg0 updateCursorIndexPath:(BOOL)arg1 ;
-(void)clickSelectIndexPath:(struct PXSimpleIndexPath )arg0 updateCursorIndexPath:(BOOL)arg1 ;
-(void)deselectAll;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)selectAll;
-(void)setAspectRatioToggleAllowed:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setEnterSelectModeAllowed:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setOneUpPresentationAllowed:(BOOL)arg0 forReason:(id)arg1 ;
-(void)toggleSelectionForAssetCollectionReference:(id)arg0 ;
-(void)toggleSelectionForAssetReference:(id)arg0 ;
-(void)toggleSelectionForAssetReference:(id)arg0 updateCursorIndexPath:(BOOL)arg1 ;
-(void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath )arg0 updateCursorIndexPath:(BOOL)arg1 ;


@end


#endif