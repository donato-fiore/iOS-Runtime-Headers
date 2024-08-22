// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSVIEWUIINTERACTION_H
#define PXPHOTOSVIEWUIINTERACTION_H

@class UIContextMenuInteraction, NSString, UITapGestureRecognizer, UIScreenEdgePanGestureRecognizer, NSSet, NSArray, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UIViewController, UIScrollView;
@protocol UIGestureRecognizerDelegate, UIContextMenuInteractionDelegate, PXOneUpPresentationDelegate, PXScrollViewControllerObserver, PXAssetCollectionActionPerformerDelegate, PXSwipeSelectionManagerDelegate, PXPhotosDragControllerDelegate, UIViewControllerInteractiveTransitioning;


#import "PXPhotosViewInteraction.h"
#import "PXPhotosDragController.h"
#import "PXPhotosLayout.h"
#import "PXAssetReference.h"
#import "PXOneUpPresentation.h"
#import "PXSwipeSelectionManager.h"

@interface PXPhotosViewUIInteraction : PXPhotosViewInteraction <UIGestureRecognizerDelegate, UIContextMenuInteractionDelegate, PXOneUpPresentationDelegate, PXScrollViewControllerObserver, PXAssetCollectionActionPerformerDelegate, PXSwipeSelectionManagerDelegate, PXPhotosDragControllerDelegate>



@property (readonly, nonatomic) BOOL canToggleSelectMode;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGesture; // ivar: _doubleTapGesture
@property (readonly, nonatomic) PXPhotosDragController *dragController; // ivar: _dragController
@property (readonly, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *edgeSwipeDismissalInteraction; // ivar: _edgeSwipeDismissalInteraction
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGesture; // ivar: _edgeSwipeGesture
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *hiddenAssetReferences; // ivar: _hiddenAssetReferences
@property (readonly, nonatomic) NSArray *keyCommandsForSelectionExtension;
@property (readonly, weak, nonatomic) PXPhotosLayout *layout;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture; // ivar: _longPressGesture
@property (retain, nonatomic) PXAssetReference *navigatedAssetReference; // ivar: _navigatedAssetReference
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation; // ivar: _oneUpPresentation
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // ivar: _pinchGesture
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) UITapGestureRecognizer *pressGesture; // ivar: _pressGesture
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSwipeSelectionManager *swipeSelectionManager; // ivar: _swipeSelectionManager
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture
@property (readonly, nonatomic) id *targetForKeyCommands;


-(?)regionOfInterestForAssetReference:(?)arg0 image:(?)arg1 fallbackMediaProvidershouldSnapshot;
-(BOOL)_commitPreviewForContextMenuInteraction:(id)arg0 ;
-(BOOL)_handleTapWithHitTestResult:(id)arg0 rangeSelectionEnabled:(BOOL)arg1 toggleSingleSelectionEnabled:(BOOL)arg2 ;
-(BOOL)_pickNavigatedAssetReference;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 transitionToViewController:(id)arg1 transitionType:(NSInteger)arg2 ;
-(BOOL)allowsActionsForContextMenuInteraction:(id)arg0 ;
-(BOOL)allowsPreviewCommitingForContextMenuInteraction:(id)arg0 ;
-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)canStartContextMenuInteraction:(id)arg0 ;
-(BOOL)dragController:(id)arg0 shouldResizeCancelledPreviewForAssetReference:(id)arg1 ;
-(BOOL)dragController:(id)arg0 shouldSelectRearrangedAssetReferences:(id)arg1 ;
-(BOOL)ensureSelectMode;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)oneUpPresentation:(id)arg0 allowsActionsForContextMenuInteraction:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 allowsPreviewCommitingForContextMenuInteraction:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 canStartPreviewingForContextMenuInteraction:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 commitPreviewForContextMenuInteraction:(id)arg1 ;
-(BOOL)oneUpPresentationWantsShowInLibraryButton:(id)arg0 ;
-(BOOL)presentOneUpForAssetReference:(id)arg0 configurationHandler:(id)arg1 ;
-(BOOL)swipeSelectionManager:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg0 ;
-(NSInteger)oneUpPresentationActionContext:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 accessoriesForMenuWithConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_createActionManagerForNavigatedAssetReference;
-(id)_createContextMenuActionManagerForNavigatedPreviewAssetReference;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)discoverabilityTitleForActionType:(id)arg0 ;
-(id)dragController:(id)arg0 draggableAssetReferenceAtLocation:(struct CGPoint )arg1 ;
-(id)dragController:(id)arg0 dropTargetAssetReferenceForLocation:(struct CGPoint )arg1 ;
-(id)dragController:(id)arg0 itemProviderForAssetReference:(id)arg1 ;
-(id)dragController:(id)arg0 regionOfInterestForAssetReference:(id)arg1 image:(*id)arg2 ;
-(id)dragController:(id)arg0 scrollViewForAssetReference:(id)arg1 ;
-(id)dragControllerAssetReferenceForBeginningSession:(id)arg0 ;
-(id)dragControllerViewControllerForPresentation:(id)arg0 ;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)oneUpPresentation:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationActionManager:(id)arg0 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationHelperScrollView:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)regionOfInterestForAssetReference:(id)arg0 ;
-(id)regionOfInterestForAssetReference:(id)arg0 image:(*id)arg1 ;
-(id)swipeSelectionManager:(id)arg0 indexPathSetFromIndexPath:(struct PXSimpleIndexPath )arg1 toIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(struct PXSimpleIndexPath )_indexPathForAssetAtLocation:(struct CGPoint )arg0 withPadding:(struct UIEdgeInsets )arg1 forSwipeSelectionManager:(id)arg2 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathAtLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestAboveLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestLeadingLocation:(struct CGPoint )arg1 ;
-(void)_handleDoubleTap:(id)arg0 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_setupGestures;
-(void)_tearDownGestures;
-(void)_updateContextMenuInteraction;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didEndPreviewingForContextMenuInteraction:(id)arg0 ;
-(void)dragController:(id)arg0 draggedAssetReferencesDidChange:(id)arg1 ;
-(void)dragController:(id)arg0 dropTargetAssetReferenceDidChange:(id)arg1 ;
-(void)dragController:(id)arg0 isDragSessionActiveDidChange:(BOOL)arg1 ;
-(void)ensureSwipeDismissalInteraction;
-(void)handleLongPress:(id)arg0 ;
-(void)oneUpPresentation:(id)arg0 didEndPreviewingForContextMenuInteraction:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)performActionWithType:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)swipeSelectionManager:(id)arg0 extendSelectionInDirection:(NSUInteger)arg1 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg0 ;
-(void)swipeSelectionManagerDidAutoScroll:(id)arg0 ;
-(void)toggleSelectMode;
-(void)viewDidChange;


@end


#endif