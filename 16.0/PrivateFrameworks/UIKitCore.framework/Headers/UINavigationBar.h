// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UINAVIGATIONBAR_H
#define UINAVIGATIONBAR_H

@class NSArray, NSString, NSDictionary;
@protocol UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, NSCoding, UIBarPositioning, _UINavigationBarDelegatePrivate, UINavigationBarDelegate;


#import "UIView.h"
#import "_UINavigationBarItemStack.h"
#import "UIColor.h"
#import "_UINavigationBarAppearanceStorage.h"
#import "_UIViewControllerTransitionContext.h"
#import "_UINavigationBarVisualProvider.h"
#import "_UINavigationBarVisualStyle.h"
#import "UIAccessibilityHUDGestureManager.h"
#import "UIBarButtonItem.h"
#import "UILayoutGuide.h"
#import "UIImage.h"
#import "UINavigationItem.h"
#import "UINavigationBarAppearance.h"
#import "_UINavigationItemButtonView.h"
#import "_UINavigationControllerRefreshControlHost.h"

@interface UINavigationBar : UIView <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, NSCoding, UIBarPositioning>

 {
    _UINavigationBarItemStack *_stack;
    id<_UINavigationBarDelegatePrivate> *_delegate;
    UIColor *_barTintColor;
    _UINavigationBarAppearanceStorage *_appearanceStorage;
    NSInteger _animationDisabledCount;
    NSInteger _barTranslucence;
    _UIViewControllerTransitionContext *_navControllerAnimatingContext;
    _UINavigationBarVisualProvider *_visualProvider;
    _UINavigationBarVisualStyle *_visualStyle;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    NSDirectionalEdgeInsets _resolvedLayoutMargins;
    int _currentPushTransition;
    ? _navbarFlags;
}


@property (retain, nonatomic, setter=_setAccessibilityButtonBackgroundTintColor:) UIColor *_accessibilityButtonBackgroundTintColor; // ivar: _accessibilityButtonBackgroundTintColor
@property (readonly, nonatomic, getter=_isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange) BOOL _animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (readonly, nonatomic) NSArray *_animationIds;
@property (nonatomic, setter=_setBackIndicatorLeftMargin:) CGFloat _backIndicatorLeftMargin;
@property (readonly, retain, nonatomic) NSString *_backdropViewLayerGroupName;
@property (nonatomic, setter=_setBackgroundOpacity:) CGFloat _backgroundOpacity;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (readonly, nonatomic) NSInteger _barTranslucence;
@property (readonly, nonatomic, getter=_isContentViewHidden) BOOL _contentViewHidden;
@property (nonatomic, setter=_dci_setBehaviorStyle:) NSInteger _dci_behaviorStyle; // ivar: _behaviorStyle
@property (nonatomic, getter=_wasDecodedUnlockedWithNavigationControllerDelegate, setter=_setDecodedUnlockedWithNavigationControllerDelegate:) BOOL _decodedUnlockedWithNavigationControllerDelegate;
@property (nonatomic, setter=_setDeferShadowToSearchBar:) BOOL _deferShadowToSearchBar;
@property (nonatomic, setter=_setDisableBlurTinting:) BOOL _disableBlurTinting;
@property (nonatomic, setter=_setForceScrollEdgeAppearance:) BOOL _forceScrollEdgeAppearance;
@property (readonly, nonatomic) BOOL _hasFixedMaximumHeight;
@property (readonly, nonatomic) BOOL _hasVariableHeight;
@property (readonly, nonatomic) CGFloat _heightForRestoringFromCancelledTransition;
@property (readonly, nonatomic) CGFloat _heightIncludingBackground;
@property (nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow;
@property (readonly, nonatomic) BOOL _lostNavigationControllerDelegate;
@property (readonly, nonatomic) CGFloat _navItemContentLayoutGuideAnimationDistance;
@property (nonatomic, setter=_setOverrideBackgroundExtension:) CGFloat _overrideBackgroundExtension; // ivar: __overrideBackgroundExtension
@property (nonatomic, setter=_setRequestedMaxBackButtonWidth:) CGFloat _requestedMaxBackButtonWidth; // ivar: _requestedMaxBackButtonWidth
@property (readonly, nonatomic) BOOL _scrollEdgeAppearanceHasChromelessBehavior;
@property (nonatomic, setter=_setShadowAlpha:) CGFloat _shadowAlpha;
@property (nonatomic, getter=_shouldFadeStaticNavBarButton, setter=_setShouldFadeStaticNavBarButton:) BOOL _shouldFadeStaticNavBarButton;
@property (readonly, nonatomic) _UINavigationBarItemStack *_stack;
@property (readonly, nonatomic) BOOL _startedAnimationTracking; // ivar: __startedAnimationTracking
@property (retain, nonatomic, setter=_setStaticNavBarButtonItem:) UIBarButtonItem *_staticNavBarButtonItem;
@property (nonatomic, getter=_staticNavBarButtonLingers, setter=_setStaticNavBarButtonLingers:) BOOL _staticNavBarButtonLingers;
@property (nonatomic, setter=_setTitleOpacity:) CGFloat _titleOpacity;
@property (nonatomic, setter=_setUseInlineBackgroundHeightWhenLarge:) BOOL _useInlineBackgroundHeightWhenLarge;
@property (readonly, nonatomic) UILayoutGuide *_userContentGuide;
@property (nonatomic, setter=_setWantsLetterpressContent:) BOOL _wantsLetterpressContent; // ivar: _wantsLetterpressContent
@property (nonatomic, setter=_setAlwaysUseDefaultMetrics:) BOOL alwaysUseDefaultMetrics; // ivar: _alwaysUseDefaultMetrics
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (readonly, nonatomic) UINavigationItem *backItem;
@property (copy, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (readonly, nonatomic) NSInteger barPosition; // ivar: _barPosition
@property (nonatomic) NSInteger barStyle; // ivar: _barStyle
@property (retain, nonatomic) UIColor *barTintColor;
@property (readonly, nonatomic) NSUInteger behavioralStyle;
@property (copy, nonatomic) UINavigationBarAppearance *compactAppearance; // ivar: _compactAppearance
@property (copy, nonatomic) UINavigationBarAppearance *compactScrollEdgeAppearance; // ivar: _compactScrollEdgeAppearance
@property (readonly, nonatomic) _UINavigationItemButtonView *currentBackButton;
@property (readonly, nonatomic) NSInteger currentContentSize;
@property (readonly, nonatomic) UIView *currentLeftView;
@property (readonly, nonatomic) NSInteger currentNSToolbarSection;
@property (readonly, nonatomic) UIView *currentRightView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UINavigationBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceFullHeightInLandscape;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMinibar;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes; // ivar: _largeTitleTextAttributes
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic) NSUInteger preferredBehavioralStyle;
@property (nonatomic) BOOL prefersLargeTitles; // ivar: _prefersLargeTitles
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic) NSInteger requestedContentSize; // ivar: _requestedContentSize
@property (copy, nonatomic) UINavigationBarAppearance *scrollEdgeAppearance; // ivar: _scrollEdgeAppearance
@property (retain, nonatomic) UIImage *shadowImage;
@property (copy, nonatomic) UINavigationBarAppearance *standardAppearance; // ivar: _standardAppearance
@property (readonly, nonatomic) int state;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (readonly, nonatomic) UINavigationItem *topItem;
@property (nonatomic, getter=isTranslucent) BOOL translucent;


+(BOOL)_forceLegacyVisualProvider;
+(BOOL)_requiresModernVisualProvider;
+(BOOL)_supportsCanvasView;
+(BOOL)_useCustomBackButtonAction;
+(CGFloat)defaultAnimationDuration;
+(Class)_visualProviderClassForNavigationBar:(id)arg0 ;
+(id)_defaultVisualStyleForOrientation:(NSInteger)arg0 ;
+(id)_statusBarBaseTintColorForStyle:(NSInteger)arg0 translucent:(BOOL)arg1 tintColor:(id)arg2 ;
+(id)_statusBarBaseTintColorForStyle:(NSInteger)arg0 translucent:(BOOL)arg1 tintColor:(id)arg2 backgroundImage:(id)arg3 viewSize:(struct CGSize )arg4 ;
+(id)_visualProviderForNavigationBar:(id)arg0 ;
+(id)defaultPromptFont;
+(struct CGSize )defaultSize;
+(struct CGSize )defaultSizeForOrientation:(NSInteger)arg0 ;
+(struct CGSize )defaultSizeWithPrompt;
+(struct CGSize )defaultSizeWithPromptForOrientation:(NSInteger)arg0 ;
+(void)_initializeForIdiom:(NSInteger)arg0 ;
+(void)_setUseCustomBackButtonAction:(BOOL)arg0 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_allowInteractionDuringTransition;
-(BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_didVisibleItemsChangeWithNewItems:(id)arg0 oldItems:(id)arg1 ;
-(BOOL)_effectiveDelegateSupportsScrollEdgeTransitionProgress;
-(BOOL)_hasBackButton;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_hasLegacyProvider;
-(BOOL)_heightDependentOnOrientation;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(BOOL)_isAlwaysHidden;
-(BOOL)_isAnimationEnabled;
-(BOOL)_shouldDecodeSubviews;
-(BOOL)_shouldShowBackButtonForNavigationItem:(id)arg0 ;
-(BOOL)_shouldShowBackButtonForScreen:(id)arg0 ;
-(BOOL)_subclassImplementsDrawRect;
-(BOOL)_suppressBackIndicator;
-(BOOL)_titleAutoresizesToFit;
-(BOOL)_updateNavItemContentLayoutGuideAnimationConstraintConstant:(CGFloat)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAnimationEnabled;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isTransparentFocusItem;
-(BOOL)supportsRefreshControlHosting;
-(BOOL)titleAutoresizesToFit;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_defaultAutolayoutSpacing;
-(CGFloat)_effectiveBackIndicatorLeftMargin;
-(CGFloat)defaultBackButtonAlignmentHeight;
-(CGFloat)defaultHeight;
-(CGFloat)defaultHeightForMetrics:(NSInteger)arg0 ;
-(CGFloat)titleVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(NSInteger)_activeBarMetrics;
-(NSInteger)_backgroundBackdropStyle;
-(NSInteger)_currentBarStyle;
-(NSInteger)_effectiveMetricsForMetrics:(NSInteger)arg0 ;
-(NSInteger)_itemStackCount;
-(NSInteger)_sceneDraggingBehaviorOnPan;
-(NSInteger)_statusBarStyle;
-(NSInteger)animationDisabledCount;
-(NSInteger)effectiveInterfaceOrientation;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)_accessibility_contentsOfNavigationBar;
-(id)_accessibility_navigationController;
-(id)_allViews;
-(id)_appearanceStorage;
-(id)_backButtonForBackItem:(id)arg0 topItem:(id)arg1 ;
-(id)_backgroundViewForPalette:(id)arg0 ;
-(id)_contentView;
-(id)_currentVisualStyle;
-(id)_defaultTitleFont;
-(id)_defaultTitleFontFittingHeight:(CGFloat)arg0 withScaleAdjustment:(CGFloat)arg1 ;
-(id)_defaultTitleFontWithScaleAdjustment:(CGFloat)arg0 ;
-(id)_effectiveBarTintColor;
-(id)_effectiveDelegate;
-(id)_popNavigationItemWithTransition:(int)arg0 ;
-(id)_restingHeights;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_titleTextColor;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)animationFactory;
-(id)backButtonViewAtPoint:(struct CGPoint )arg0 ;
-(id)backgroundImageForBarMetrics:(NSInteger)arg0 ;
-(id)backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)buttonItemShadowColor;
-(id)buttonItemTextColor;
-(id)createButtonWithContents:(id)arg0 width:(CGFloat)arg1 barStyle:(NSInteger)arg2 buttonStyle:(int)arg3 isRight:(BOOL)arg4 ;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)navigationItemAtPoint:(struct CGPoint )arg0 ;
-(id)navigationItems;
-(id)popNavigationItemAnimated:(BOOL)arg0 ;
-(id)preferredFocusedView;
-(id)prompt;
-(id)promptView;
-(int)_transitionForOldItems:(id)arg0 newItems:(id)arg1 ;
-(struct ? )_layoutHeightsForNavigationItem:(id)arg0 fittingWidth:(CGFloat)arg1 ;
-(struct CGRect )_incomingNavigationBarFrame;
-(struct CGRect )availableTitleArea;
-(struct CGRect )promptBounds;
-(struct CGSize )defaultSizeForOrientation:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct NSDirectionalEdgeInsets )_resolvedLargeTitleMargins;
-(struct NSDirectionalEdgeInsets )_resolvedLayoutMargins;
-(struct NSDirectionalEdgeInsets )_resolvedSearchBarMargins;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg0 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;
-(void)_accessibility_navigationBarContentsDidChange;
-(void)_accessibility_triggerBackButton;
-(void)_accessibility_triggerBarButtonItem:(id)arg0 ;
-(void)_addItem:(id)arg0 withEffectiveDelegate:(id)arg1 transition:(int)arg2 ;
-(void)_addItems:(id)arg0 withEffectiveDelegate:(id)arg1 transition:(int)arg2 ;
-(void)_animateForSearchPresentation:(BOOL)arg0 ;
-(void)_applySPIAppearanceToButtons;
-(void)_barSizeDidChange:(struct CGSize )arg0 ;
-(void)_beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)_beginInteractiveTransition;
-(void)_beginRenaming;
-(void)_beginRenamingIfPossible;
-(void)_cancelInProgressPushOrPop;
-(void)_cancelInteractiveTransition;
-(void)_cancelInteractiveTransition:(CGFloat)arg0 completionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)_commonNavBarInit;
-(void)_completePopOperationAnimated:(BOOL)arg0 transitionAssistant:(id)arg1 ;
-(void)_completePushOperationAnimated:(BOOL)arg0 transitionAssistant:(id)arg1 ;
-(void)_configurePaletteConstraintsIfNecessary;
-(void)_customViewChangedForButtonItem:(id)arg0 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_disableAnimation;
-(void)_dismissHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)_displayItemsKeepingOwningNavigationBar:(id)arg0 ;
-(void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg0 ;
-(void)_enableAnimation;
-(void)_endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)_endRenaming;
-(void)_evaluateBackIndicatorForHilightedState:(BOOL)arg0 ofBarButtonItem:(id)arg1 inNavigationItem:(id)arg2 ;
-(void)_fadeAllViewsIn;
-(void)_fadeAllViewsOut;
-(void)_finishInteractiveTransition:(CGFloat)arg0 completionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)_getBackgroundImage:(*id)arg0 shouldRespectOversizedBackgroundImage:(*BOOL)arg1 actualBarMetrics:(*NSInteger)arg2 actualBarPosition:(*NSInteger)arg3 ;
-(void)_installContentClippingView:(id)arg0 ;
-(void)_installDefaultAppearance;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg0 ;
-(void)_palette:(id)arg0 isAttaching:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)_performUpdatesIgnoringLock:(id)arg0 ;
-(void)_popNavigationItemWithTransitionAssistant:(id)arg0 ;
-(void)_popNestedNavigationItem;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_presentHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)_propagateEffectiveBarTintColorWithPreviousColor:(id)arg0 ;
-(void)_pushNavigationItem:(id)arg0 transition:(int)arg1 ;
-(void)_pushNavigationItem:(id)arg0 transitionAssistant:(id)arg1 ;
-(void)_pushNavigationItemUsingCurrentTransition:(id)arg0 ;
-(void)_pushNestedNavigationItem:(id)arg0 ;
-(void)_redisplayItems;
-(void)_reenableUserInteraction;
-(void)_reenableUserInteractionWhenReadyWithContext:(id)arg0 ;
-(void)_refreshBackButtonMenu;
-(void)_removeContentClippingView;
-(void)_sendNavigationBarAnimateTransition;
-(void)_sendNavigationBarDidChangeStyle;
-(void)_sendNavigationBarResize;
-(void)_sendNavigationPopForBackBarButtonItem:(id)arg0 ;
-(void)_sendResizeForPromptChange;
-(void)_setAutoAdjustTitle:(BOOL)arg0 ;
-(void)_setBackButtonBackgroundImage:(id)arg0 mini:(id)arg1 forStates:(NSUInteger)arg2 ;
-(void)_setBackIndicatorPressed:(BOOL)arg0 initialPress:(BOOL)arg1 ;
-(void)_setBackdropViewLayerGroupName:(id)arg0 ;
-(void)_setBackgroundImage:(id)arg0 mini:(id)arg1 ;
-(void)_setButtonBackgroundImage:(id)arg0 mini:(id)arg1 forStates:(NSUInteger)arg2 ;
-(void)_setButtonItemTextColor:(id)arg0 shadowColor:(id)arg1 ;
-(void)_setButtonItemTextColor:(id)arg0 shadowColor:(id)arg1 forState:(NSUInteger)arg2 ;
-(void)_setButtonTextShadowOffset:(struct CGSize )arg0 ;
-(void)_setDecodedItems:(id)arg0 ;
-(void)_setNeedsBackgroundViewUpdate;
-(void)_setNeedsStaticNavBarButtonUpdate;
-(void)_setPressedButtonItemTextColor:(id)arg0 shadowColor:(id)arg1 ;
-(void)_setPrompt:(id)arg0 ;
-(void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg0 ;
-(void)_setupAXHUDGestureIfNecessary;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;
-(void)_uikit_applyValueFromTraitStorage:(id)arg0 forKeyPath:(id)arg1 ;
-(void)_updateActiveBarMetrics;
-(void)_updateBackButtonVisibilityIfTop:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateBackIndicatorImage;
-(void)_updateContentIfTopItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateInteractiveTransition:(CGFloat)arg0 ;
-(void)_updateNavigationBarItem:(id)arg0 forStyle:(NSInteger)arg1 previousTintColor:(id)arg2 ;
-(void)_updateNavigationBarItemsForStyle:(NSInteger)arg0 ;
-(void)_updateNavigationBarItemsForStyle:(NSInteger)arg0 previousTintColor:(id)arg1 ;
-(void)_updateOpacity;
-(void)_updatePalette:(id)arg0 ;
-(void)_updatePaletteBackgroundIfNecessary;
-(void)_updateSearchBarForPlacementChangeIfApplicable;
-(void)_updateTitleViewIfTop:(id)arg0 ;
-(void)_upgradeAppearanceAPI;
-(void)_willMoveToWindow:(id)arg0 ;
-(void)addConstraint:(id)arg0 ;
-(void)dealloc;
-(void)didAddSubview:(id)arg0 ;
-(void)didMoveToWindow;
-(void)disableAnimation;
-(void)drawBackButtonBackgroundInRect:(struct CGRect )arg0 withStyle:(NSInteger)arg1 pressed:(BOOL)arg2 ;
-(void)drawBackgroundInRect:(struct CGRect )arg0 withStyle:(NSInteger)arg1 ;
-(void)enableAnimation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)hideButtons;
-(void)invalidateIntrinsicContentSize;
-(void)layoutMarginsDidChange;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)popForCarplayPressAtFakePoint:(struct CGPoint )arg0 ;
-(void)popNavigationItem;
-(void)pushNavigationItem:(id)arg0 ;
-(void)pushNavigationItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeConstraint:(id)arg0 ;
-(void)rename:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)setBackgroundImage:(id)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setBackgroundImage:(id)arg0 forBarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setButton:(int)arg0 enabled:(BOOL)arg1 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNavigationItems:(id)arg0 ;
-(void)setNeedsLayout;
-(void)setPrompt:(id)arg0 ;
-(void)setRightMargin:(CGFloat)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setTitleAutoresizesToFit:(BOOL)arg0 ;
-(void)setTitleVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setTitleView:(id)arg0 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)showBackButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showButtonsWithLeft:(id)arg0 right:(id)arg1 leftBack:(BOOL)arg2 ;
-(void)showButtonsWithLeftTitle:(id)arg0 rightTitle:(id)arg1 ;
-(void)showButtonsWithLeftTitle:(id)arg0 rightTitle:(id)arg1 leftBack:(BOOL)arg2 ;
-(void)showLeftButton:(id)arg0 withStyle:(int)arg1 rightButton:(id)arg2 withStyle:(int)arg3 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updatePrompt;


@end


#endif