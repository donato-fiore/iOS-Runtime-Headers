// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCAPSULECOLLECTIONVIEW_H
#define SFCAPSULECOLLECTIONVIEW_H

@class UIView, NSArray, NSMutableSet, NSMutableDictionary, NSString, _UIVisualEffectBackdropView, UIAction, UIKBVisualEffectView, UIVisualEffectView, UITapGestureRecognizer, UIPanGestureRecognizer, UISelectionFeedbackGenerator, NSHashTable, NSIndexSet, UIToolbar;
@protocol SFCapsuleContentViewSizeUpdating, SFStartPageScrollObserver, UIGestureRecognizerDelegate, SFWebViewGeometryC2AnimationObserving, SFCapsuleCollectionViewDataSource, SFCapsuleCollectionViewDelegate;


#import "SFCapsuleNavigationBarTheme.h"
#import "_SFBarTheme.h"
#import "SFCapsuleInputAccessorySpacerView.h"
#import "SFTransitionCoordinator.h"

@interface SFCapsuleCollectionView : UIView <SFCapsuleContentViewSizeUpdating, SFStartPageScrollObserver, UIGestureRecognizerDelegate, SFWebViewGeometryC2AnimationObserving>

 {
    NSArray *_items;
    NSMutableSet *_viewsForReuse;
    NSMutableDictionary *_contentViewRegistrations;
    UIView *_reuseableContentView;
    NSString *_reusableContentViewIdentifier;
    _UIVisualEffectBackdropView *_backgroundCaptureView;
    SFCapsuleNavigationBarTheme *_effectiveTheme;
    SFCapsuleNavigationBarTheme *_effectiveMinimizedTheme;
    _SFBarTheme *_toolbarTheme;
    NSInteger _visualEffectTransitionCount;
    UIAction *_trailingAction;
    UIAction *_topAction;
    UIKBVisualEffectView *_keyboardBackdropView;
    SFCapsuleInputAccessorySpacerView *_inputAccessoryView;
    UIVisualEffectView *_toolbarBackdropView;
    NSMutableDictionary *_selectedItemAccessoryViews;
    UIView *_bottomSeparator;
    BOOL _deferSelectedItemContentViewRemovalUntilEndOfNextTransition;
    CGFloat _verticalSwipeThreshold;
    CGFloat _capsuleBottomMargin;
    CGPoint _offsetForPan;
    CGFloat _maximumTopSafeAreaInset;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGesture;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
    NSUInteger _panAxis;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    BOOL _swipeDownPossible;
    CGPoint _previousVelocity;
    CGPoint _previousMinimizationVelocity;
    NSUInteger _minimizationFlags;
    CGPoint _minimizationTranslation;
    CGFloat _distanceToTopEdgeAtMinimizationBegan;
    NSHashTable *_gestureObservers;
    BOOL _sendProgressMessageToObservers;
    SFTransitionCoordinator *_currentTransitionCoordinator;
    BOOL _toolbarDismissed;
    BOOL _showingKeyboard;
    NSInteger _selectedItemStateBeforeShowingKeyboard;
}


@property (nonatomic) BOOL backdropViewIsTrackingAnimation; // ivar: _backdropViewIsTrackingAnimation
@property (readonly, nonatomic) CGRect bottomBackdropFrame;
@property (readonly, nonatomic) CGFloat capsuleBackgroundCornerRadius;
@property (readonly, nonatomic) CGRect capsuleFrame;
@property (weak) NSObject<SFCapsuleCollectionViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultCapsuleHeight;
@property (weak) NSObject<SFCapsuleCollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat focusedCapsuleHeight;
@property (nonatomic) CGFloat focusedCapsuleTopOffset; // ivar: _focusedCapsuleTopOffset
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *indexesOfVisibleItems; // ivar: _indexesOfVisibleItems
@property (readonly, nonatomic, getter=_interCapsuleSpacing) CGFloat interCapsuleSpacing;
@property (readonly, nonatomic) BOOL isInteractivelySelectingItem;
@property (readonly, nonatomic) BOOL isTransitioningToNormalStateForTapInBottomRegion;
@property (nonatomic) BOOL itemsAreHidden; // ivar: _itemsAreHidden
@property (nonatomic, getter=_keyboardHeight, setter=_setKeyboardHeight:) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (readonly, nonatomic) UIPanGestureRecognizer *minimizationPanGestureRecognizer; // ivar: _minimizationPanGestureRecognizer
@property (readonly, nonatomic) CGRect minimizedCapsuleFrame;
@property (retain, nonatomic) _SFBarTheme *minimizedTheme; // ivar: _minimizedTheme
@property (readonly, nonatomic) NSUInteger numberOfItems; // ivar: _numberOfItems
@property (readonly, nonatomic) UIEdgeInsets obscuredInsets;
@property (readonly, nonatomic) UIEdgeInsets obscuredInsetsIgnoringKeyboard;
@property (nonatomic, getter=_offsetForMinimization, setter=_setOffsetForMinimization:) CGFloat offsetForMinimization; // ivar: _offsetForMinimization
@property (readonly, nonatomic, getter=_pageWidth) CGFloat pageWidth;
@property (readonly, nonatomic) UIEdgeInsets partiallyObscuredInsets; // ivar: _partiallyObscuredInsets
@property (readonly, nonatomic, getter=_rangeOfAnimatingItems) _NSRange rangeOfAnimatingItems;
@property (nonatomic, getter=_rangeOfLoadedViews, setter=_setRangeOfLoadedViews:) _NSRange rangeOfLoadedViews; // ivar: _rangeOfLoadedViews
@property (readonly, nonatomic, getter=_rangeOfVisibleItems) _NSRange rangeOfVisibleItems;
@property (readonly, nonatomic) CGPoint selectedCapsuleOffset;
@property (nonatomic) NSInteger selectedItemIndex; // ivar: _selectedItemIndex
@property (readonly, nonatomic) BOOL selectedItemIsMinimized;
@property (readonly, nonatomic) NSInteger selectedItemState; // ivar: _selectedItemState
@property (nonatomic) BOOL selectedItemUsesLiftedPreviewAppearance; // ivar: _selectedItemUsesLiftedPreviewAppearance
@property (readonly, nonatomic) NSInteger selectionGestureState; // ivar: _selectionGestureState
@property (nonatomic) CGFloat selectionThreshold; // ivar: _selectionThreshold
@property (nonatomic) BOOL shouldHideMinimizedItem; // ivar: _shouldHideMinimizedItem
@property (readonly, nonatomic) BOOL showsBottomBackdrop;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesSelectedItemUnfocus; // ivar: _suppressesSelectedItemUnfocus
@property (nonatomic, getter=_suppressingDataSourceCalls, setter=_setSuppressingDataSourceCalls:) BOOL suppressingDataSourceCalls; // ivar: _suppressingDataSourceCalls
@property (readonly, nonatomic) CGRect tapToShowBarBottomRegion;
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (readonly, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (nonatomic) BOOL useFastDeceleration; // ivar: _useFastDeceleration
@property (readonly, nonatomic, getter=_verticalOffsetForSelectedItem) CGFloat verticalOffsetForSelectedItem;
@property (readonly, nonatomic) UIEdgeInsets whollyObscuredInsets;
@property (readonly, nonatomic) UIEdgeInsets whollyObscuredInsetsIgnoringKeyboard;


-(BOOL)_canAnimateUpdates;
-(BOOL)_effectiveItemsAreHidden;
-(BOOL)_itemsShouldUsePlatterEffect;
-(BOOL)_selectedItemShouldUsePlatterEffect;
-(BOOL)_shouldDismissToolbar;
-(BOOL)_shouldDodgeKeyboard;
-(BOOL)_shouldToggleMinimizedWithTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 gestureEnded:(BOOL)arg2 ;
-(BOOL)_shouldUseNormalLayoutForMinimizedCapsule;
-(BOOL)_updateTrailingAction;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldTrackObscuredInsetsAnimation;
-(CGFloat)_insetForCapsuleEdgeWithInsets:(struct UIEdgeInsets )arg0 ;
-(CGFloat)_minimizedContentScale;
-(CGFloat)_overscrollDistanceForTopEdge;
-(CGFloat)_percentToActivatingTopActionWithTranslation:(struct CGPoint )arg0 ;
-(CGFloat)_percentToSelectItemIndex:(NSInteger)arg0 ;
-(CGFloat)_selectedCapsuleHeightForWidth:(CGFloat)arg0 state:(NSInteger)arg1 ;
-(CGFloat)_selectedItemBackgroundAlpha;
-(CGFloat)_selectedItemContentMinimizationPercent;
-(CGFloat)_selectedItemMinimizationPercent;
-(CGFloat)_swipeTranslationFactorWithPercentToTopAction:(CGFloat)arg0 ;
-(CGFloat)_verticalOffsetForBottomBackdropIncludingKeyboard:(BOOL)arg0 ;
-(CGFloat)_verticalOffsetForSelectedItemWithMinimizationOffsetMultiplier:(CGFloat)arg0 includeKeyboard:(BOOL)arg1 ;
-(CGFloat)_verticalPanOffsetForToolbar;
-(CGFloat)_verticalPanOffsetForToolbarBackdrop;
-(NSInteger)_indexOfCentermostItemWithTranslation:(CGFloat)arg0 ;
-(NSInteger)_indexOfTargetItemWithTranslation:(CGFloat)arg0 roundingThreshold:(CGFloat)arg1 ;
-(NSInteger)_indexOfTargetItemWithTranslation:(CGFloat)arg0 roundingThreshold:(CGFloat)arg1 allowActionIndex:(BOOL)arg2 ;
-(NSInteger)_keyboardBackdropStyle;
-(NSInteger)_nextItemIndexForSelectionGesture;
-(id)_coordinatorForUpdatingToCurrentSelectedItemStateFromState:(NSInteger)arg0 ;
-(id)_incrementAnimationCountInRange:(struct _NSRange )arg0 ;
-(id)_trailingActionContentView;
-(id)_visualEffectGroupName;
-(id)contentViewForItemAtIndex:(NSInteger)arg0 ;
-(id)createOrDequeueContentViewWithIdentifier:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)detachViewForItemAtIndex:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 forCapsuleFrameWithEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inputAccessoryView;
-(id)viewForItemAtIndex:(NSInteger)arg0 ;
-(struct CGAffineTransform )_selectedItemContentTransform;
-(struct CGPoint )_panGestureTranslationConstrainedToPanAxis;
-(struct CGRect )_inputAccessoryViewFrame;
-(struct CGRect )_passthroughRect;
-(struct CGRect )_selectedCapsuleFrame;
-(struct UIEdgeInsets )_insetsByApplyingSelectedItemOffsetToInsets:(struct UIEdgeInsets )arg0 includeKeyboard:(BOOL)arg1 ;
-(struct UIEdgeInsets )obscuredInsetsForState:(NSInteger)arg0 ;
-(struct UIEdgeInsets )partiallyObcsuredInsets;
-(struct UIEdgeInsets )partiallyObcsuredInsetsForState:(NSInteger)arg0 ;
-(struct UIEdgeInsets )whollyObscuredInsetsForState:(NSInteger)arg0 ;
-(struct _NSRange )_rangeOfVisibleItemsWithSelectedItemIndex:(NSInteger)arg0 ;
-(void)_applyToolbarTheme;
-(void)_decrementAnimationCountForItems:(id)arg0 ;
-(void)_dequeueOrCreateViewForItem:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_didReceiveDismissPan:(id)arg0 ;
-(void)_didReceiveMinimizationPan:(id)arg0 ;
-(void)_didReceivePan:(id)arg0 ;
-(void)_didReceiveTap:(id)arg0 ;
-(void)_didReceiveTapOnPeekCapsule:(id)arg0 ;
-(void)_fetchContentViewForItem:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_incrementAnimationCountForItems:(id)arg0 ;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_layOutItems:(id)arg0 atIndexes:(id)arg1 selectedItemIndex:(NSInteger)arg2 ;
-(void)_layOutKeyboardBackdrop;
-(void)_layOutToolbar;
-(void)_performVisualEffectTransitionWithCoordinator:(id)arg0 ;
-(void)_reclaimViewForItem:(id)arg0 ;
-(void)_reloadDataWithoutLayout;
-(void)_sendMinimizationDidEndToObservers;
-(void)_sendMinimizationDidUpdateToObservers;
-(void)_setCapsuleSafeAreaInsetsFrozen:(BOOL)arg0 ;
-(void)_setUpdateRequestActive:(BOOL)arg0 forMinimization:(BOOL)arg1 ;
-(void)_setUsesToolbar:(BOOL)arg0 ;
-(void)_updateActions;
-(void)_updateCapsuleAlpha;
-(void)_updateLayoutMargins;
-(void)_updateOffsetForPan;
-(void)_updateRangeOfLoadedViews;
-(void)_updateStateFlagsForContentViewAtIndex:(NSInteger)arg0 ;
-(void)_updateToolbarAlpha;
-(void)_updateToolbarTheme;
-(void)_updateTopAction;
-(void)_updateVisualEffectGroupName;
-(void)addGestureObserver:(id)arg0 ;
-(void)beginVisualEffectTransition;
-(void)deleteItemsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)endVisualEffectTransition;
-(void)insertItemsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)invalidateHeightForCapsuleContentView:(id)arg0 ;
// -(void)invalidateHeightForCapsuleContentView:(id)arg0 animated:(BOOL)arg1 animations:(id)arg2 completion:(unk)arg3  ;
-(void)layoutSubviews;
-(void)reattachViewForItemAtIndex:(NSInteger)arg0 ;
-(void)registerContentViewIdentifier:(id)arg0 block:(id)arg1 ;
-(void)reloadData;
-(void)reloadItemsAtIndexes:(id)arg0 ;
-(void)removeGestureObserver:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)setSelectedItemAccessoryView:(id)arg0 forState:(NSInteger)arg1 ;
-(void)startPageViewControllerDidScroll:(id)arg0 ;
-(void)takeOwnershipOfDetachedViewForItemAtIndex:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCapsuleBottomMargin;
-(void)updateTrailingActionAnimated:(BOOL)arg0 ;
-(void)updateVerticalSwipeThreshold;
-(void)webViewGeometryAnimationDidFinish;
-(void)webViewGeometryAnimationWillUpdateObscuredInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif