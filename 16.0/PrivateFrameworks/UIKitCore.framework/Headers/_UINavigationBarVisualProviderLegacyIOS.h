// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARVISUALPROVIDERLEGACYIOS_H
#define _UINAVIGATIONBARVISUALPROVIDERLEGACYIOS_H

@class UINavigationBarVisualProvider, NSArray, NSMutableArray, NSLayoutConstraint, NSString;
@protocol _UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate, UIViewControllerTransitionCoordinator;


#import "_UIBarBackground.h"
#import "_UIBarBackgroundLayoutLegacy.h"
#import "UIView.h"
#import "UIImageView.h"
#import "_UINavBarPrompt.h"
#import "_UINavigationBarGestureHandler.h"
#import "_UINavigationBarLegacyContentView.h"
#import "UILayoutGuide.h"
#import "UIFocusContainerGuide.h"

@interface _UINavigationBarVisualProviderLegacyIOS : UINavigationBarVisualProvider <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate>

 {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIImageView *_backIndicatorView;
    _UINavBarPrompt *_prompt;
    _UINavigationBarGestureHandler *_gestureHandler;
    NSMutableArray *_slideTransitionClippingViews;
    id<UIViewControllerTransitionCoordinator> *_transitionCoordinator;
    _UINavigationBarLegacyContentView *_layoutView;
    UIView *_contentView;
    UILayoutGuide *_userContentGuide;
    NSLayoutConstraint *_userContentGuideLeading;
    NSLayoutConstraint *_userContentGuideTrailing;
    UIFocusContainerGuide *_contentFocusContainerGuide;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shim_34415965;
-(BOOL)_shim_disableBlurTinting;
-(BOOL)_shim_throwConstraintExceptions;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg0 ;
-(BOOL)_shouldPopForTouchAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_shouldShowBackButtonForNavigationItem:(id)arg0 ;
-(BOOL)_supportsCanvasView;
-(BOOL)_suppressBackIndicator;
-(BOOL)canHandleStatusBarTouchAtPoint:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 defaultAnswer:(id)arg1 ;
-(BOOL)shouldGestureHandler:(id)arg0 recognizedPopAtLocation:(struct CGPoint )arg1 ;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(CGFloat)_backIndicatorClippingMargin;
-(CGFloat)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg0 titleView:(id)arg1 withBackButtonWidth:(CGFloat)arg2 ;
-(CGFloat)_effectiveBackIndicatorLeftMargin;
-(CGFloat)_shim_backgroundHeight;
-(CGFloat)_shim_shadowAlpha;
-(NSInteger)_shim_backdropStyle;
-(NSInteger)statusBarStyle;
-(NSUInteger)_subviewIndexAboveBackground;
-(id)_backButtonForBackItem:(id)arg0 topItem:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_defaultTitleFontForItem:(id)arg0 fittingHeight:(CGFloat)arg1 withScaleAdjustment:(CGFloat)arg2 ;
-(id)_effectiveBackIndicatorImage;
-(id)_effectiveBackIndicatorTransitionMaskImage;
-(id)_navigationItemAtPoint:(struct CGPoint )arg0 ;
-(id)_shim_backIndicatorView;
-(id)_shim_compatibilityBackgroundView;
-(id)_shim_contentView;
-(id)_shim_customHitTest:(struct CGPoint )arg0 forView:(id)arg1 ;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg0 ;
-(id)_shim_layoutView;
-(id)_shim_promptText;
-(id)_shim_userContentGuide;
-(id)_timingFunctionForAnimationInView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)backButtonViewAtPoint:(struct CGPoint )arg0 ;
-(id)preferredFocusedView;
-(struct CGPoint )frameOriginForStatusBarLocatedAt:(struct CGPoint )arg0 ;
-(struct CGRect )_contentViewFrameInBounds:(struct CGRect )arg0 style:(id)arg1 ;
-(struct CGSize )_preferredContentSizeForItem:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_completeNavigationTransitionWithIncomingViews:(id)arg0 outgoingViews:(id)arg1 transitionAssistant:(id)arg2 completion:(id)arg3 ;
-(void)_completeTopItemTransitionWithIncomingViews:(id)arg0 outgoingViews:(id)arg1 previousLeftViews:(id)arg2 previousRightViews:(id)arg3 enableUserInteraction:(id)arg4 transitionAssistant:(id)arg5 ;
-(void)_getLeftMargin:(*CGFloat)arg0 rightMargin:(*CGFloat)arg1 forNavigationItem:(id)arg2 showingBackButton:(BOOL)arg3 visualStyle:(id)arg4 ;
-(void)_getTitleViewFrame:(struct CGRect *)arg0 leftViewFrames:(id)arg1 rightViewFrames:(id)arg2 forPreviousItem:(id)arg3 item:(id)arg4 ;
-(void)_getTitleViewFrame:(struct CGRect *)arg0 leftViewFrames:(id)arg1 rightViewFrames:(id)arg2 forPreviousItem:(id)arg3 item:(id)arg4 returnedIdealWidthOfTextContent:(*CGFloat)arg5 availableLayoutWidthForTextContent:(*CGFloat)arg6 idealBackButtonWidth:(*CGFloat)arg7 ;
-(void)_handleMouseDownAtPoint:(struct CGPoint )arg0 ;
-(void)_handleMouseUpAtPoint:(struct CGPoint )arg0 ;
-(void)_layoutInBounds:(struct CGRect )arg0 withVisualStyle:(id)arg1 ;
-(void)_layoutSubviewsFromContentView;
-(void)_popForTouchAtPoint:(struct CGPoint )arg0 ;
-(void)_setUpContentFocusContainerGuide;
-(void)_setViewsAnimated:(BOOL)arg0 forTopNavigationItem:(id)arg1 backNavigationItem:(id)arg2 previousTopItem:(id)arg3 ;
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
-(void)_startPopAnimationFromOldBackItem:(id)arg0 oldTopItem:(id)arg1 newBackItem:(id)arg2 newTopItem:(id)arg3 withTransitionAssistant:(id)arg4 completion:(id)arg5 ;
-(void)_startPushAnimationFromOldBackItem:(id)arg0 oldTopItem:(id)arg1 newBackItem:(id)arg2 newTopItem:(id)arg3 withTransitionAssistant:(id)arg4 completion:(id)arg5 ;
-(void)_updateBackIndicatorImage;
-(void)_updateBackIndicatorViewTintColor;
-(void)_updateBackground;
-(void)_wrapView:(id)arg0 inClippingViewWithLeftBoundary:(CGFloat)arg1 rightBoundary:(CGFloat)arg2 leftMaskImage:(id)arg3 leftMaskIsChevron:(BOOL)arg4 rightMaskImage:(id)arg5 ;
-(void)barSizeChanged;
-(void)changeAppearance;
-(void)gestureHandler:(id)arg0 recognizedPopAtLocation:(struct CGPoint )arg1 ;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)popAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)prepare;
-(void)prepareForPop;
-(void)prepareForPush;
-(void)provideViewsForContents:(id)arg0 topItem:(id)arg1 backItem:(id)arg2 ;
-(void)pushAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)setBackButtonVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setupTopNavigationItem;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;
-(void)updateTopNavigationItemAnimated:(BOOL)arg0 ;
-(void)updateTopNavigationItemTitleView;


@end


#endif