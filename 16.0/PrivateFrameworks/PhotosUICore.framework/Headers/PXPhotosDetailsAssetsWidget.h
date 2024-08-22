// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSASSETSWIDGET_H
#define PXPHOTOSDETAILSASSETSWIDGET_H

@class NSMutableSet, NSDate, NSSet, UIPinchGestureRecognizer, NSString;
@protocol PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXChangeObserver, PXEngineDrivenAssetsTilingLayoutDelegate, PXSwipeSelectionManagerDelegate, PXUIPlayButtonTileDelegate, UIGestureRecognizerDelegate, PXActionPerformerDelegate, PXPhotosDetailsInlinePlaybackControllerDelegate, UIDragInteractionDelegate, PXUIWidget, PXOneUpPresentationDelegate, PXAnonymousView, UIDragSession, PXPhotosDetailsAssetsWidgetEventTracker, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXUIAssetsScene.h"
#import "PXPhotosDataSourceStressTest.h"
#import "PXPhotoKitAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXPhotosDetailsInlinePlaybackController.h"
#import "PXSectionedLayoutEngine.h"
#import "PXLayoutGenerator.h"
#import "PXPhotosDetailsLoadCoordinationToken.h"
#import "PXPhotoKitUIMediaProvider.h"
#import "PXPhotosDataSource.h"
#import "PXUITapGestureRecognizer.h"
#import "PXSectionedSelectionManager.h"
#import "PXPhotosDetailsAssetsSpecManager.h"
#import "PXSwipeSelectionManager.h"
#import "PXBasicUIViewTileAnimator.h"
#import "PXTilingController.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXAssetActionManager.h"
#import "PXPhotosDetailsContext.h"
#import "PXOneUpPresentation.h"
#import "PXWidgetSpec.h"

@interface PXPhotosDetailsAssetsWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXChangeObserver, PXEngineDrivenAssetsTilingLayoutDelegate, PXSwipeSelectionManagerDelegate, PXUIPlayButtonTileDelegate, UIGestureRecognizerDelegate, PXActionPerformerDelegate, PXPhotosDetailsInlinePlaybackControllerDelegate, UIDragInteractionDelegate, PXUIWidget, PXOneUpPresentationDelegate>

 {
    NSMutableSet *_tilesInUse;
    NSDate *_loadStartDate;
}


@property (readonly, nonatomic) PXUIAssetsScene *_assetsScene; // ivar: __assetsScene
@property (readonly, nonatomic) BOOL _autoPlayVideoInOneUp; // ivar: __autoPlayVideoInOneUp
@property (nonatomic, setter=_setCurate:) BOOL _curate; // ivar: __curate
@property (retain, nonatomic, setter=_setCurrentDataSourceStressTest:) PXPhotosDataSourceStressTest *_currentDataSourceStressTest; // ivar: __currentDataSourceStressTest
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *_dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic, setter=_setDraggingAssetReferences:) NSSet *_draggingAssetReferences; // ivar: __draggingAssetReferences
@property (retain, nonatomic, setter=_setFocusedAssetReference:) PXAssetReference *_focusedAssetReference; // ivar: __focusedAssetReference
@property (retain, nonatomic, setter=_setHiddenAssetReferences:) NSSet *_hiddenAssetReferences; // ivar: __hiddenAssetReferences
@property (retain, nonatomic, setter=_setHighlightedAssetReference:) PXAssetReference *_highlightedAssetReference; // ivar: __highlightedAssetReference
@property (readonly, nonatomic) PXPhotosDetailsInlinePlaybackController *_inlinePlaybackController; // ivar: __inlinePlaybackController
@property (retain, nonatomic, setter=_setLayoutEngine:) PXSectionedLayoutEngine *_layoutEngine; // ivar: __layoutEngine
@property (retain, nonatomic, setter=_setLayoutGenerator:) PXLayoutGenerator *_layoutGenerator; // ivar: __layoutGenerator
@property (retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken; // ivar: __loadCoordinationToken
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // ivar: __mediaProvider
@property (readonly, nonatomic) PXAssetReference *_navigatedAssetReference; // ivar: __navigatedAssetReference
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // ivar: __photosDataSource
@property (readonly, nonatomic) UIPinchGestureRecognizer *_pinchGesture; // ivar: __pinchGesture
@property (readonly, nonatomic) PXUITapGestureRecognizer *_pressGesture; // ivar: __pressGesture
@property (readonly, nonatomic) PXSectionedSelectionManager *_selectionManager; // ivar: _selectionManager
@property (nonatomic, setter=_setShowCurationButton:) BOOL _showCurationButton; // ivar: __showCurationButton
@property (nonatomic, setter=_setShowSelectionButton:) BOOL _showSelectionButton; // ivar: __showSelectionButton
@property (readonly, nonatomic) PXPhotosDetailsAssetsSpecManager *_specManager; // ivar: __specManager
@property (readonly, nonatomic) PXSwipeSelectionManager *_swipeSelectionManager; // ivar: __swipeSelectionManager
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapGesture; // ivar: __tapGesture
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) PXTilingController *_tilingController; // ivar: __tilingController
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchGesture; // ivar: __touchGesture
@property (nonatomic, setter=_setTransitionWithoutAnimation:) BOOL _transitionWithoutAnimation; // ivar: __transitionWithoutAnimation
@property (nonatomic, setter=_setVisibleOriginScrollTarget:) CGPoint _visibleOriginScrollTarget; // ivar: __visibleOriginScrollTarget
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLogCuratedAssetCount; // ivar: _didLogCuratedAssetCount
@property (nonatomic) BOOL didLogUncuratedAssetCount; // ivar: _didLogUncuratedAssetCount
@property (retain, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (readonly, nonatomic) NSObject<PXPhotosDetailsAssetsWidgetEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled; // ivar: _faceModeEnabled
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // ivar: _hasLoadedContentData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation; // ivar: _oneUpPresentation
@property (nonatomic, getter=isSelecting) BOOL selecting; // ivar: _selecting
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)_addAssetReferencesToDrag:(id)arg0 ;
-(BOOL)_canDragAssetReferences:(id)arg0 ;
-(BOOL)_canDragOut;
-(BOOL)_isLocationWithinCurrentLayoutBounds:(struct CGPoint )arg0 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 forCoordinateSpace:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)oneUpPresentationShouldAutoPlay:(id)arg0 ;
-(BOOL)shouldEnablePlaybackForController:(id)arg0 ;
-(BOOL)swipeSelectionManager:(id)arg0 shouldBeginSelectionAtLocation:(struct CGPoint )arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg0 ;
-(CGFloat)engineDrivenLayout:(id)arg0 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(CGFloat)engineDrivenLayout:(id)arg0 zPositionForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(id)_assetActionManagerForAssetsReference:(id)arg0 ;
-(id)_assetReferenceAtPoint:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 ;
-(id)_createNewLayout;
-(id)_curationButtonTitle;
-(id)_dragItemForAssetReference:(id)arg0 ;
-(id)_extendedTraitCollection;
-(id)_imageTileForDragItem:(id)arg0 ;
-(id)_regionOfInterestForAssetReference:(id)arg0 ;
-(id)_subtitle;
-(id)_title;
-(id)assetsScene:(id)arg0 layoutForDataSource:(id)arg1 ;
-(id)assetsScene:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)bestCursorTileForLiftingAtPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)dataSourceManager;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragInteraction:(id)arg0 sessionForAddingItems:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)genericPreviewViewController;
-(id)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint )arg0 ;
-(id)init;
-(id)oneUpPresentation:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)oneUpPresentationPhotosDetailsContext:(id)arg0 ;
-(id)presentationEnvironmentForActionPerformer:(id)arg0 ;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)tilingController:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 targetVisibleOriginForLayout:(id)arg1 proposedVisibleOrigin:(struct CGPoint )arg2 ;
-(struct CGRect )engineDrivenLayout:(id)arg0 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 forAspectRatio:(CGFloat)arg2 ;
-(struct CGSize )minimumItemSizeForPlaybackInController:(id)arg0 ;
-(struct PXSimpleIndexPath )_assetIndexPathAtLocation:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathAtLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestAboveLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestLeadingLocation:(struct CGPoint )arg1 ;
-(void)_configureLayout:(id)arg0 ;
-(void)_fallBackByTogglingCurationIfNeeded;
-(void)_handleTapOnAssetReference:(id)arg0 autoPlayVideo:(BOOL)arg1 activity:(NSUInteger)arg2 ;
-(void)_handleTapOnFocusedAssetReferenceWithActivity:(NSUInteger)arg0 ;
-(void)_invalidateLayoutGenerator;
-(void)_loadTilingController;
-(void)_logAssetCountsIfNecessary;
-(void)_performTilingChangeWithoutAnimationTransition:(id)arg0 ;
-(void)_presentConfidentialityWarning;
-(void)_setNavigatedAssetReference:(id)arg0 autoPlayVideo:(BOOL)arg1 ;
-(void)_toggleCuration;
-(void)_updateDraggingAssetReferencesWithDataSource:(id)arg0 ;
-(void)_updateHasLoadedContentData;
-(void)_updateLayoutEngineIfNeeded;
-(void)_updateShowCurationButton;
-(void)_updateShowSelectionButton;
-(void)_updateTilingLayoutIfNeeded;
-(void)_userDidSelectCurationButton;
-(void)assetsScene:(id)arg0 didTransitionToDataSource:(id)arg1 ;
-(void)assetsScene:(id)arg0 willTransitionToDataSource:(id)arg1 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)dealloc;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)environmentDidUpdateFocusInContext:(id)arg0 ;
-(void)handlePinch:(id)arg0 ;
-(void)handlePress:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)handleTouch:(id)arg0 ;
-(void)loadContentData;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)playButtonTileWasTapped:(id)arg0 ;
-(void)presentOneUpForAssetReference:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)spaceBarWasPressed;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg0 ;
-(void)userDidSelectDisclosureControl;
-(void)userDidSelectSubtitle;


@end


#endif