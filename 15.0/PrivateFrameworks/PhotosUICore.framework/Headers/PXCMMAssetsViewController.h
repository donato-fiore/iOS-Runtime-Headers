// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMASSETSVIEWCONTROLLER_H
#define PXCMMASSETSVIEWCONTROLLER_H

@class NSArray, UILongPressGestureRecognizer, NSMutableSet, NSSet, NSString;
@protocol PXActionManagerProvider, PXActionPerformerDelegate, PXAssetsSceneDelegate, PXCMMBannerTileControllerDelegate, PXCMMEngineDrivenLayoutDelegate, PXCMMProgressBannerViewDelegate, PXChangeObserver, PXContextualNotificationDelegate, PXOneUpPresentationDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXSwipeSelectionManagerDelegate, PXTileSource, PXCMMAssetsViewControllerDelegate;


#import "PXCMMComponentViewController.h"
#import "PXUpdater.h"
#import "PXLayoutGenerator.h"
#import "PXSectionedLayoutEngine.h"
#import "PXUIScrollViewController.h"
#import "PXBasicTileAnimator.h"
#import "PXTilingController.h"
#import "PXUIAssetsScene.h"
#import "PXCMMProgressBannerView.h"
#import "PXCMMStatusController.h"
#import "PXUITapGestureRecognizer.h"
#import "PXSwipeSelectionManager.h"
#import "PXAssetReference.h"
#import "PXCMMSpecManager.h"
#import "PXCMMSpec.h"
#import "PXMomentShareStatusPresentation.h"
#import "PXCMMFooterViewModel.h"
#import "PXPhotosGlobalFooterView.h"
#import "PXCMMBannerTileController.h"
#import "PXCMMSendBackBannerView.h"
#import "PXCMMSendBackSuggestionSource.h"
#import "PXContextualNotification.h"
#import "PXOneUpPresentation.h"
#import "PXActionManager.h"

@interface PXCMMAssetsViewController : PXCMMComponentViewController <PXActionManagerProvider, PXActionPerformerDelegate, PXAssetsSceneDelegate, PXCMMBannerTileControllerDelegate, PXCMMEngineDrivenLayoutDelegate, PXCMMProgressBannerViewDelegate, PXChangeObserver, PXContextualNotificationDelegate, PXOneUpPresentationDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXSwipeSelectionManagerDelegate, PXTileSource>

 {
    PXUpdater *_updater;
    PXLayoutGenerator *_layoutGenerator;
    PXSectionedLayoutEngine *_layoutEngine;
    BOOL _layoutAnimationsGloballyDisabled;
    PXUIScrollViewController *_scrollViewController;
    PXBasicTileAnimator *_tileAnimator;
    PXTilingController *_tilingController;
    PXUIAssetsScene *_sceneController;
    PXCMMProgressBannerView *_progressBannerView;
    NSArray *_progressBannerViewConstraints;
    PXCMMStatusController *_statusController;
    PXUITapGestureRecognizer *_tapSelectionGesture;
    PXSwipeSelectionManager *_swipeSelectionManager;
    PXUITapGestureRecognizer *_layoutTransitionGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    PXAssetReference *_navigatedAssetReference;
    PXCMMSpecManager *_specManager;
    PXCMMSpec *_spec;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForFooter;
    PXCMMFooterViewModel *_statusFooterViewModel;
    PXPhotosGlobalFooterView *_measuringStatusFooterView;
    PXCMMBannerTileController *_measuringBannerTile;
    PXCMMSendBackBannerView *_measuringSendBackBannerView;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForPoster;
    NSMutableSet *_inUseTiles;
    CGSize _knownReferenceSize;
    BOOL _needsToPerformInitialSelection;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXContextualNotification *_sendBackNotification;
    BOOL _sendBackNotificationWasDiscarded;
    BOOL _sendBackNotificationWasTapped;
    BOOL _receivingActionButtonWasTapped;
    BOOL _didReportSendBackNotificationMissingAssetFault;
    BOOL _didIncrementNumberOfPresentableSendBacks;
    BOOL _didIncrementNumberOfPresentedSendBacks;
    BOOL _isWaitingForSendBackPresentationConfirmationTimeout;
    NSUInteger _sendBackPresentationConfirmationGeneration;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) PXAssetReference *_focusedAssetReference;
@property (retain, nonatomic) NSSet *_hiddenAssetReferences; // ivar: __hiddenAssetReferences
@property (nonatomic) NSInteger _layoutType; // ivar: __layoutType
@property (readonly, nonatomic) PXOneUpPresentation *_oneUpPresentation;
@property (nonatomic, getter=isActionInProgress) BOOL actionInProgress; // ivar: _actionInProgress
@property (readonly, nonatomic) PXActionManager *assetActionManager;
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMAssetsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userSelectionEnabled; // ivar: _userSelectionEnabled


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)_areAllNotCopiedAssetsSelected;
-(BOOL)_canShowSendBackSuggestion;
-(BOOL)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(BOOL)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath )arg0 withEngineDrivenLayout:(id)arg1 ;
-(BOOL)_isSendBackBannerViewContentsAtAllVisible;
-(BOOL)_isSendBackBannerViewContentsFullyVisible;
-(BOOL)_shouldShowDefaultOneUpActions;
-(BOOL)_shouldShowProgressBanner;
-(BOOL)_shouldShowStatusPlaceholder;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)engineDrivenLayout:(id)arg0 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)engineDrivenLayout:(id)arg0 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 allowsActionsForContextMenuInteraction:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 canStartPreviewingForContextMenuInteraction:(id)arg1 ;
-(BOOL)swipeSelectionManager:(id)arg0 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg0 ;
-(CGFloat)_bannerHeightFromReferenceSize:(struct CGSize )arg0 ;
-(CGFloat)_headerHeightFromReferenceSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 ;
-(CGFloat)_progressBannerViewLayoutHeight;
-(CGFloat)_sendBackFooterHeightFromReferenceSize:(struct CGSize )arg0 ;
-(CGFloat)_statusFooterHeightFromReferenceSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 ;
-(CGFloat)engineDrivenLayout:(id)arg0 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(NSInteger)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath )arg0 withDataSource:(id)arg1 ;
-(NSInteger)engineDrivenLayout:(id)arg0 assetStatusAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(NSInteger)oneUpPresentationActionContext:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)_additionalTileCount;
-(id)_assetActionManagerWithSelectionManager:(id)arg0 ;
-(id)_assetReferenceAtPoint:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 ;
-(id)_createAddButton;
-(id)_createBannerTileController;
-(id)_createNewLayout;
-(id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize )arg0 ;
-(id)_createOverlayTileView;
-(id)_createPosterTileController;
-(id)_createSectionHeaderController;
-(id)_createSelectionManagerWithAssetReference:(id)arg0 ;
-(id)_createSendBackBannerView;
-(id)_createSendBackFooter;
-(id)_createStatusBadgeTileView;
-(id)_createStatusFooter;
-(id)_createStatusPlaceholderTileView;
-(id)_indexPathsForAssetReferences:(id)arg0 inDataSource:(id)arg1 ;
-(id)assetsScene:(id)arg0 layoutForDataSource:(id)arg1 ;
-(id)assetsScene:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(id)oneUpPresentation:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationActionManager:(id)arg0 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationHelperScrollView:(id)arg0 ;
-(id)oneUpPresentationImportStatusManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)preferredContainerViewForContextualNotification:(id)arg0 ;
-(struct CGRect )contextualNotification:(id)arg0 containingFrameInCoordinateSpace:(id)arg1 ;
-(struct CGRect )engineDrivenLayout:(id)arg0 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 forAspectRatio:(CGFloat)arg2 ;
-(struct CGSize )_maximumThumbnailSize;
-(struct PXSimpleIndexPath )_assetIndexPathAtLocation:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 ;
-(struct PXSimpleIndexPath )_assetIndexPathAtLocation:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 kind:(NSUInteger)arg2 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathAtLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestAboveLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestLeadingLocation:(struct CGPoint )arg1 ;
-(void)_checkSendBackPresentationStatus;
-(void)_configureBannerTile:(id)arg0 ;
-(void)_configureLayout:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_deselectAllAssets;
-(void)_didFindPresentableSendBack;
-(void)_didPresentSendBack;
-(void)_handleLongPress:(id)arg0 ;
-(void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(NSUInteger)arg0 ;
-(void)_handleSpaceBar:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_invalidateLayoutGenerator;
-(void)_invokeSendBackAction;
-(void)_performInitialSelectionIfNeeded;
-(void)_performTilingChangeWithoutAnimationTransition:(id)arg0 ;
-(void)_preferredContentSizeChanged:(id)arg0 ;
-(void)_presentSendBackNotification;
-(void)_scheduleLayout;
-(void)_selectAllAssets;
-(void)_selectCuratedAssets;
-(void)_selectNonCopiedAssets;
-(void)_selectionModeDidChange;
-(void)_setHiddenAssetReferences:(id)arg0 ;
-(void)_setLayoutType:(NSInteger)arg0 ;
-(void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)_transitionLayoutGesture:(id)arg0 ;
-(void)_updateAssetsScene;
-(void)_updateGestures;
-(void)_updateLayoutEngine;
-(void)_updatePlaceholder;
-(void)_updateProgressBannerViewConstraints;
-(void)_updateProgressBannerViewVisibility;
-(void)_updateSelectionEnabled;
-(void)_updateSelectionIfNeeded;
-(void)_updateSendBackNotification;
-(void)_updateStyle;
-(void)addButtonTapped:(id)arg0 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)contextualNotificationDidAppear:(id)arg0 ;
-(void)contextualNotificationDidDisappear:(id)arg0 ;
-(void)contextualNotificationWasDiscarded:(id)arg0 ;
-(void)contextualNotificationWasTapped:(id)arg0 ;
-(void)didTapActionButtonInBannerTileController:(id)arg0 ;
-(void)engineDrivenLayoutReferenceSizeDidChange:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)photosGlobalFooterView:(id)arg0 presentViewController:(id)arg1 ;
-(void)progressBannerView:(id)arg0 dismissViewController:(id)arg1 ;
-(void)progressBannerView:(id)arg0 presentViewController:(id)arg1 ;
-(void)progressBannerViewLayoutHeightDidChange:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)statusView:(id)arg0 dismissViewController:(id)arg1 ;
-(void)statusView:(id)arg0 presentViewController:(id)arg1 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif