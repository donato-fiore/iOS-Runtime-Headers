// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABOVERVIEW_H
#define TABOVERVIEW_H

@class UIView, NSHashTable, CADisplayLink, NSArray, SFScrollingPanGestureRecognizer, UITapGestureRecognizer, UIPointerInteraction, NSMutableArray, NSCountedSet, UIVisualEffectView, UISearchBar, UILabel, UIToolbar, NSIndexSet, NSTimer, SFGradientView, NSString, UIButton, UITextInputPasswordRules;
@protocol CloudTabTableDelegate, ReorderingAutoscrollerDelegate, _UIBasicAnimationFactory, _UIScrollToTopView, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, UISearchBarDelegate, UISearchBarDelegate_Private, UIKeyInput, SFCapsuleCollectionViewToolbarContentProviding, TabThumbnailCollectionView, TabOverviewDelegate, TabOverviewThemeProviding;


#import "TabOverviewInterpolatedLocation.h"
#import "TabOverviewItem.h"
#import "CloudTabItemView.h"
#import "ReorderingAutoscroller.h"
#import "BarButton.h"
#import "TabExplanationView.h"
#import "TabOverviewItemView.h"

@interface TabOverview : UIView <CloudTabTableDelegate, ReorderingAutoscrollerDelegate, _UIBasicAnimationFactory, _UIScrollToTopView, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, UISearchBarDelegate, UISearchBarDelegate_Private, UIKeyInput, SFCapsuleCollectionViewToolbarContentProviding, TabThumbnailCollectionView>

 {
    NSHashTable *_presentationObservers;
    CADisplayLink *_displayLink;
    TabOverviewInterpolatedLocation *_interpolatedLocation;
    NSArray *_displayedItems;
    BOOL _displayedItemsNeedUpdate;
    SFScrollingPanGestureRecognizer *_panRecognizer;
    SFScrollingPanGestureRecognizer *_tabCloseRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UIPointerInteraction *_cursorInteraction;
    TabOverviewItem *_activeItem;
    TabOverviewItem *_visiblyCenteredItem;
    TabOverviewItem *_interactivelyLiftingItem;
    TabOverviewInterpolatedLocation *_cloudTabsLocation;
    NSArray *_cloudTabDevices;
    NSArray *_cloudTabTables;
    CGFloat _cloudTabsHeight;
    CloudTabItemView *_editedCloudTabItemView;
    CGPoint _lastPanTranslation;
    CGRect _lastLayoutBounds;
    CGRect _lastScrollBounds;
    CGSize _lastContentSize;
    ReorderingAutoscroller *_reorderingAutoscroller;
    CGFloat _swipeCloseTranslation;
    TabOverviewItem *_swipeClosingItem;
    NSMutableArray *_deferredClosingItems;
    NSCountedSet *_itemsShowingContextMenu;
    BOOL _dragging;
    BOOL _updatingAlternateItemPosition;
    BOOL _horizontalBounceEnabled;
    BOOL _verticalBounceEnabled;
    BOOL _shouldBounceToConstrainedLocation;
    BOOL _usesAccessibilityContentSize;
    BOOL _dismissingWithAddTabAnimation;
    BOOL _suppressesTabCloseAnimation;
    UIVisualEffectView *_header;
    UISearchBar *_searchBar;
    BarButton *_searchCancelButton;
    CGFloat _searchBarMinimumWidth;
    UILabel *_titleLabel;
    UIToolbar *_titleToolbar;
    BOOL _includeIncomingItemsInSearch;
    UIView *_inputView;
    BOOL _needsResizeHeaderItems;
    UIView *_scrollingContainerView;
    UIView *_menuPreviewContainerView;
    UIView *_gridVisualizationView;
    NSIndexSet *_indexesMatchingSearch;
    BOOL _shouldAnimateDimmingForSearch;
    BOOL _suppressItemAnimation;
    CGFloat _bottomKeyboardInset;
    TabOverviewItem *_interactivePresentationStartingItem;
    CGPoint _interactivePresentationLastOffset;
    CGPoint _interactivePresentationFirstOffset;
    CGFloat _interactivePresentationLastTimestamp;
    CGFloat _interactivePresentationLastLogScale;
    CGPoint _interactivePresentationVelocity;
    CGFloat _interactivePresentationZoomLockStartTime;
    CGPoint _interactivePresentationZoomLockOffset;
    CGFloat _headerHeight;
    CGFloat _cachedItemHeaderHeight;
    NSTimer *_itemActivationTimer;
    NSMutableArray *_itemViewReuseStack;
    BOOL _shouldShowPrivateBrowsingExplanationView;
    TabExplanationView *_explanationView;
    CGSize _explanationViewSize;
    BOOL _explanationViewVisible;
    BOOL _searchBarBackdropStyleUpdated;
    NSUInteger _fadingSnapshotCount;
    CGFloat _lastUpdateTime;
    SFGradientView *_statusBarGradient;
    CGFloat _privateButtonPreferredWidth;
    NSInteger _lastUsedLayout;
    CGFloat _dismissibleSearchBarHeight;
    UIVisualEffectView *_dismissibleSearchBarBackground;
    NSString *_privateBrowsingButtonTitle;
    BOOL _toolbarDismissed;
    BOOL _toolbarBorrowed;
    NSInteger _toolbarAnimationCount;
    UIView *_toolbarSeparator;
    TabOverviewItemView *_titleSizingItemView;
    NSUInteger _pinnedItemCount;
    NSUInteger _pinnedAlternateItemCount;
    BOOL _transitioningItemIsPinned;
}


@property (readonly, nonatomic) UIButton *addTabButton; // ivar: _addTabButton
@property (readonly, nonatomic) BOOL allowsInteractivePresentation; // ivar: _allowsInteractivePresentation
@property (readonly, nonatomic) NSInteger alternateItemPosition; // ivar: _alternateItemPosition
@property (readonly, nonatomic) NSArray *alternateItems; // ivar: _alternateItems
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (copy, nonatomic) NSArray *barButtonItems; // ivar: _barButtonItems
@property (nonatomic) NSInteger barPlacement; // ivar: _barPlacement
@property (readonly, nonatomic) BOOL canDragOntoActiveTab;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defersActivation; // ivar: _defersActivation
@property (weak, nonatomic) NSObject<TabOverviewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat desiredSnapshotScale;
@property (readonly, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidesInactiveTabs;
@property (readonly, nonatomic, getter=isInSteadyState) BOOL inSteadyState; // ivar: _inSteadyState
@property (retain, nonatomic) TabOverviewItem *itemToActivate; // ivar: _itemToActivate
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSArray *itemsFullyInView;
@property (readonly, nonatomic) NSArray *itemsMatchingSearchTerm;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) BOOL lastDecelerationWasInterrupted; // ivar: _lastDecelerationWasInterrupted
@property (readonly, nonatomic) NSUInteger layoutAxes;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) id *pptStateUpdateHandler; // ivar: _pptStateUpdateHandler
@property (readonly, nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (nonatomic) NSInteger presentedTabLayout; // ivar: _presentedTabLayout
@property (readonly, nonatomic) BOOL presentingInteractively; // ivar: _pinching
@property (readonly, nonatomic) UIButton *privateBrowsingButton; // ivar: _privateBrowsingButton
@property (readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property (nonatomic) NSInteger returnKeyType;
@property (readonly, nonatomic) CGFloat scalePercentageForActiveItem;
@property (copy, nonatomic) NSString *searchTerm;
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (retain, nonatomic) UIButton *sidebarButton; // ivar: _sidebarButton
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (readonly, nonatomic) NSUInteger snapshotBorderOptions;
@property (nonatomic) NSInteger spellCheckingType;
@property (copy, nonatomic) id *stateUpdateHandler; // ivar: _stateUpdateHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropTransitionToItemView;
@property (readonly, nonatomic) BOOL supportsSystemDrag;
@property (nonatomic) BOOL synchronizeClosingItems; // ivar: _synchronizeClosingItems
@property (nonatomic) BOOL targetItemLiftsFromGrid; // ivar: _targetItemLiftsFromGrid
@property (copy, nonatomic) NSString *textContentType;
@property (weak, nonatomic) NSObject<TabOverviewThemeProviding> *themeProvider; // ivar: _themeProvider
@property (copy, nonatomic) NSString *title;


-(BOOL)_isClosingLastItem;
-(BOOL)canBecomeFirstResponder;
-(BOOL)cloudTabTable:(id)arg0 shouldDisplayTab:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isItemAnimating:(id)arg0 ;
-(BOOL)isScrollEnabled;
-(BOOL)itemHasAttachedView:(id)arg0 ;
-(CGFloat)capsuleCollectionView:(id)arg0 heightForToolbarContentView:(id)arg1 ;
-(CGFloat)targetScaleWithTabLayout:(NSInteger)arg0 ;
-(NSUInteger)estimatedSnapshotsPerPageForBounds:(struct CGRect )arg0 withTraitCollection:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inputView;
-(id)itemAtPoint:(struct CGPoint )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)targetItemForDropAtPoint:(struct CGPoint )arg0 ;
-(id)targetedDragPreviewForDroppingItem:(id)arg0 ;
-(id)targetedDragPreviewForLiftingItem:(id)arg0 ;
-(id)targetedPreviewForDismissingMenuForItem:(id)arg0 ;
-(id)toolbarContentViewForCapsuleCollectionView:(id)arg0 ;
-(id)undoManager;
-(id)viewForItem:(id)arg0 ;
-(struct CGRect )_searchBar:(id)arg0 proposedSearchFieldFrame:(struct CGRect )arg1 ;
-(struct CGRect )frameForItem:(id)arg0 ;
-(struct CGSize )_contentSize;
-(struct CGSize )snapshotSizeForSuggestedSize:(struct CGSize )arg0 ;
-(void)_activateItemToActivate:(id)arg0 ;
-(void)_cancelSearch;
-(void)_close:(id)arg0 ;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_dismissWithItemAtCurrentDecelerationFactor:(id)arg0 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_pan:(id)arg0 ;
-(void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)_tabClose:(id)arg0 ;
-(void)_tap:(id)arg0 ;
-(void)_updateDisplayLink;
-(void)_updateScrollBoundsForKeyboardNotification:(id)arg0 ;
-(void)activateItem:(id)arg0 ;
-(void)addPresentationObserver:(id)arg0 ;
-(void)attachView:(id)arg0 withReferenceRect:(struct CGRect )arg1 toItem:(id)arg2 ;
-(void)beginInteractivePresentationWithOffset:(struct CGPoint )arg0 scale:(CGFloat)arg1 ;
-(void)beginSearching;
-(void)cancelInteractivePresentation;
-(void)capsuleCollectionView:(id)arg0 relinquishToolbarContentView:(id)arg1 ;
-(void)cloudTabTable:(id)arg0 closeCloudTab:(id)arg1 onDevice:(id)arg2 ;
-(void)cloudTabTable:(id)arg0 didFinishEditingTabItemView:(id)arg1 ;
-(void)cloudTabTable:(id)arg0 didSelectCloudTab:(id)arg1 ;
-(void)cloudTabTable:(id)arg0 didStartEditingTabItemView:(id)arg1 ;
-(void)copyLocationFromItem:(id)arg0 toItem:(id)arg1 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)didEndShowingContextMenuForItem:(id)arg0 ;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissWithAddTabAnimation;
-(void)endAnimation;
-(void)endInteractivePresentation;
-(void)endInteractivePresentationAllowingDismissalToTargetItem:(BOOL)arg0 ;
-(void)endSearching;
-(void)enumerateItemsOrderedByVisibility:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)performUpdatesWithoutTabCloseAnimation:(id)arg0 ;
-(void)presentAnimated:(BOOL)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)removePresentationObserver:(id)arg0 ;
-(void)reorderingAutoscroller:(id)arg0 handleScroll:(struct CGPoint )arg1 ;
-(void)resetPresentationScrollPosition;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)setCloudTabDevices:(id)arg0 ;
-(void)setInteractiveInsertionProgress:(CGFloat)arg0 forItem:(id)arg1 ;
-(void)setShowsPrivateBrowsingExplanationView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)test_scrollToTopWithoutAnimation;
-(void)test_simulateScrollByOffset:(struct CGPoint )arg0 inTime:(CGFloat)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateInteractivePresentationWithOffset:(struct CGPoint )arg0 scale:(CGFloat)arg1 ;
-(void)updateInteractivePresentationWithOffset:(struct CGPoint )arg0 scale:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)updateSnapshotForItem:(id)arg0 ;
-(void)willAnimateDropForItem:(id)arg0 withAnimator:(id)arg1 ;
-(void)willBeginShowingContextMenuForItem:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif