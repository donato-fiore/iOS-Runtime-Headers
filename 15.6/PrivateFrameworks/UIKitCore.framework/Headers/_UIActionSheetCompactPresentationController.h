// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIONSHEETCOMPACTPRESENTATIONCONTROLLER_H
#define _UIACTIONSHEETCOMPACTPRESENTATIONCONTROLLER_H

@class NSString, UIView<UIActionSheetPresentationControllerDismissActionView>;
@protocol _UIActionSheetCompactPresentationControllerDelegate, UIActionSheetPresentationControllerVisualStyle;


#import "UIPresentationController.h"
#import "_UIAnimationCoordinator.h"
#import "_UIDimmingKnockoutBackdropView.h"
#import "UIView.h"
#import "UITapGestureRecognizer.h"
#import "UILongPressGestureRecognizer.h"

@interface _UIActionSheetCompactPresentationController : UIPresentationController

@property (weak, nonatomic) NSObject<_UIActionSheetCompactPresentationControllerDelegate> *actionSheetDelegate; // ivar: _actionSheetDelegate
@property (retain, nonatomic) _UIAnimationCoordinator *animationCoordinator; // ivar: _animationCoordinator
@property (nonatomic) BOOL avoidsKeyboardDisabled; // ivar: _avoidsKeyboardDisabled
@property (retain, nonatomic) _UIDimmingKnockoutBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (retain, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer; // ivar: _dimmingViewDismissTapGestureRecognizer
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;
@property (retain, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView; // ivar: _dismissActionView
@property (retain, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer; // ivar: _dismissActionViewGestureRecognizer
@property (nonatomic) BOOL hasPendingAnimatedLayout; // ivar: _hasPendingAnimatedLayout
@property (nonatomic) CGFloat pseudoAlertPreferredTop; // ivar: _pseudoAlertPreferredTop
@property (nonatomic) BOOL shouldAdoptPresentedAppearance; // ivar: _shouldAdoptPresentedAppearance
@property (retain, nonatomic) NSObject<UIActionSheetPresentationControllerVisualStyle> *visualStyle; // ivar: _visualStyle


-(BOOL)_shouldDisableAvoidsKeyboard;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(BOOL)shouldPresentInFullscreen;
-(CGFloat)_resizeAnimationDuration;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 visualStyle:(id)arg2 ;
-(struct ? )_currentLayoutGeometry;
-(struct CGRect )_frameOfPresentedViewControllerViewInSuperview;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(struct CGSize )_minimumSizeForDismissButton;
-(struct CGSize )preferredContentSize;
-(struct UIEdgeInsets )_baseContentInsetsWithLeftMargin:(*CGFloat)arg0 rightMargin:(*CGFloat)arg1 ;
-(void)_applyVisualAffordancesToViews;
-(void)_dismiss;
-(void)_handleDismiss:(id)arg0 ;
-(void)_keyboardChanged:(id)arg0 ;
-(void)_layoutViews;
-(void)_subscribeToKeyboardNotifications;
-(void)_transitionToPresentationController:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_unsubscribeFromKeyboardNotifications;
-(void)_updateForKeyboardStartFrame:(struct CGRect )arg0 endFrame:(struct CGRect )arg1 duration:(CGFloat)arg2 curve:(NSInteger)arg3 ;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg0 ;
-(void)beginPseudoAlertPresentationMode;
-(void)dealloc;
-(void)dismissalTransitionWillBegin;
-(void)endPseudoAlertPresentationMode;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif