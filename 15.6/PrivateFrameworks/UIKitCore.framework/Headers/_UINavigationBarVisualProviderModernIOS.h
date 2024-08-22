// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARVISUALPROVIDERMODERNIOS_H
#define _UINAVIGATIONBARVISUALPROVIDERMODERNIOS_H

@class UINavigationBarVisualProvider, NSString;
@protocol _UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory;


#import "_UIBarBackground.h"
#import "_UINavigationBarContentView.h"
#import "UIView.h"
#import "_UINavigationBarLargeTitleView.h"
#import "_UINavigationBarModernPromptView.h"
#import "_UIPointerInteractionAssistant.h"
#import "UILabel.h"
#import "_UINavigationBarTransitionContext.h"
#import "UIBarButtonItem.h"
#import "UIFocusContainerGuide.h"
#import "_UINavigationControllerRefreshControlHost.h"

@interface _UINavigationBarVisualProviderModernIOS : UINavigationBarVisualProvider <_UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory>

 {
    _UIBarBackground *_backgroundView;
    _UINavigationBarContentView *_contentView;
    UIView *_canvasView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarModernPromptView *_promptView;
    _UIPointerInteractionAssistant *_assistant;
    UILabel *_weeTitleLabel;
    _UINavigationBarTransitionContext *_transitionContext;
    CGSize _previousBarSize;
    CGFloat _backgroundAlpha;
    CGFloat _titleAlpha;
    CGFloat _shadowAlpha;
    BOOL _hasIdiom;
    BOOL _runningPaletteBasedSearchPresentation;
    BOOL _useInlineBackgroundHeightWhenLarge;
    BOOL _backgroundTransparentWhenNotCollapsed;
    BOOL _providesExtraSpaceForExcessiveLineHeights;
    BOOL _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
    BOOL _useModernAppearanceAPI;
    BOOL _forceScrollEdgeAppearance;
    BOOL _hasPendingLargeTitleDisplayModeChangeUpdate;
    NSInteger _appearanceAPIVersion;
    UIBarButtonItem *_staticNavBarButtonItem;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_isInInteractiveScroll;
-(BOOL)_isInnerNavigationBarOfNestedNavigationController;
-(BOOL)_shim_disableBlurTinting;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg0 withKeyPath:(id)arg1 ;
-(BOOL)_stackWantsBottomPaletteDisplayedForItem:(id)arg0 ;
-(BOOL)_stackWantsExtendedContentViewForItem:(id)arg0 ;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg0 ;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg0 hideLargeTitleForActiveSearch:(BOOL)arg1 ;
-(BOOL)_stackWantsSearchDisplayedBelowContentViewForItem:(id)arg0 ;
-(BOOL)allowLargeTitleView;
-(BOOL)alwaysEvaluateChromelessTransitionProgress;
-(BOOL)forceScrollEdgeAppearance;
-(BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(BOOL)isContentViewHidden;
-(BOOL)navigationItemIsBackItem:(id)arg0 ;
-(BOOL)navigationItemIsTopItem:(id)arg0 ;
-(BOOL)scrollEdgeAppearanceHasChromelessBehavior;
-(BOOL)shouldFadeStaticNavBarButton;
-(BOOL)staticNavBarButtonLingers;
-(BOOL)supportsRefreshControlHosting;
-(BOOL)topItemHasVariableHeight;
-(BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(CGFloat)arg0 ;
-(BOOL)useInlineBackgroundHeightWhenLarge;
-(BOOL)useManualScrollEdgeAppearanceForItem:(id)arg0 ;
-(BOOL)wantsExtendedContentView;
-(BOOL)wantsLargeTitleDisplayed;
-(CGFloat)_contentBackgroundExtension;
-(CGFloat)_effectiveBackIndicatorLeftMargin;
-(CGFloat)_shim_shadowAlpha;
-(CGFloat)backgroundAlpha;
-(CGFloat)heightForRestoringFromCancelledTransition;
-(CGFloat)navItemContentLayoutGuideAnimationDistance;
-(CGFloat)titleAlpha;
-(NSInteger)appearanceAPIVersion;
-(NSInteger)currentContentSize;
-(NSInteger)statusBarStyle;
-(id)_accessibility_HUDItemForPoint:(struct CGPoint )arg0 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint )arg0 ;
-(id)_backButtonMenu;
-(id)_backgroundLayoutOfClass:(Class)arg0 fromLayout:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_defaultWeeTitleAttributes;
-(id)_shim_compatibilityBackgroundView;
-(id)_staticNavBarButtonFakeBackMenu;
-(id)_timingFunctionForAnimationInView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_updateBackgroundLayout:(id)arg0 forNavigationItem:(id)arg1 compact:(BOOL)arg2 ;
-(id)appearanceObserver;
-(id)emptyLayout;
-(id)refreshControlHost;
-(id)restingHeights;
-(id)staticNavBarButtonItem;
-(id)traitCollectionForChild:(id)arg0 baseTraitCollection:(id)arg1 ;
-(struct ? )layoutHeightsFittingWidth:(CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct NSDirectionalEdgeInsets )largeSearchBaseMarginsRequiringNavMinimums:(BOOL)arg0 ;
-(struct NSDirectionalEdgeInsets )resolvedLargeTitleMargins;
-(struct NSDirectionalEdgeInsets )resolvedSearchBarMargins;
-(void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
-(void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)arg0 ;
-(void)_configureMarginsOnContentViewsAndPalette:(id)arg0 withContentMargin:(CGFloat)arg1 ;
-(void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)arg0 ;
-(void)_endTransitionCompleted:(BOOL)arg0 ;
-(void)_enforceLayoutOrdering;
-(void)_ensureLayoutsConfiguredForEntry:(id)arg0 ;
-(void)_installContentClippingView:(id)arg0 ;
-(void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
-(void)_layoutInBounds:(struct CGRect )arg0 wantsExtendedContentView:(BOOL)arg1 wantsLargeTitle:(BOOL)arg2 ;
// -(void)_performAnimationWithTransitionCompletion:(id)arg0 transition:(unk)arg1  ;
-(void)_popToItem:(id)arg0 ;
-(void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
-(void)_prepareLayouts;
-(void)_presentOrDismissSearch:(int)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_refreshBackButtonMenu;
-(void)_removeContentClippingView;
-(void)_setUpContentFocusContainerGuide;
-(void)_setupAccessibilityLimitsForView:(id)arg0 ;
-(void)_setupTopNavigationItemAnimated:(BOOL)arg0 ;
-(void)_setupTransitionContextForTransition:(int)arg0 ;
-(void)_shim_setCustomBackgroundView:(id)arg0 ;
-(void)_shim_setDisableBlurTinting:(BOOL)arg0 ;
-(void)_shim_setShadowAlpha:(CGFloat)arg0 ;
-(void)_updateAugmentedTitleDataSources;
-(void)_updateBackground;
-(void)_updateCanvasView;
-(void)_updateContentForTopItem:(id)arg0 backItem:(id)arg1 ;
-(void)_updateContentForTopItem:(id)arg0 backItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateContentPriorities;
-(void)_updateLegacyLayout:(id)arg0 forNavigationItem:(id)arg1 ;
-(void)_updateModernLayout:(id)arg0 forNavigationItem:(id)arg1 compact:(BOOL)arg2 ;
-(void)_updatePromptViewAndActuallyHide:(BOOL)arg0 ;
-(void)_updateTitleViewWithLargeTitle:(BOOL)arg0 ;
-(void)_updateWithCompletion:(id)arg0 ;
-(void)_upgradeAppearanceAPIForItemIfNecessary:(id)arg0 ;
-(void)animateForSearchPresentation:(BOOL)arg0 ;
-(void)appearance:(id)arg0 categoriesChanged:(NSInteger)arg1 ;
-(void)barDidAddSubview:(id)arg0 ;
-(void)barDidMoveToWindow;
-(void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)changeAppearance;
-(void)changeLayout;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)layoutSubviews;
-(void)navigationBarContentViewDidChangeDesiredHeight:(id)arg0 ;
-(void)navigationBarContentViewDidTriggerBackAction:(id)arg0 fromBackButtonItem:(id)arg1 ;
-(void)navigationBarInvalidatedResolvedLayoutMargins;
-(void)navigationControllerRefreshControlHostDidUpdateLayout:(id)arg0 ;
-(void)navigationItem:(id)arg0 appearance:(id)arg1 categoriesChanged:(NSInteger)arg2 ;
-(void)navigationItemUpdatedBackButtonContent:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedBackgroundAppearance:(id)arg0 ;
-(void)navigationItemUpdatedBottomPalette:(id)arg0 oldPalette:(id)arg1 ;
-(void)navigationItemUpdatedCanvasView:(id)arg0 ;
-(void)navigationItemUpdatedContentLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedLargeTitleContent:(id)arg0 ;
-(void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg0 ;
-(void)navigationItemUpdatedLeftBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedPromptContent:(id)arg0 ;
-(void)navigationItemUpdatedRightBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedScrollEdgeProgress:(id)arg0 ;
-(void)navigationItemUpdatedSearchController:(id)arg0 oldSearchController:(id)arg1 ;
-(void)navigationItemUpdatedTitleContent:(id)arg0 animated:(BOOL)arg1 ;
-(void)popAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)prepare;
-(void)prepareForPop;
-(void)prepareForPush;
-(void)prepareForStackChange;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)provideViewsForContents:(id)arg0 topItem:(id)arg1 backItem:(id)arg2 ;
-(void)pushAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)recordBarSize:(struct CGSize )arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)setAppearanceAPIVersion:(NSInteger)arg0 ;
-(void)setBackgroundAlpha:(CGFloat)arg0 ;
-(void)setForceScrollEdgeAppearance:(BOOL)arg0 ;
-(void)setNeedsStaticNavBarButtonUpdate;
-(void)setRefreshControlHost:(id)arg0 ;
-(void)setShouldFadeStaticNavBarButton:(BOOL)arg0 ;
-(void)setStaticNavBarButtonItem:(id)arg0 ;
-(void)setStaticNavBarButtonLingers:(BOOL)arg0 ;
-(void)setTitleAlpha:(CGFloat)arg0 ;
-(void)setUseInlineBackgroundHeightWhenLarge:(BOOL)arg0 ;
-(void)stackDidChangeFrom:(id)arg0 ;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg0 ;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;


@end


#endif