// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISIRICOMPACTVIEW_H
#define AFUISIRICOMPACTVIEW_H

@class UIView, SUICOrbView, UILongPressGestureRecognizer, SiriUIContentButton, SiriUIBackgroundBlurViewController, NSString;
@protocol UIGestureRecognizerDelegate, SiriUIBackgroundBlurViewControllerDelegate, AFUIPasscodeContainerViewDelegate, AFUISiriContent, SUICOrbViewControlling, AFUISiriContentDelegate, AFUISiriCompactViewDelegate;


#import "AFUISiriCompactDimmingView.h"
#import "AFUISiriEyesFreeView.h"
#import "AFUIPasscodeContainerView.h"

@interface AFUISiriCompactView : UIView <UIGestureRecognizerDelegate, SiriUIBackgroundBlurViewControllerDelegate, AFUIPasscodeContainerViewDelegate, AFUISiriContent, SUICOrbViewControlling>

 {
    UIView *_orbViewContainer;
    SUICOrbView *_orbView;
    UIView *_touchInputView;
    UIView *_voiceActivationMaskView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    AFUISiriCompactDimmingView *_dimmingBackdropView;
    id<AFUISiriContentDelegate> *_siriContentDelegate;
    id<AFUISiriCompactViewDelegate> *_compactViewDelegate;
    CGRect _dockFrame;
    CGRect _orbViewContainerFrame;
    SiriUIContentButton *_reportBugButton;
    UIView *_siriXIndicator;
    AFUISiriEyesFreeView *_eyesFreeView;
    UIView *_blurringAndLockContainer;
    SiriUIBackgroundBlurViewController *_fullScreenBlurViewController;
    AFUIPasscodeContainerView *_lockContainerView;
    BOOL _remoteContentViewHidden;
    BOOL _lockViewHidden;
    BOOL _auxiliaryViewsHidden;
    BOOL _inShowUnlockViewAnimation;
    BOOL _inHideUnlockViewAnimation;
    BOOL _inFluidDismissal;
    BOOL _ignoreSiriSessionUpdates;
}


@property (readonly, nonatomic, getter=isBlurViewVisible) BOOL blurViewVisible; // ivar: _blurViewVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *foregroundContainerView; // ivar: _foregroundContainerView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UIView *remoteContentView; // ivar: _remoteContentView
@property (readonly, nonatomic, getter=shouldRequestStatusBar) BOOL requestStatusBar;
@property (nonatomic) NSInteger siriSessionState; // ivar: _siriSessionState
@property (readonly) Class superclass;


+(void)_animateView:(id)arg0 fromYPosition:(CGFloat)arg1 toYPosition:(CGFloat)arg2 fade:(NSInteger)arg3 completion:(id)arg4 ;
-(BOOL)_shouldShowBugReportButton;
-(BOOL)passcodeView:(id)arg0 attemptUnlockWithPassword:(id)arg1 ;
-(CGFloat)_originXForOrbContainer;
-(id)initWithFrame:(struct CGRect )arg0 compactViewDelegate:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 eyesFreeMode:(NSInteger)arg1 ;
-(struct CGRect )_lockViewFrame;
-(struct CGRect )_orbViewContainerFrame;
-(void)_animateLockViewIsAnimatingIn:(BOOL)arg0 completion:(id)arg1 ;
-(void)_constructAndAddBugReportButtonWithImage:(id)arg0 ;
-(void)_constructAndAddSiriXIndicator;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id)arg0 ;
-(void)_micButtonHeld:(id)arg0 ;
-(void)_micButtonTapped:(id)arg0 ;
-(void)_reportBugButtonLongPressed;
-(void)_reportBugButtonTapped;
-(void)_setUpEyesFreePresentation:(NSInteger)arg0 ;
-(void)_setupBugReportButtonIfNeeded;
-(void)_setupContentViews;
-(void)_setupVoiceActivationMaskView;
-(void)animateOrbViewDismissalWithCompletion:(id)arg0 ;
-(void)animateOrbViewToOffWithCompletion:(id)arg0 ;
-(void)backgroundBlurViewController:(id)arg0 didSetBlurVisibilityTo:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)passcodeView:(id)arg0 animateShowPasscodeWithCompletionHandler:(id)arg1 ;
-(void)passcodeView:(id)arg0 hideLockViewWithResult:(NSInteger)arg1 unlockCompletionHandler:(id)arg2 ;
-(void)requestBlurVisible:(BOOL)arg0 reason:(NSInteger)arg1 fence:(id)arg2 ;
-(void)setAuxiliaryViewsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setContentViewsAlpha:(CGFloat)arg0 ;
-(void)setDockFrame:(struct CGRect )arg0 ;
-(void)setFullScreenDimmingLayerVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setInFluidDismissal:(BOOL)arg0 ;
-(void)setInputPowerLevel:(float)arg0 ;
-(void)setOutputPowerLevel:(float)arg0 ;
-(void)setRequestHandlingStatus:(NSUInteger)arg0 ;
-(void)setSiriContentDelegate:(id)arg0 ;
-(void)setVoiceActivationMaskViewVisible:(BOOL)arg0 ;
// -(void)showPasscodeUnlockWithStatusText:(id)arg0 subtitle:(id)arg1 completionHandler:(id)arg2 unlockCompletionHandler:(unk)arg3  ;


@end


#endif