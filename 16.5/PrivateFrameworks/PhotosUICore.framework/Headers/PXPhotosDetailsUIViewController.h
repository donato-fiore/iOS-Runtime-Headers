// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSUIVIEWCONTROLLER_H
#define PXPHOTOSDETAILSUIVIEWCONTROLLER_H

@class UIViewController, UIContextMenuInteraction, UIPointerInteraction, NSMutableArray, NSMapTable, NSArray, NSString, UIScrollView, NSUserActivity, UIView;
@protocol PXWidgetCompositionDelegate, PXChangeObserver, PXActionManagerProvider, PXActionPerformerDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate, PXWidgetEditingDelegate, PXForcedDismissableViewController, PXUserInterfaceFeatureViewController, UIContextMenuInteractionDelegate, UIPointerInteractionDelegate, PXBarsControllerDelegate, PXScrollViewControllerObserver, PXPurgeableController, PXUIWidget, PXAssetCollectionActionPerformerDelegate, PXPhotosDetailsUIViewControllerDelegate, PXViewControllerEventTracker, PXDisplayAsset;


#import "PXTilingController.h"
#import "PXPhotosDetailsHeaderTileWidget.h"
#import "PXUIScrollViewController.h"
#import "PXPhotosDetailsSpecManager.h"
#import "PXSwipeSelectionManager.h"
#import "PXPhotosDetailsViewModel.h"
#import "PXWidgetSpec.h"
#import "PXActionManager.h"
#import "PXBarsController.h"
#import "PXWidgetComposition.h"
#import "PXPhotosDetailsContext.h"
#import "PXAssetReference.h"
#import "PXScrollViewController.h"
#import "PXAssetSelectionUserActivityController.h"

@interface PXPhotosDetailsUIViewController : UIViewController <PXWidgetCompositionDelegate, PXChangeObserver, PXActionManagerProvider, PXActionPerformerDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate, PXWidgetEditingDelegate, PXForcedDismissableViewController, PXUserInterfaceFeatureViewController, UIContextMenuInteractionDelegate, UIPointerInteractionDelegate, PXBarsControllerDelegate, PXScrollViewControllerObserver, PXPurgeableController>

 {
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) Class _barsControllerClass; // ivar: __barsControllerClass
@property (retain, nonatomic, setter=_setContextMenuInteraction:) UIContextMenuInteraction *_contextMenuInteraction; // ivar: __contextMenuInteraction
@property (nonatomic, setter=_setHasAppeared:) BOOL _hasAppeared; // ivar: __hasAppeared
@property (readonly, nonatomic) PXTilingController *_headerAssetWidgetTilingController; // ivar: __headerAssetWidgetTilingController
@property (readonly, nonatomic) PXPhotosDetailsHeaderTileWidget *_headerWidget; // ivar: __headerWidget
@property (retain, nonatomic, setter=_setPointerInteraction:) UIPointerInteraction *_pointerInteraction; // ivar: __pointerInteraction
@property (copy, nonatomic, setter=_ppt_setAllWidgetLoadingCompleteHandler:) id *_ppt_allWidgetLoadingCompleteHandler; // ivar: __ppt_allWidgetLoadingCompleteHandler
@property (copy, nonatomic, setter=_ppt_setVariationsWidgetLoadingCompleteHandler:) id *_ppt_variationsWidgetLoadingCompleteHandler; // ivar: __ppt_variationsWidgetLoadingCompleteHandler
@property (nonatomic, setter=_setPreviewCommitting:) BOOL _previewCommitting; // ivar: __previewCommitting
@property (retain, nonatomic, setter=_setPreviewViewController:) UIViewController *_previewViewController; // ivar: __previewViewController
@property (readonly, nonatomic) NSObject<PXUIWidget> *_previewWidget; // ivar: __previewWidget
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // ivar: __scrollViewController
@property (readonly, nonatomic) PXPhotosDetailsSpecManager *_specManager; // ivar: __specManager
@property (retain, nonatomic, setter=_setSwipeSelectionManager:) PXSwipeSelectionManager *_swipeSelectionManager; // ivar: __swipeSelectionManager
@property (readonly, copy, nonatomic) id *_unlockHandler; // ivar: __unlockHandler
@property (readonly, copy, nonatomic) id *_unlockStatus; // ivar: __unlockStatus
@property (readonly, nonatomic) PXPhotosDetailsViewModel *_viewModel; // ivar: __viewModel
@property (readonly, nonatomic) NSMutableArray *_widgetDisablingDimmingViews; // ivar: __widgetDisablingDimmingViews
@property (readonly, nonatomic) NSMapTable *_widgetOptions; // ivar: __widgetOptions
@property (retain, nonatomic, setter=_setWidgetSpec:) PXWidgetSpec *_widgetSpec; // ivar: __widgetSpec
@property (readonly, nonatomic) NSArray *_widgets; // ivar: __widgets
@property (weak, nonatomic) NSObject<PXAssetCollectionActionPerformerDelegate> *actionPerformerDelegate; // ivar: _actionPerformerDelegate
@property (readonly, nonatomic) PXActionManager *assetActionManager;
@property (readonly, nonatomic) PXBarsController *barsController; // ivar: _barsController
@property (readonly, nonatomic) CGFloat captionWidgetCurrentContentHeight;
@property (readonly, nonatomic) CGFloat captionWidgetPreferredHeight;
@property (readonly, nonatomic) PXWidgetComposition *composition; // ivar: _composition
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosDetailsUIViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAppearOnce; // ivar: _didAppearOnce
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (readonly, nonatomic) NSObject<PXViewControllerEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXAssetReference *initiallyPresentedAssetReference; // ivar: _initiallyPresentedAssetReference
@property (nonatomic) NSUInteger occludedContentEdges; // ivar: _occludedContentEdges
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *presentedKeyAsset;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly, nonatomic) BOOL shouldUpdateStatusBarTitle;
@property (retain, nonatomic) NSUserActivity *siriActionActivity; // ivar: _siriActionActivity
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXAssetSelectionUserActivityController *userActivityController; // ivar: _userActivityController
@property (readonly, nonatomic) NSInteger userInterfaceFeature;
@property (retain, nonatomic) UIView *widgetsBackgroundView; // ivar: _widgetsBackgroundView


+(void)preloadResources;
-(BOOL)_dismissSelfIfSafeAnimated:(BOOL)arg0 ;
-(BOOL)_shouldShowMovieHeader;
-(BOOL)canBecomeFirstResponder;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)widgetComposition:(id)arg0 requestViewControllerDismissalAnimated:(BOOL)arg1 ;
-(BOOL)widgetComposition:(id)arg0 shouldUseEdgeToEdgeLayoutForWidget:(id)arg1 ;
-(BOOL)widgetComposition:(id)arg0 widget:(id)arg1 transitionToViewController:(id)arg2 withTransitionType:(NSInteger)arg3 ;
-(BOOL)widgetCompositionHasContentAbove:(id)arg0 ;
-(BOOL)widgetDeviceIsUnlocked:(id)arg0 ;
-(NSInteger)widgetComposition:(id)arg0 loadingPriorityForWidget:(id)arg1 ;
-(NSUInteger)_optionsForWidget:(id)arg0 ;
-(NSUInteger)_userEventSourceForDetailView:(id)arg0 ;
-(id)_previewViewControllerForLocation:(struct CGPoint )arg0 ;
-(id)_widgetAtLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)barsControllerActionsForSelectionContextMenu:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 ;
-(id)initWithContext:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)standaloneMapViewController;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(id)widgetComposition:(id)arg0 undoManagerForWidget:(id)arg1 ;
-(id)widgetComposition:(id)arg0 viewControllerHostingWidget:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_addSwiftUIWidgetForHelperClassName:(id)arg0 addCallback:(id)arg1 ;
-(void)_ensureComposition;
-(void)_ensureScrollViewController;
-(void)_handleDeviceDidUnlock;
-(void)_handleSpaceBar:(id)arg0 ;
-(void)_handleWidgetsLoadingDelay;
-(void)_invalidateBarSpec;
-(void)_invalidateCompositionSpec;
-(void)_invalidateWidgetSpec;
-(void)_loadComposition;
-(void)_loadWidgets;
-(void)_performAddToMemoriesAnimation;
-(void)_ppt_informWidgetsLoadedHandlerIfNeeded;
-(void)_updateAllWidgetsFaceModeState;
-(void)_updateAllWidgetsSelectionState;
-(void)_updateAllWidgetsSpec;
-(void)_updateBarSpec;
-(void)_updateCompositionSpec;
-(void)_updateScrollViewControllerContentInset;
-(void)_updateStatusBarTitle;
-(void)_updateTitleAndSubtitle;
-(void)_updateTopTrailingBarButtons;
-(void)_updateWidgetDisablingWithAnimationOptions:(id)arg0 ;
-(void)_updateWidgetSpec;
-(void)_updateWidgetsBackground;
-(void)_viewWillLayoutBeforeAppearing;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteractionDidEnd:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)editingDidChange:(BOOL)arg0 ;
-(void)editorHeightDidChange;
-(void)informFirstWidgetAvailableVisibleRectInEditMode:(struct CGRect )arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)playMovieWithCompletionHandler:(id)arg0 ;
-(void)ppt_performBlockAfterAllWidgetLoadingCompletes:(id)arg0 ;
-(void)ppt_performBlockAfterVariationsWidgetLoadingCompletes:(id)arg0 ;
-(void)ppt_toggleDiscloseWidgets;
-(void)purgeIfPossible;
-(void)requestExitEditModeWithChangeSavingMode:(NSInteger)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewControllerWillLayoutSubviews:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)visualSearchLookupWidgetDidTap;
-(void)widget:(id)arg0 didChangeEditingMode:(BOOL)arg1 ;
// -(void)widget:(id)arg0 performAfterUnlockingDeviceIfNecessary:(id)arg1 failurehandler:(unk)arg2  ;
-(void)widgetComposition:(id)arg0 didUpdateCompositionWithDefaultAnimationOptions:(id)arg1 ;
-(void)widgetComposition:(id)arg0 widgetHasLoadedContentDataDidChange:(id)arg1 ;
-(void)widgetEditorHeightDidChange:(id)arg0 ;
-(void)widgetTapped:(id)arg0 ;


@end


#endif