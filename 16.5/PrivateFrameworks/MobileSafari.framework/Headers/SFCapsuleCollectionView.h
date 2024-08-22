// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCAPSULECOLLECTIONVIEW_H
#define SFCAPSULECOLLECTIONVIEW_H

@class UIView, NSTimer, NSMutableSet, NSMutableDictionary, NSString, _UIVisualEffectBackdropView, UIAction, UIKBVisualEffectView, UIVisualEffectView, UITapGestureRecognizer, UIPanGestureRecognizer, UISelectionFeedbackGenerator, NSHashTable, UIViewFloatAnimatableProperty, NSIndexSet, NSArray, UIToolbar<_SFBarCommon>, NSNumber;
@protocol SFCapsuleContentViewSizeUpdating, _SFFluidProgressViewDelegate, SFStartPageScrollObserver, UIGestureRecognizerDelegate, SFBarAnimating, SFCapsuleCollectionViewToolbarContentProviding, SFCapsuleCollectionViewDataSource, SFCapsuleCollectionViewDelegate;


#import "SFCapsuleNavigationBarTheme.h"
#import "_SFBarTheme.h"
#import "SFCapsuleInputAccessorySpacerView.h"
#import "SFTransitionCoordinator.h"
#import "SFCapsuleCollectionViewUpdate.h"
#import "SFLockdownStatusBar.h"
#import "_SFFluidProgressView.h"
#import "SFNavigationBarItem.h"

@interface SFCapsuleCollectionView : UIView <SFCapsuleContentViewSizeUpdating, _SFFluidProgressViewDelegate, SFStartPageScrollObserver, UIGestureRecognizerDelegate, SFBarAnimating>

 {
    NSTimer *_timerToDiscardViewsForReuse;
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
    CGPoint _offsetForPan;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGesture;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
    NSUInteger _panAxis;
    CGFloat _axisSwitchTime;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    CGPoint _previousVelocity;
    CGPoint _previousMinimizationVelocity;
    NSUInteger _minimizationFlags;
    CGFloat _minimizationStartingDragOffset;
    CGFloat _minimizationLastDragOffset;
    CGFloat _distanceToTopEdgeAtMinimizationBegan;
    NSHashTable *_gestureObservers;
    BOOL _sendProgressMessageToObservers;
    SFTransitionCoordinator *_currentTransitionCoordinator;
    SFCapsuleCollectionViewUpdate *_update;
    NSInteger _numberOfUpdates;
    BOOL _toolbarDismissed;
    NSInteger _toolbarAnimationCount;
    UIView *_alternateToolbarContentView;
    CGFloat _alternateToolbarContentHeight;
    BOOL _showingKeyboard;
    NSInteger _selectedItemStateBeforeShowingKeyboard;
    NSInteger _backdropHeightAnimationCount;
    UIViewFloatAnimatableProperty *_bottomBackdropHeight;
    UIViewFloatAnimatableProperty *_topBackdropHeight;
    CGFloat _topBackdropHeightPresentationValue;
    BOOL _ignoreSetNeedsLayout;
}


@property (weak, nonatomic) NSObject<SFCapsuleCollectionViewToolbarContentProviding> *alternateToolbarContentProvider; // ivar: _alternateToolbarContentProvider
@property (readonly, nonatomic) CGFloat capsuleBackgroundCornerRadius;
@property (readonly, nonatomic) CGRect capsuleFrame;
@property (weak, nonatomic) NSObject<SFCapsuleCollectionViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultCapsuleHeight;
@property (weak, nonatomic) NSObject<SFCapsuleCollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat focusedCapsuleHeight;
@property (nonatomic) CGFloat focusedCapsuleTopOffset; // ivar: _focusedCapsuleTopOffset
@property (readonly, nonatomic) BOOL hasTrailingAction;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_indexesOfAnimatingItems) NSIndexSet *indexesOfAnimatingItems;
@property (retain, nonatomic, getter=_indexesOfLoadedViews, setter=_setIndexesOfLoadedViews:) NSIndexSet *indexesOfLoadedViews; // ivar: _indexesOfLoadedViews
@property (readonly, nonatomic) NSIndexSet *indexesOfVisibleItems;
@property (readonly, nonatomic, getter=_interCapsuleSpacing) CGFloat interCapsuleSpacing;
@property (readonly, nonatomic) BOOL isInteractivelySelectingItem;
@property (readonly, nonatomic) BOOL isTransitioningToNormalStateForTapInBottomRegion;
@property (readonly, nonatomic, getter=_items) NSArray *items; // ivar: _items
@property (nonatomic) BOOL itemsAreHidden; // ivar: _itemsAreHidden
@property (nonatomic, getter=_keyboardHeight, setter=_setKeyboardHeight:) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (readonly, nonatomic) SFLockdownStatusBar *lockdownStatusBar; // ivar: _lockdownStatusBar
@property (nonatomic) NSInteger minimizationStyle; // ivar: _minimizationStyle
@property (readonly, nonatomic) CGRect minimizedCapsuleFrame;
@property (readonly, nonatomic) CGFloat minimizedCapsuleHeightAboveKeyboard;
@property (readonly, nonatomic) _SFFluidProgressView *minimizedProgressView; // ivar: _minimizedProgressView
@property (retain, nonatomic) _SFBarTheme *minimizedTheme; // ivar: _minimizedTheme
@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem; // ivar: _navigationBarItem
@property (readonly, nonatomic) NSUInteger numberOfItems; // ivar: _numberOfItems
@property (readonly, nonatomic) UIEdgeInsets obscuredInsets;
@property (readonly, nonatomic) UIEdgeInsets obscuredInsetsIgnoringKeyboard;
@property (nonatomic, getter=_offsetForMinimization, setter=_setOffsetForMinimization:) CGFloat offsetForMinimization; // ivar: _offsetForMinimization
@property (readonly, nonatomic, getter=_pageWidth) CGFloat pageWidth;
@property (readonly, nonatomic) CGRect selectedCapsuleFrame;
@property (readonly, nonatomic) CGPoint selectedCapsuleOffset;
@property (nonatomic) NSInteger selectedItemIndex; // ivar: _selectedItemIndex
@property (readonly, nonatomic) BOOL selectedItemIsMinimized;
@property (readonly, nonatomic) NSInteger selectedItemState; // ivar: _selectedItemState
@property (readonly, nonatomic) BOOL selectedItemUsesLiftedPreviewAppearance; // ivar: _selectedItemUsesLiftedPreviewAppearance
@property (readonly, nonatomic) NSUInteger selectionGestureAxis;
@property (readonly, nonatomic) NSInteger selectionGestureState; // ivar: _selectionGestureState
@property (nonatomic) CGFloat selectionThreshold; // ivar: _selectionThreshold
@property (readonly, nonatomic, getter=isShowingAlternateToolbarContent) BOOL showingAlternateToolbarContent; // ivar: _showingAlternateToolbarContent
@property (nonatomic) BOOL showingLockdownStatusBar; // ivar: _showingLockdownStatusBar
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesSelectedItemUnfocus; // ivar: _suppressesSelectedItemUnfocus
@property (nonatomic, getter=_suppressingDataSourceCalls, setter=_setSuppressingDataSourceCalls:) BOOL suppressingDataSourceCalls; // ivar: _suppressingDataSourceCalls
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (readonly, nonatomic) UIToolbar<_SFBarCommon> *toolbar; // ivar: _toolbar
@property (retain, nonatomic) NSNumber *toolbarOffsetForPinchTransition; // ivar: _toolbarOffsetForPinchTransition
@property (nonatomic) BOOL useFastDeceleration; // ivar: _useFastDeceleration
@property (readonly, nonatomic, getter=_verticalOffsetForSelectedItem) CGFloat verticalOffsetForSelectedItem;


-(BOOL)_canAnimateUpdates;
-(BOOL)_effectiveItemsAreHidden;
-(BOOL)_hasReachedTrailingActionPullThreshold;
-(BOOL)_selectedItemShouldUsePlatterEffect;
-(BOOL)_shouldAnimateKeyboardHeightChanges;
-(BOOL)_shouldDismissToolbar;
-(BOOL)_shouldDodgeKeyboard;
-(BOOL)_shouldInteractivelySquish;
-(BOOL)_shouldShowAlternateToolbarContent;
-(BOOL)_shouldToggleMinimizedWithTranslation:(CGFloat)arg0 velocity:(CGFloat)arg1 gestureEnded:(BOOL)arg2 ;
-(BOOL)_shouldUseNormalLayoutForMinimizedCapsule;
-(BOOL)_translationIsAlmostHorizontal:(struct CGPoint )arg0 ;
-(BOOL)_updateTrailingAction;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_additionalHeightFromAuxiliaryBarAtMinimizationPercent:(CGFloat)arg0 ;
-(CGFloat)_auxiliaryBarSquishedHeightDecrease;
-(CGFloat)_distanceToTopEdgeIncludingDeceleration:(BOOL)arg0 ;
-(CGFloat)_insetForCapsuleEdgeWithInsets:(struct UIEdgeInsets )arg0 ;
-(CGFloat)_lockdownIndicatorBottomVerticalSpacingAtMinimizationPercent:(CGFloat)arg0 ;
-(CGFloat)_lockdownIndicatorTopVerticalSpacingAtMinimizationPercent:(CGFloat)arg0 ;
-(CGFloat)_minimizedContentScale;
-(CGFloat)_overscrollDistanceForTopEdge;
-(CGFloat)_percentToActivatingTopActionWithTranslation:(struct CGPoint )arg0 ;
-(CGFloat)_percentToSelectItemIndex:(NSInteger)arg0 ;
-(CGFloat)_selectedCapsuleHeightForWidth:(CGFloat)arg0 state:(NSInteger)arg1 ignoringKeyboard:(BOOL)arg2 ;
-(CGFloat)_selectedItemBackgroundAlpha;
-(CGFloat)_selectedItemContentMinimizationPercent;
-(CGFloat)_selectedItemMinimizationPercent;
-(CGFloat)_swipeTranslationFactorWithPercentToTopAction:(CGFloat)arg0 ;
-(CGFloat)_verticalOffsetForBottomBackdropIncludingKeyboard:(BOOL)arg0 ;
-(CGFloat)_verticalOffsetForSelectedItemWithMinimizationOffsetMultiplier:(CGFloat)arg0 includeKeyboard:(BOOL)arg1 ;
-(CGFloat)_verticalOverlapForLockdownStatusIndicatorAtMinimizationPercent:(CGFloat)arg0 ;
-(CGFloat)_verticalPanOffsetForToolbar;
-(CGFloat)_verticalPanOffsetForToolbarBackdrop;
-(NSInteger)_indexOfCentermostItemWithTranslation:(CGFloat)arg0 ;
-(NSInteger)_indexOfTargetItemWithTranslation:(CGFloat)arg0 roundingThreshold:(CGFloat)arg1 ;
-(NSInteger)_indexOfTargetItemWithTranslation:(CGFloat)arg0 roundingThreshold:(CGFloat)arg1 allowActionIndex:(BOOL)arg2 allowOutOfBounds:(BOOL)arg3 ;
-(NSInteger)_keyboardBackdropStyle;
-(NSInteger)_nextItemIndexForSelectionGesture;
-(NSUInteger)_capsuleAlphaOptionsForSelectionGesture;
-(id)_buttonPointerStyleProviderForContentView:(SEL)arg0 ;
-(id)_coordinatorForUpdatingToCurrentSelectedItemStateFromState:(NSInteger)arg0 ;
-(id)_indexesOfVisibleItemsIncludingAction:(BOOL)arg0 ;
-(id)_indexesOfVisibleItemsWithSelectedItemIndex:(NSInteger)arg0 ;
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
-(struct CGAffineTransform )_lockdownIndicatorTransform;
-(struct CGAffineTransform )_selectedItemContentTransform;
-(struct CGPoint )_panGestureTranslationConstrainedToPanAxis;
-(struct CGRect )_bottomBackdropFrame;
-(struct CGRect )_bottomBackdropFrameForAlternateContent;
-(struct CGRect )_inputAccessoryViewFrame;
-(struct CGRect )_minimizedCapsuleFrameIgnoringKeyboard:(BOOL)arg0 ;
-(struct CGRect )_passthroughRect;
-(struct CGRect )_tapToShowBarBottomRegion;
-(struct UIEdgeInsets )_insetsByApplyingSelectedItemOffsetToInsetsForState:(NSInteger)arg0 includeKeyboard:(BOOL)arg1 ;
-(struct UIEdgeInsets )obscuredInsetsForState:(NSInteger)arg0 ;
-(struct UIEdgeInsets )obscuredInsetsForState:(NSInteger)arg0 ignoringKeyboard:(BOOL)arg1 ;
-(void)_applyEffectsForChangeType:(NSInteger)arg0 update:(id)arg1 ;
-(void)_applyToolbarTheme;
-(void)_createToolbarBackdropIfNeeded;
-(void)_decrementAnimationCountForItems:(id)arg0 ;
-(void)_dequeueOrCreateViewForItem:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_didEndBackdropHeightAnimation;
-(void)_didReceiveDismissPan:(id)arg0 ;
-(void)_didReceivePan:(id)arg0 ;
-(void)_didReceiveTap:(id)arg0 ;
-(void)_didReceiveTapOnPeekCapsule:(id)arg0 ;
-(void)_discardExcessViewsForReuse;
-(void)_fetchContentViewForItem:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_incrementAnimationCountForItems:(id)arg0 ;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_layOutItems:(id)arg0 atIndexes:(id)arg1 selectedItemIndex:(NSInteger)arg2 ;
-(void)_layOutKeyboardBackdrop;
-(void)_layOutLockdownStatusBar;
-(void)_layOutMinimizedProgressView;
-(void)_layOutToolbar;
-(void)_performVisualEffectTransitionWithCoordinator:(id)arg0 ;
-(void)_performWithoutSettingNeedsLayout:(id)arg0 ;
-(void)_reclaimViewForItem:(id)arg0 ;
-(void)_reloadDataWithoutLayout;
-(void)_scheduleTimerToDiscardViewsForReuseIfNeeded;
-(void)_sendMinimizationDidEndToObservers;
-(void)_sendMinimizationDidUpdateToObservers;
-(void)_setCapsuleSafeAreaInsetsFrozen:(BOOL)arg0 ;
-(void)_setUpdateRequestActive:(BOOL)arg0 ;
-(void)_updateActions;
-(void)_updateBackdropHeight;
-(void)_updateCapsuleAlpha;
-(void)_updateDragWithOffset:(CGFloat)arg0 velocity:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)_updateLayoutMargins;
-(void)_updateMinimizedProgressViewFillColor;
-(void)_updateOffsetForPan;
-(void)_updateRangeOfLoadedViews;
-(void)_updateShowsMinimizedProgressView;
-(void)_updateStateFlagsForContentViewAtIndex:(NSInteger)arg0 ;
-(void)_updateToolbar;
-(void)_updateToolbarAlpha;
-(void)_updateToolbarTheme;
-(void)_updateTopAction;
-(void)_updateTrailingCapsule;
-(void)_updateVisualEffectGroupName;
-(void)_willBeginBackdropHeightAnimation;
-(void)addGestureObserver:(id)arg0 ;
-(void)beginDraggingWithOffset:(CGFloat)arg0 ;
-(void)beginUpdates;
-(void)beginVisualEffectTransition;
-(void)deleteItemsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)endDraggingWithTargetOffset:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(void)endScrolling;
-(void)endUpdates;
-(void)endVisualEffectTransition;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)insertItemsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)installAlternateToolbarContentIfNeeded;
-(void)invalidateHeightForCapsuleContentView:(id)arg0 ;
// -(void)invalidateHeightForCapsuleContentView:(id)arg0 animated:(BOOL)arg1 animations:(id)arg2 completion:(unk)arg3  ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)reattachView:(id)arg0 ;
-(void)registerContentViewIdentifier:(id)arg0 block:(id)arg1 ;
-(void)relinquishAlternateToolbarContentIfNeeded;
-(void)reloadData;
-(void)reloadItemsAtIndexes:(id)arg0 ;
-(void)removeGestureObserver:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)setNeedsLayout;
-(void)setSelectedItemAccessoryView:(id)arg0 forState:(NSInteger)arg1 ;
-(void)startPageViewControllerDidScroll:(id)arg0 ;
-(void)takeOwnershipOfDetachedViewForItemAtIndex:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDraggingWithOffset:(CGFloat)arg0 ;
-(void)updateTrailingActionAnimated:(BOOL)arg0 ;
-(void)updateVerticalSwipeThreshold;


@end


#endif