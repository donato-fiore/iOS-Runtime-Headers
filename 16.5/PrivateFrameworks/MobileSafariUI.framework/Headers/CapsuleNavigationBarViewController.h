// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAPSULENAVIGATIONBARVIEWCONTROLLER_H
#define CAPSULENAVIGATIONBARVIEWCONTROLLER_H

@class UIViewController, SFCapsuleCollectionView, UIContextMenuInteraction, SFCapsuleNavigationBar, UIResponder, NSString, NSArray;
@protocol PKScribbleInteractionElementSource, SFCapsuleCollectionViewGestureObserving, TabControllerDocumentObserving, TabDocumentNavigationObserving, UIContextMenuInteractionDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, _UIScrollViewScrollObserver, SFCapsuleCollectionViewDataSource, SFCapsuleCollectionViewDelegate, TabOverviewPresentationObserving, CapsuleNavigationBarViewControllerDelegate;


#import "TabDocument.h"
#import "TabController.h"
#import "UnifiedField.h"

@interface CapsuleNavigationBarViewController : UIViewController <PKScribbleInteractionElementSource, SFCapsuleCollectionViewGestureObserving, TabControllerDocumentObserving, TabDocumentNavigationObserving, UIContextMenuInteractionDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, _UIScrollViewScrollObserver, SFCapsuleCollectionViewDataSource, SFCapsuleCollectionViewDelegate, TabOverviewPresentationObserving>

 {
    id *_nextStateChangeCompletionHandler;
    NSInteger _hideCapsuleCount;
    NSInteger _webViewTapTransitionCount;
    TabDocument *_attachedTab;
    BOOL _unminimizeOnHideKeyboard;
    BOOL _keyboardIsVisible;
    SFCapsuleCollectionView *_capsuleCollectionView;
    BOOL _showingContextMenu;
    UIContextMenuInteraction *_contextMenuInteraction;
    SFCapsuleNavigationBar *_sizingNavigationBar;
    SFCapsuleNavigationBar *_minimizedSizingNavigationBar;
    NSUInteger _lastSwipeAxis;
    CGFloat _additionalBottomObscuredInset;
    BOOL _adjustScrollViewContentOffsetForMinimization;
    TabDocument *_interactivelyInsertedTabDocument;
}


@property (readonly, nonatomic) SFCapsuleCollectionView *capsuleCollectionView;
@property (readonly, nonatomic) BOOL capsuleIsFocused; // ivar: _capsuleIsFocused
@property (readonly, nonatomic) BOOL capsuleIsMinimized;
@property (weak) UIResponder *customNextResponder; // ivar: _customNextResponder
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CapsuleNavigationBarViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL focusingForScribble; // ivar: _focusingForScribble
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL performingWebViewTapTransition;
@property (readonly, nonatomic) SFCapsuleNavigationBar *selectedItemNavigationBar; // ivar: _cachedSelectedItemNavigationBar
@property (readonly) Class superclass;
@property (retain, nonatomic) TabController *tabController; // ivar: _tabController
@property (readonly, nonatomic) NSArray *tabDocuments; // ivar: _tabDocuments
@property (readonly, nonatomic) BOOL transitioningToNormalStateForKeyboardDismissal; // ivar: _transitioningToNormalStateForKeyboardDismissal
@property (readonly, nonatomic) UnifiedField *unifiedField;


-(BOOL)_activeWebViewIsFirstResponder;
-(BOOL)_capsuleShouldShowAlternateToolbarDuringTabViewTransition;
-(BOOL)_shouldAttachCapsuleForTabViewTransition;
-(BOOL)_showsOnlyActiveTab;
-(BOOL)capsuleCollectionView:(id)arg0 shouldHideShadowForItemAtIndex:(NSInteger)arg1 ;
-(BOOL)capsuleCollectionViewAllowsMinimizationGesture:(id)arg0 ;
-(BOOL)capsuleCollectionViewContentScaleCompletesMinimization:(id)arg0 ;
-(BOOL)capsuleCollectionViewShouldDelayToolbarPresentation:(id)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)transitionToState:(NSInteger)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)transitionToState:(NSInteger)arg0 options:(NSInteger)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(CGFloat)capsuleCollectionView:(id)arg0 distanceToTopEdgeIncludingDeceleration:(BOOL)arg1 ;
-(CGFloat)capsuleCollectionView:(id)arg0 heightForItemAtIndex:(NSInteger)arg1 width:(CGFloat)arg2 state:(NSInteger)arg3 ;
-(CGFloat)capsuleCollectionViewMinimizedContentScale:(id)arg0 ;
-(NSInteger)_collectionViewIndexOfTabDocument:(id)arg0 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSUInteger)_boundaryEdgesForScrollView:(id)arg0 ;
-(NSUInteger)capsuleCollectionViewBoundaryEdgesForScrollableContent:(id)arg0 ;
-(NSUInteger)numberOfItemsInCapsuleCollectionView:(id)arg0 ;
-(id)_contextMenuActionProvider:(SEL)arg0 ;
-(id)_dragPreviewForNavigationBar:(id)arg0 ;
-(id)_tabDocumentAtCollectionViewIndex:(NSInteger)arg0 ;
-(id)capsuleCollectionView:(id)arg0 contentViewForItemAtIndex:(NSInteger)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 dismissalPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)createToolbarForCapsuleCollectionView:(id)arg0 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)nextResponder;
-(id)topActionForCapsuleCollectionView:(id)arg0 ;
-(id)trailingActionForCapsuleCollectionView:(id)arg0 ;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_attachSelectedCapsuleToTabOverview;
-(void)_installDetachedCapsuleInCollectionView;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_reattachCapsuleToCollectionView;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_switchObservingFromTabDocument:(id)arg0 toTabDocument:(id)arg1 ;
-(void)_updateHidingCapsuleAnimated:(BOOL)arg0 ;
-(void)_updateSelectedItemAccessoryViews;
-(void)_updateTabDocumentsAnimated:(BOOL)arg0 ;
-(void)_updateTabDocumentsWithoutUpdatingCollectionView;
-(void)beginHidingCapsuleAnimated:(BOOL)arg0 ;
-(void)capsuleCollectionView:(id)arg0 didBeginSelectionGestureOnAxis:(NSUInteger)arg1 ;
-(void)capsuleCollectionView:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)capsuleCollectionView:(id)arg0 didUpdateProgress:(CGFloat)arg1 toSelectItemAtIndex:(NSInteger)arg2 progressToTopAction:(CGFloat)arg3 snapToAxis:(NSUInteger)arg4 ;
-(void)capsuleCollectionView:(id)arg0 selectedItemWillChangeToState:(NSInteger)arg1 options:(NSInteger)arg2 coordinator:(id)arg3 ;
-(void)capsuleCollectionView:(id)arg0 willChangeToLayoutStyle:(NSInteger)arg1 ;
-(void)capsuleCollectionView:(id)arg0 willEndSelectionGestureWithCoordinator:(id)arg1 ;
-(void)capsuleCollectionViewDidEndSelectionGesture:(id)arg0 ;
-(void)capsuleCollectionViewLayoutStyleDidChange:(id)arg0 ;
-(void)capsuleCollectionViewWillHideKeyboard:(id)arg0 ;
-(void)capsuleCollectionViewWillReloadData:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)endHidingCapsuleAnimated:(BOOL)arg0 ;
-(void)loadView;
-(void)tabCollectionViewDidCancelDismissal:(id)arg0 ;
-(void)tabCollectionViewDidDismiss:(id)arg0 ;
-(void)tabCollectionViewDidPresent:(id)arg0 ;
-(void)tabCollectionViewWillDismiss:(id)arg0 ;
-(void)tabCollectionViewWillPresent:(id)arg0 ;
-(void)tabController:(id)arg0 didCloseTabDocuments:(id)arg1 atIndexes:(id)arg2 info:(NSUInteger)arg3 ;
-(void)tabController:(id)arg0 didInsertTabDocument:(id)arg1 ;
-(void)tabController:(id)arg0 didMoveTabDocument:(id)arg1 overTabDocument:(id)arg2 ;
-(void)tabController:(id)arg0 didReplaceTabDocument:(id)arg1 withTabDocument:(id)arg2 ;
-(void)tabController:(id)arg0 didSwitchFromTabDocument:(id)arg1 toTabDocument:(id)arg2 ;
-(void)tabControllerDidChangeCurrentTabDocuments:(id)arg0 ;
-(void)tabControllerDidEndUpdates:(id)arg0 ;
-(void)tabControllerDocumentCountDidChange:(id)arg0 ;
-(void)tabControllerWillBeginUpdates:(id)arg0 ;
-(void)tabDocumentDidCommitNavigation:(id)arg0 ;
-(void)tabDocumentWillEndNavigationGesture:(id)arg0 withNavigationToBackForwardListItem:(id)arg1 ;
-(void)tabOverviewDidUpdateInteractivePresentation:(id)arg0 ;
-(void)tabOverviewWillBeginInteractivePresentation:(id)arg0 ;
-(void)tabOverviewWillEndInteractivePresentation:(id)arg0 ;
-(void)updateAdditionalBottomObscuredInset;
-(void)updateVisibleContextMenu;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)webViewDidFirstMeaningfulPaintForTabDocument:(id)arg0 ;
-(void)willTransitionFromTabView:(id)arg0 toTabView:(id)arg1 ;


@end


#endif