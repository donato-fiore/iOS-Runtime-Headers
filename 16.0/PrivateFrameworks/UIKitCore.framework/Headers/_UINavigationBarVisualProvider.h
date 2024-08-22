// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARVISUALPROVIDER_H
#define _UINAVIGATIONBARVISUALPROVIDER_H

@class NSString;
@protocol _UIBarAppearanceChangeObserver;

#import <Foundation/Foundation.h>

#import "UINavigationItem.h"
#import "UINavigationBar.h"
#import "_UINavigationControllerRefreshControlHost.h"
#import "_UINavigationBarItemStack.h"
#import "UIBarButtonItem.h"

@interface _UINavigationBarVisualProvider : NSObject {
    UINavigationItem *_itemForMeasuring;
}


@property (readonly, nonatomic, getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange) BOOL animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (nonatomic) NSInteger appearanceAPIVersion;
@property (readonly, nonatomic) NSObject<_UIBarAppearanceChangeObserver> *appearanceObserver;
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (nonatomic) CGFloat backgroundAlpha;
@property (readonly, nonatomic, getter=isContentViewHidden) BOOL contentViewHidden;
@property (readonly, nonatomic) NSInteger currentContentSize;
@property (nonatomic) BOOL forceScrollEdgeAppearance;
@property (readonly, nonatomic) CGFloat navItemContentLayoutGuideAnimationDistance;
@property (readonly, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (readonly, nonatomic) BOOL scrollEdgeAppearanceHasChromelessBehavior;
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;
@property (retain, nonatomic) _UINavigationBarItemStack *stack; // ivar: _stack
@property (retain, nonatomic) UIBarButtonItem *staticNavBarButtonItem;
@property (nonatomic) BOOL staticNavBarButtonLingers;
@property (nonatomic) CGFloat titleAlpha;
@property (nonatomic) BOOL useInlineBackgroundHeightWhenLarge;
@property (readonly, nonatomic) BOOL wantsLargeTitleDisplayed;


+(BOOL)shouldDecodeSubviews;
-(BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_shim_34415965;
-(BOOL)_shim_disableBlurTinting;
-(BOOL)_shim_throwConstraintExceptions;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg0 ;
-(BOOL)canHandleStatusBarTouchAtPoint:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 defaultAnswer:(id)arg1 ;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(BOOL)supportsRefreshControlHosting;
-(BOOL)topItemHasVariableHeight;
-(BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(CGFloat)arg0 ;
-(CGFloat)_shim_backgroundHeight;
-(CGFloat)_shim_shadowAlpha;
-(CGFloat)heightForRestoringFromCancelledTransition;
-(NSInteger)_shim_backdropStyle;
-(NSInteger)statusBarStyle;
-(id)_accessibility_HUDItemForPoint:(struct CGPoint )arg0 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint )arg0 ;
-(id)_shim_backIndicatorView;
-(id)_shim_compatibilityBackgroundView;
-(id)_shim_contentView;
-(id)_shim_customHitTest:(struct CGPoint )arg0 forView:(id)arg1 ;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg0 ;
-(id)_shim_layoutView;
-(id)_shim_promptText;
-(id)_shim_userContentGuide;
-(id)contentViewVisualProvider;
-(id)description;
-(id)initWithNavigationBar:(id)arg0 ;
-(id)preferredFocusedView;
-(id)restingHeights;
-(id)traitCollectionForChild:(id)arg0 baseTraitCollection:(id)arg1 ;
-(struct ? )layoutHeightsFittingWidth:(CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct NSDirectionalEdgeInsets )resolvedLargeTitleMargins;
-(struct NSDirectionalEdgeInsets )resolvedSearchBarMargins;
-(void)_beginRenaming;
-(void)_endRenaming;
-(void)_installContentClippingView:(id)arg0 ;
-(void)_refreshBackButtonMenu;
-(void)_removeContentClippingView;
-(void)_shim_30244716;
-(void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint )arg0 ;
-(void)_shim_pressBackIndicator:(BOOL)arg0 initialPress:(BOOL)arg1 ;
-(void)_shim_setCustomBackgroundView:(id)arg0 ;
-(void)_shim_setDisableBlurTinting:(BOOL)arg0 ;
-(void)_shim_setPromptText:(id)arg0 animated:(BOOL)arg1 ;
-(void)_shim_setShadowAlpha:(CGFloat)arg0 ;
-(void)_shim_setUseContentView:(BOOL)arg0 ;
-(void)_shim_touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)_shim_touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_shim_touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)_shim_touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_shim_updateBackIndicator;
-(void)_shim_updateBackgroundViewIgnoringFlag;
-(void)_shim_updateUserContentGuideForTopItem:(id)arg0 backItem:(id)arg1 ;
-(void)animateForSearchPresentation:(BOOL)arg0 ;
-(void)appendToDescription:(id)arg0 ;
-(void)barDidAddSubview:(id)arg0 ;
-(void)barDidMoveToWindow;
-(void)barSizeChanged;
-(void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)changeAppearance;
-(void)changeLayout;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)popAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)prepare;
-(void)prepareForPop;
-(void)prepareForPush;
-(void)prepareForStackChange;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)presentSearchWithTransitionCoordinator:(id)arg0 ;
-(void)provideViewsForContents:(id)arg0 topItem:(id)arg1 backItem:(id)arg2 ;
-(void)pushAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)recordBarSize:(struct CGSize )arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)setBackButtonVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setNeedsStaticNavBarButtonUpdate;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setupTopNavigationItem;
-(void)stackDidChangeFrom:(id)arg0 ;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg0 ;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;
-(void)updateConstraints;
-(void)updateSearchBarForPlacementChangeIfApplicable;
-(void)updateTopNavigationItemAnimated:(BOOL)arg0 ;
-(void)updateTopNavigationItemTitleView;


@end


#endif