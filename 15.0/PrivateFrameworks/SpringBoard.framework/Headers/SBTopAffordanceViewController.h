// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTOPAFFORDANCEVIEWCONTROLLER_H
#define SBTOPAFFORDANCEVIEWCONTROLLER_H

@class UIViewController, SBFHomeGrabberSettings, NSMutableSet, NSLayoutConstraint, UIView, UIImageView, UILabel, SBFFluidBehaviorSettings, NSString, MTMaterialView, BSSpringAnimationSettings;
@protocol PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, SBTransientUITapToDismissParticipant, SBTransientUITapToUnhideParticipant, SBTransientUIIndirectPanToDismissParticipant, SBTopAffordanceViewControllerDelegate;


#import "SBAppSwitcherSettings.h"
#import "SBAttentionAwarenessClient.h"
#import "SBTopAffordanceButton.h"
#import "SBTopAffordanceDotsView.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBTopAffordanceViewController : UIViewController <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, SBTransientUITapToDismissParticipant, SBTransientUITapToUnhideParticipant, SBTransientUIIndirectPanToDismissParticipant>

 {
    BOOL _isSystemPointerInteractionEnabled;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    NSInteger _touchState;
    NSInteger _presence;
    NSUInteger _lastActivatingToken;
    NSUInteger _lastInitialHideToken;
    NSMutableSet *_hiddenOverrides;
    NSUInteger _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    BOOL _isAnimating;
    NSLayoutConstraint *_dotsViewCenterXConstraint;
    NSLayoutConstraint *_dotsViewCenterYConstraint;
    UIView *_pillButtonsView;
    NSLayoutConstraint *_pillButtonsViewWidthConstraint;
    NSLayoutConstraint *_fullScreenButtonCenterXConstraint;
    NSLayoutConstraint *_splitViewButtonCenterXConstraint;
    NSLayoutConstraint *_slideOverButtonCenterXConstraint;
    NSLayoutConstraint *_centerWindowButtonCenterXConstraint;
    NSLayoutConstraint *_splitViewLeftButtonCenterXConstraint;
    NSLayoutConstraint *_splitViewRightButtonCenterXConstraint;
    NSLayoutConstraint *_dividerViewHeightConstraint;
    UIView *_pillMessageView;
    UIImageView *_messageImageView;
    UILabel *_messageTitleLabel;
    UILabel *_messageSubtitleLabel;
    SBFFluidBehaviorSettings *_expandAnimationSettings;
    SBFFluidBehaviorSettings *_collapseAnimationSettings;
    SBFFluidBehaviorSettings *_fastHideSplitViewButtonAnimationSettings;
    SBFFluidBehaviorSettings *_fastHideCenterWindowButtonAnimationSettings;
    NSInteger _animationCount;
}


@property (nonatomic) CGFloat additionalTopInset; // ivar: _additionalTopInset
@property (nonatomic) BOOL autoHides; // ivar: _autoHides
@property (readonly, nonatomic) SBTopAffordanceButton *centerWindowButton; // ivar: _centerWindowButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTopAffordanceViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *dividerView; // ivar: _dividerView
@property (readonly, nonatomic) SBTopAffordanceDotsView *dotsView; // ivar: _dotsView
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) SBTopAffordanceButton *fullScreenButton; // ivar: _fullScreenButton
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) UIView *pillBackgroundContainerView; // ivar: _pillBackgroundContainerView
@property (readonly, nonatomic) MTMaterialView *pillBackgroundView; // ivar: _pillBackgroundView
@property (readonly, nonatomic) UIView *pillContentsView; // ivar: _pillContentsView
@property (readonly, nonatomic) UIView *pillShadowView; // ivar: _pillShadowView
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly, nonatomic) SBTopAffordanceButton *slideOverButton; // ivar: _slideOverButton
@property (readonly, nonatomic) SBTopAffordanceButton *splitViewButton; // ivar: _splitViewButton
@property (readonly, nonatomic) SBTopAffordanceButton *splitViewLeftButton; // ivar: _splitViewLeftButton
@property (readonly, nonatomic) SBTopAffordanceButton *splitViewRightButton; // ivar: _splitViewRightButton
@property (retain, nonatomic) BSSpringAnimationSettings *styleSettings; // ivar: _styleSettings
@property (readonly) Class superclass;
@property (nonatomic) NSInteger topAffordanceMode; // ivar: _topAffordanceMode


+(CGFloat)collapsedHitTestWidth;
-(BOOL)_applicationIsInOrCanMoveToSplitViewFromLayoutRole:(NSInteger)arg0 ;
-(BOOL)_applicationSupportsMedusa;
-(BOOL)_dismissIfNeededWithLocation:(struct CGPoint )arg0 window:(id)arg1 ;
-(BOOL)_hasLoadedPillSubviews;
-(BOOL)_primaryApplicationSupportsMedusa;
-(BOOL)_sceneSupportsCenterWindow;
-(BOOL)isHidden;
-(BOOL)shouldAutorotate;
-(BOOL)transientUIHandledTouch:(id)arg0 withSystemGestureRecognizer:(id)arg1 ;
-(NSInteger)_calculatePresence;
-(id)_animationSettingsForTopAffordanceMode:(NSInteger)arg0 ;
-(id)_animationSettingsForTransitionFromPresence:(NSInteger)arg0 toPresence:(NSInteger)arg1 ;
-(id)_makeDividerView;
-(id)_makeDotsView;
-(id)_makePillBackgroundContainerView;
-(id)_makePillBackgroundViewCaptureOnly:(BOOL)arg0 ;
-(id)_makePillContentsView;
-(id)_makePillShadowView;
-(id)initWithDeviceApplicationSceneHandle:(id)arg0 ;
-(void)_animateWithSettings:(id)arg0 mode:(NSInteger)arg1 animations:(id)arg2 ;
-(void)_emitAnalyticsEventForMenuInteraction:(NSInteger)arg0 ;
-(void)_invalidateInitialAutoHideTime;
-(void)_loadPillBackgroundAndContentViews;
-(void)_loadPillButtonsView;
-(void)_loadPillMessageView;
-(void)_loadPillSubviewsIfNeeded;
-(void)_setSystemPointerInteractionEnabled:(BOOL)arg0 ;
-(void)_topAffordanceButtonTapped:(id)arg0 ;
-(void)_unhideIfAutoHidden;
-(void)_updateChooseSplitButtonsForTopAffordanceMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateDotsForTopAffordanceMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateIdleTouchAwarenessClient;
-(void)_updatePillContentsIfNeededForCurrentTopAffordanceMode:(NSInteger)arg0 previousTopAffordanceMode:(NSInteger)arg1 ;
-(void)_updatePillForTopAffordanceMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updatePresence;
-(void)_updatePresence:(NSInteger)arg0 withAnimationSettings:(id)arg1 ;
-(void)_updatePrimaryButtonsForTopAffordanceMode:(NSInteger)arg0 selectedButtonType:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateStyleForOverrideUserInterfaceStyle;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(CGFloat)arg1 forConfigurationGeneration:(NSUInteger)arg2 withAssociatedObject:(id)arg3 ;
-(void)clientDidResetForUserAttention:(id)arg0 ;
-(void)configureButtonsWithLayoutRole:(NSInteger)arg0 spaceConfiguration:(NSInteger)arg1 floatingConfiguration:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 duration:(CGFloat)arg4 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)loadView;
-(void)presentButtonsWithSelectedButtonType:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)presentTransientMessageWithImage:(id)arg0 title:(id)arg1 subtitle:(id)arg2 duration:(CGFloat)arg3 animated:(BOOL)arg4 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 forReason:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOverrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transientUI:(id)arg0 wasIndirectPannedToDismissFromGestureRecognizer:(id)arg1 ;
-(void)transientUI:(id)arg0 wasTappedToUnhideFromGestureRecognizer:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif