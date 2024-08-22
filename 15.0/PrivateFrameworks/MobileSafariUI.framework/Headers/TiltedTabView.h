// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILTEDTABVIEW_H
#define TILTEDTABVIEW_H

@class UIView, UIPanGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, UIScrollView, SFGradientView, UIPreviewForceInteractionProgress, NSMapTable, NSOrderedSet, NSMutableSet, NSArray, WBSCloudTab, NSTimer, UISearchBar, NSMutableDictionary, NSNumber, NSString, UITextInputPasswordRules, UIButton;
@protocol CAAnimationDelegate, CloudTabTableDelegate, ReorderingAutoscrollerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, _UIBasicAnimationFactory, UIInteractionProgressObserver, UISearchBarDelegate, UIKeyInput, TabThumbnailCollectionView, TiltedTabViewDelegate;


#import "ViewReuseManager.h"
#import "TiltedTabItem.h"
#import "HighlightRecognizer.h"
#import "ReorderingAutoscroller.h"
#import "CloudTabTable.h"
#import "CloudTabItemView.h"
#import "TabExplanationView.h"
#import "TiltedTabViewMetrics.h"

@interface TiltedTabView : UIView <CAAnimationDelegate, CloudTabTableDelegate, ReorderingAutoscrollerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, _UIBasicAnimationFactory, UIInteractionProgressObserver, UISearchBarDelegate, UIKeyInput, TabThumbnailCollectionView>

 {
    BOOL _preparingToTogglePresented;
    UIPanGestureRecognizer *_tabCloseRecognizer;
    UILongPressGestureRecognizer *_tabReorderRecognizer;
    UITapGestureRecognizer *_tabSelectionRecognizer;
    UIScrollView *_scrollView;
    BOOL _suppressingScrollViewDidScroll;
    ViewReuseManager *_viewReuseManager;
    SFGradientView *_statusBarGradient;
    NSUInteger _activeAnimationCount;
    TiltedTabItem *_animatingItem;
    BOOL _startedAnimatingItem;
    UIView *_animatingTopBackdropView;
    TiltedTabItem *_itemToScrollIntoView;
    BOOL _itemToScrollIntoViewScrollsToTop;
    BOOL _topBackdropViewHidden;
    UILongPressGestureRecognizer *_tabPreviewRecognizer;
    UILongPressGestureRecognizer *_tabCommitRecognizer;
    NSInteger _currentTabPreviewState;
    TiltedTabItem *_interactivelyPreviewingItem;
    CGFloat _tabPreviewProgress;
    CGFloat _tabReadyToCommitProgress;
    UIPreviewForceInteractionProgress *_tabPreviewInteractionProgress;
    UIPreviewForceInteractionProgress *_tabReadyToCommitInteractionProgress;
    TiltedTabItem *_interactivelyClosingItem;
    CGFloat _interactiveCloseProgress;
    CGFloat _interactiveCloseVelocity;
    TiltedTabItem *_onlyHorizontalVelocityItem;
    BOOL _applyVelocityOnlyToHorizontalPosition;
    TiltedTabItem *_pressedItem;
    HighlightRecognizer *_pressRecognizer;
    NSMapTable *_dragItemViews;
    TiltedTabItem *_interactivelyReorderingItem;
    CGFloat _interactiveReorderOffsetDistanceFromTouch;
    CGFloat _interactiveReorderOffset;
    BOOL _reorderOffsetNeedsReset;
    BOOL _itemsReordered;
    ReorderingAutoscroller *_reorderingAutoscroller;
    NSOrderedSet *_itemsInvolvedInAnimation;
    NSMutableSet *_itemsCurrentlyClosing;
    NSOrderedSet *_itemsInvolvedInTransition;
    TiltedTabItem *_visiblyCenteredItem;
    BOOL _scrollingToTop;
    UIView *_cloudTabContainer;
    NSArray *_cloudTabDevices;
    NSArray *_cloudTabTables;
    WBSCloudTab *_selectedCloudTab;
    CloudTabTable *_selectedCloudTabTable;
    CloudTabItemView *_editedCloudTabItemView;
    BOOL _cloudTabsNeedLayout;
    NSTimer *_itemActivationTimer;
    UIView *_bottomMaskView;
    BOOL _shouldShowPrivateBrowsingExplanationView;
    BOOL _shouldShowSearchExplanationView;
    TabExplanationView *_explanationView;
    BOOL _explanationViewVisible;
    CGFloat _bottomInsetForKeyboard;
    NSArray *_items;
    CGFloat _pendingBottomInsetForKeyboard;
    UISearchBar *_searchBar;
    BOOL _hasSearchBarInset;
    BOOL _shouldSendDidEndSearchingToDelegate;
    UIView *_inputView;
    BOOL _isAccessibilityContentSize;
    NSMutableDictionary *_scrollPositions;
    NSNumber *_currentScrollPositionIdentifier;
    CGFloat _transitionContentOffsetDeltaY;
    CGSize _expectedSnapshotImageSize;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) BOOL canShowSearchBar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defersActivation; // ivar: _defersActivation
@property (weak, nonatomic) NSObject<TiltedTabViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat desiredSnapshotScale;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidesInactiveTabs;
@property (retain, nonatomic) TiltedTabItem *itemToActivate; // ivar: _itemToActivate
@property (retain, nonatomic) TiltedTabItem *itemToAdd; // ivar: _itemToAdd
@property (copy, nonatomic) NSArray *items; // ivar: _unfilteredItems
@property (readonly, nonatomic) NSArray *itemsFullyInView;
@property (readonly, nonatomic) NSArray *itemsMatchingSearchTerm;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) BOOL lastDecelerationWasInterrupted;
@property (readonly, nonatomic) NSUInteger layoutAxes;
@property (readonly, nonatomic) TiltedTabViewMetrics *metrics; // ivar: _metrics
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly, nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property (nonatomic) NSInteger returnKeyType;
@property (copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, nonatomic, getter=isShowingSearchBar) BOOL showingSearchBar; // ivar: _showingSearchBar
@property (readonly, nonatomic) BOOL showsPrivateBrowsingExplanationView; // ivar: _showsPrivateBrowsingExplanationView
@property (retain, nonatomic) UIButton *sidebarButton; // ivar: _sidebarButton
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (readonly, nonatomic) NSUInteger snapshotBorderOptions;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropTransitionToItemView;
@property (readonly, nonatomic) BOOL supportsSystemDrag;
@property (readonly, nonatomic) UIScrollView *test_scrollView;
@property (copy, nonatomic) NSString *textContentType;


-(BOOL)canBecomeFirstResponder;
-(BOOL)cloudTabTable:(id)arg0 shouldDisplayTab:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isItemAnimating:(id)arg0 ;
-(BOOL)itemIsCoveredBySlidingWindow:(id)arg0 windowSize:(NSUInteger)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)searchBarShouldEndEditing:(id)arg0 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(NSUInteger)countOfVisibleItems;
-(NSUInteger)estimatedSnapshotsPerPageForBounds:(struct CGRect )arg0 withTraitCollection:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_tiltedTabItemForLocation:(struct CGPoint )arg0 ;
-(id)_timingFunctionForAnimation;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inputView;
-(id)itemAtPoint:(struct CGPoint )arg0 ;
-(id)targetItemForDropAtPoint:(struct CGPoint )arg0 ;
-(id)targetedDragPreviewForDroppingItem:(id)arg0 ;
-(id)targetedDragPreviewForLiftingItem:(id)arg0 ;
-(id)viewForItem:(id)arg0 ;
-(struct CGRect )frameForItem:(id)arg0 ;
-(struct CGSize )snapshotSizeForSuggestedSize:(struct CGSize )arg0 ;
-(void)_activateItemToActivate:(id)arg0 ;
-(void)_closeButtonPressed:(id)arg0 ;
-(void)_keyboardWillAppear:(id)arg0 ;
-(void)_keyboardWillDisappear:(id)arg0 ;
-(void)_layoutItemsWithTransition:(NSInteger)arg0 ;
-(void)_tabCloseRecognized:(id)arg0 ;
-(void)_tabCommitGestureRecognized:(id)arg0 ;
-(void)_tabPressUpdated:(id)arg0 ;
-(void)_tabPreviewGestureRecognized:(id)arg0 ;
-(void)_tabReorderRecognized:(id)arg0 ;
-(void)_tabSelectionRecognized:(id)arg0 ;
-(void)activateItem:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)beginSearching;
-(void)cleanUpDragPreviewForItem:(id)arg0 ;
-(void)cloudTabTable:(id)arg0 closeCloudTab:(id)arg1 onDevice:(id)arg2 ;
-(void)cloudTabTable:(id)arg0 didFinishEditingTabItemView:(id)arg1 ;
-(void)cloudTabTable:(id)arg0 didSelectCloudTab:(id)arg1 ;
-(void)cloudTabTable:(id)arg0 didStartEditingTabItemView:(id)arg1 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)endSearching;
-(void)enumerateItemsOrderedByVisibility:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)layoutSubviews;
-(void)presentAnimated:(BOOL)arg0 ;
-(void)reorderingAutoscroller:(id)arg0 handleScroll:(struct CGPoint )arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)setCloudTabDevices:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDragPreviewForItem:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)updateSnapshotForItem:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif