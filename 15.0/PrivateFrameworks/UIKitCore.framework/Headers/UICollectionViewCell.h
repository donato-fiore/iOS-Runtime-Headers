// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWCELL_H
#define UICOLLECTIONVIEWCELL_H

@class NSString;
@protocol UIGestureRecognizerDelegate, _UILayoutEngineSuspending, _UISystemBackgroundViewContainer, _UIContentViewInternal, _UIBackgroundConfigurationInternal, UIContentConfiguration;


#import "UICollectionReusableView.h"
#import "UILongPressGestureRecognizer.h"
#import "_UISystemBackgroundView.h"
#import "UIView.h"
#import "UIBackgroundConfiguration.h"
#import "UICellConfigurationState.h"
#import "_UIFloatingContentView.h"

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate, _UILayoutEngineSuspending, _UISystemBackgroundViewContainer>

 {
    UILongPressGestureRecognizer *_menuGesture;
    id *_selectionSegueTemplate;
    id *_highlightingSupport;
    NSString *_contentViewConfigurationIdentifier;
    id<_UIContentViewInternal> *_viewForContentConfiguration;
    id *_contentViewConfigurationProvider;
    _UISystemBackgroundView *_systemBackgroundView;
    id *_backgroundViewConfigurationProvider;
    id<_UIBackgroundConfigurationInternal> *_lastNormalBackgroundViewConfiguration;
    ? _collectionCellFlags;
    NSInteger _dragState;
}


@property (readonly, nonatomic, getter=_backgroundFillIsCustomizedForSelectionOrHighlight) BOOL _backgroundFillIsCustomizedForSelectionOrHighlight;
@property (readonly, nonatomic, getter=_backgroundIsVerticallyInset) BOOL _backgroundIsVerticallyInset;
@property (nonatomic, getter=_dragState, setter=_setDragState:) NSInteger _dragState;
@property (nonatomic, getter=_dropState, setter=_setDropState:) NSInteger _dropState; // ivar: __dropState
@property (nonatomic, getter=_isDropTarget, setter=_setDropTarget:) BOOL _dropTarget;
@property (readonly, nonatomic) UIView *_existingContentView;
@property (nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) BOOL _layoutEngineSuspended; // ivar: _isLayoutEngineSuspended
@property (nonatomic, getter=_isReordering, setter=_setReordering:) BOOL _reordering;
@property (nonatomic, getter=_isShowingCompactContextMenu, setter=_setShowingCompactContextMenu:) BOOL _showingCompactContextMenu;
@property (nonatomic, getter=_isSwiped, setter=_setSwiped:) BOOL _swiped;
@property (nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration;
@property (nonatomic) BOOL automaticallyUpdatesContentConfiguration;
@property (copy, nonatomic) UIBackgroundConfiguration *backgroundConfiguration;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UICellConfigurationState *configurationState;
@property (copy, nonatomic) id *configurationUpdateHandler; // ivar: _configurationUpdateHandler
@property (copy, nonatomic) NSObject<UIContentConfiguration> *contentConfiguration;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic, getter=_contentViewInset) UIEdgeInsets contentViewInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDragging) BOOL dragging; // ivar: _dragging
@property (nonatomic, getter=_focusStyle, setter=_setFocusStyle:) NSInteger focusStyle; // ivar: _focusStyle
@property (readonly, nonatomic, getter=_focusedFloatingContentView) _UIFloatingContentView *focusedFloatingContentView; // ivar: _focusedFloatingContentView
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) UIView *selectedBackgroundView; // ivar: _selectedBackgroundView
@property (readonly, nonatomic, getter=_selectionAnimationDuration) CGFloat selectionAnimationDuration;
@property (readonly) Class superclass;


+(BOOL)_isInternalCell;
+(BOOL)_subclassOverridesContentViewClass;
+(id)_createDefaultContentViewWithFrame:(struct CGRect )arg0 ;
-(BOOL)_appliesLayoutAttributesMaskingToBackgroundConfiguration;
-(BOOL)_appliesLayoutAttributesMaskingToReusableView;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(BOOL)_canFocusProgrammatically;
-(BOOL)_canPerformActionForKey:(id)arg0 ;
-(BOOL)_descendantsShouldHighlight;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg0 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_hasCustomSelectionAction;
-(BOOL)_highlightDescendantsWhenSelected;
-(BOOL)_isUsingOldStyleMultiselection;
-(BOOL)_performActionForKey:(id)arg0 ;
-(BOOL)_performCustomSelectionAction;
-(BOOL)_removesHighlightedAndSelectedStatesForBackground;
-(BOOL)_shouldForwardMovementToFocusEngine:(NSInteger)arg0 ;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg0 ;
-(BOOL)_usingBackgroundViewConfiguration;
-(BOOL)_usingContentViewConfiguration;
-(BOOL)_wantsFocusRing;
-(BOOL)canBeEdited;
-(BOOL)canBecomeFocused;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isEditing;
-(NSInteger)_focusItemDeferralMode;
-(NSInteger)_systemDefaultFocusGroupPriority;
-(NSUInteger)_effectiveMaskedCornersForSystemBackgroundView;
-(NSUInteger)_maskedCornersForSystemBackgroundView;
-(NSUInteger)_viewConfigurationState;
-(id)_cachedContentOutlineSnapshot;
-(id)_defaultBackgroundConfiguration;
-(id)_defaultBackgroundView;
-(id)_defaultSelectedBackgroundView;
-(id)_encodableSubviews;
-(id)_focusEffectStyle;
-(id)_focusRingPath;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)_selectionSegueTemplate;
-(id)_stateForUpdatingBackgroundConfigurationWithState:(id)arg0 ;
-(id)_systemBackgroundView;
-(id)_visiblePathForBackgroundConfiguration;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_contentTargetSizeForTargetSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 forUseWithSizeThatFits:(BOOL)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_applyBackgroundViewConfiguration:(id)arg0 withState:(id)arg1 ;
-(void)_applyContentViewConfiguration:(id)arg0 withState:(id)arg1 usingSPI:(BOOL)arg2 ;
-(void)_clearCachedContentOutlineSnapshot;
-(void)_configureFocusedFloatingContentView:(id)arg0 ;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_ensureFocusedFloatingContentView;
-(void)_handleMenuGesture:(id)arg0 ;
-(void)_layoutContentView;
-(void)_layoutSystemBackgroundView;
-(void)_monitoredView:(id)arg0 didMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_monitoredView:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_performAction:(SEL)arg0 sender:(id)arg1 ;
-(void)_performConfigurationStateUpdate;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg0 ;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg0 ;
-(void)_setLayoutAttributes:(id)arg0 ;
-(void)_setNeedsConfigurationStateUpdate;
-(void)_setOpaque:(BOOL)arg0 forSubview:(id)arg1 ;
-(void)_setSelectionSegueTemplate:(id)arg0 ;
-(void)_setupHighlightingSupport;
-(void)_teardownHighlightingSupportIfReady;
-(void)_updateBackgroundView;
-(void)_updateBackgroundViewConfigurationForState:(id)arg0 ;
-(void)_updateConfigurationUsingState:(id)arg0 ;
-(void)_updateContentViewConfigurationForState:(id)arg0 ;
-(void)_updateDefaultBackgroundAppearance;
-(void)_updateFocusedFloatingContentControlStateAnimated:(BOOL)arg0 ;
-(void)_updateFocusedFloatingContentControlStateInContext:(id)arg0 withAnimationCoordinator:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateGhostedAppearance;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(void)_updateHighlightColorsForView:(id)arg0 highlight:(BOOL)arg1 ;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)dragStateDidChange:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)paste:(id)arg0 ;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setNeedsUpdateConfiguration;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif