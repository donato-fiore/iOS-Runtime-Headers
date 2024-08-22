// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISIRIVIEW_H
#define AFUISIRIVIEW_H

@class UIView, _UIBackdropView, SiriUIAudioRoutePickerButton, SiriUIHelpButton, SiriUIContentButton, SiriUIConfiguration, SiriUIVisualEffectView, UIImageView, UILabel, UIView<SiriUISiriStatusViewProtocol>, NSString;
@protocol SiriUISiriStatusViewDelegate, AFUIPasscodeContainerViewDelegate, AFUISiriContent, AFUISiriViewDataSource, AFUISiriViewDelegate;


#import "AFUIPasscodeContainerView.h"

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, AFUIPasscodeContainerViewDelegate, AFUISiriContent>

 {
    _UIBackdropView *_backdropView;
    BOOL _backdropViewVisible;
    UIEdgeInsets _suspendedSafeAreaInsets;
    BOOL _safeAreaInsetsSuspended;
    UIView *_dimmingAndLockContainer;
    UIView *_statusViewContainer;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIHelpButton *_helpButton;
    SiriUIContentButton *_reportBugButton;
    UIView *_voiceActivationMaskView;
    SiriUIConfiguration *_configuration;
    AFUIPasscodeContainerView *_lockContainerView;
    BOOL _inShowUnlockViewAnimation;
    BOOL _inHideUnlockViewAnimation;
    BOOL _remoteContentViewHidden;
    BOOL _lockViewHidden;
    BOOL _flamesViewDeferred;
    BOOL _helpButtonDeferred;
    BOOL _inFluidDismissal;
    BOOL _statusViewHidden;
    BOOL _flamesViewPaused;
    BOOL _keepStatusViewHidden;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
    UILabel *_assistantVersionLabel;
    SiriUIVisualEffectView *_assistantVersionVisualEffectView;
    _UIBackdropView *_backgroundBlurView;
    CGFloat _statusViewHeight;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
}


@property (readonly, nonatomic) _UIBackdropView *backgroundBlurView;
@property (weak, nonatomic) NSObject<AFUISiriViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUISiriViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (readonly, nonatomic) UIView *foregroundContainerView; // ivar: _foregroundContainerView
@property (readonly, nonatomic) UIView *foregroundView; // ivar: _foregroundView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UIView *remoteContentView; // ivar: _remoteContentView
@property (nonatomic) NSInteger siriSessionState; // ivar: _siriSessionState
@property (readonly, nonatomic) CGFloat statusViewHeight;
@property (readonly) Class superclass;


+(void)_animateView:(id)arg0 fromYPosition:(CGFloat)arg1 toYPosition:(CGFloat)arg2 fade:(NSInteger)arg3 completion:(id)arg4 ;
-(BOOL)_helpButtonIsVisible;
-(BOOL)_isTextInputEnabled;
-(BOOL)_reducesMotionEffects;
-(BOOL)_shouldIndicateHoldToTalkMode;
-(BOOL)_showsReportBugButton;
-(BOOL)_wantsBackdropView:(NSInteger)arg0 ;
-(BOOL)flamesViewPaused;
-(BOOL)passcodeView:(id)arg0 attemptUnlockWithPassword:(id)arg1 ;
-(CGFloat)_buttonInset;
-(float)audioLevelForSiriStatusView:(id)arg0 ;
-(id)dimBackdropSettings;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(struct CGRect )_lockViewFrame;
-(struct CGRect )_statusViewContainerFrame;
-(struct UIEdgeInsets )safeAreaInsets;
-(struct UIEdgeInsets )safeAreaInsetsForSiriStatusView:(id)arg0 ;
-(void)_animateButtonsHidden:(BOOL)arg0 ;
-(void)_animateLockViewIsAnimatingIn:(BOOL)arg0 completion:(id)arg1 ;
-(void)_audioRouteButtonTapped:(id)arg0 ;
-(void)_configureEyesFreeLogo;
-(void)_configureHelpButton;
-(void)_configureReportBugButtonWithHoldToTalkState:(BOOL)arg0 ;
-(void)_createAssistantVersionLabelIfNecessary;
-(void)_createReportBugButtonWithTemplateImage:(id)arg0 andConfigureWithHoldToTalkState:(BOOL)arg1 ;
-(void)_destroyAssistantVersionLabelIfNecessary;
-(void)_helpButtonTapped:(id)arg0 ;
-(void)_layoutReportBugButton;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id)arg0 ;
-(void)_placeRemoteContentView;
-(void)_preferencesDidChange:(id)arg0 ;
-(void)_reportBugButtonLongPressed;
-(void)_reportBugButtonTapped;
-(void)_setSafeAreaInsetsSuspended:(BOOL)arg0 ;
-(void)_setupButtonsIfNecessary;
-(void)_setupContentViews;
-(void)_setupVoiceActivationMaskView;
-(void)_updateControlsAppearance;
-(void)_updateSiriStatusViewForMode:(NSInteger)arg0 ;
-(void)cancelShowingPasscodeUnlock;
-(void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg0 ;
-(void)dealloc;
-(void)fadeOutCurrentAura;
-(void)layoutSubviews;
-(void)passcodeView:(id)arg0 animateShowPasscodeWithCompletionHandler:(id)arg1 ;
-(void)passcodeView:(id)arg0 hideLockViewWithResult:(NSInteger)arg1 unlockCompletionHandler:(id)arg2 ;
-(void)pulseHelpButton;
-(void)reloadData;
-(void)safeAreaInsetsDidChange;
-(void)setAudioRoutePickerBluetoothOn:(BOOL)arg0 ;
-(void)setBackdropShouldRasterize:(BOOL)arg0 ;
-(void)setBackdropVisible:(BOOL)arg0 ;
-(void)setBugReportingAvailable:(BOOL)arg0 ;
-(void)setContentViewsAlpha:(CGFloat)arg0 ;
-(void)setFlamesViewDeferred:(BOOL)arg0 ;
-(void)setFlamesViewPaused:(BOOL)arg0 ;
-(void)setHelpButtonDeferred:(BOOL)arg0 ;
-(void)setHelpButtonEmphasized:(BOOL)arg0 ;
-(void)setInFluidDismissal:(BOOL)arg0 ;
-(void)setInUITrackingMode:(BOOL)arg0 ;
-(void)setShowAudioRoutePicker:(BOOL)arg0 ;
-(void)setStatusViewHidden:(BOOL)arg0 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg0 ;
-(void)setVoiceActivationMaskViewVisible:(BOOL)arg0 ;
-(void)setupOrbIfNeeded;
// -(void)showPasscodeUnlockWithStatusText:(id)arg0 subtitle:(id)arg1 completionHandler:(id)arg2 unlockCompletionHandler:(unk)arg3  ;
-(void)siriDidActivateFromSource:(NSInteger)arg0 ;
-(void)siriStatusViewHoldDidBegin:(id)arg0 ;
-(void)siriStatusViewHoldDidEnd:(id)arg0 ;
-(void)siriStatusViewWasTapped:(id)arg0 ;
-(void)teardownStatusView;
-(void)updateForPercentageRevealed:(CGFloat)arg0 ;


@end


#endif