// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTOPAFFORDANCEVIEWCONTROLLER_H
#define SBTOPAFFORDANCEVIEWCONTROLLER_H

@class UIViewController, UIView, UIImageView, UILabel, SBFFluidBehaviorSettings, NSLayoutConstraint, UIAction, MTMaterialView, NSString, UIMenu, BSSpringAnimationSettings;
@protocol SBAffordancePresenceControllerDelegate, SBTopAffordanceDotsViewDelegate, SBTransientUITapToDismissParticipant, SBTransientUIIndirectPanToDismissParticipant, SBTopAffordanceViewControllerDelegate;


#import "SBAffordancePresenceController.h"
#import "SBTopAffordanceDotsView.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBTopAffordanceViewController : UIViewController <SBAffordancePresenceControllerDelegate, SBTopAffordanceDotsViewDelegate, SBTransientUITapToDismissParticipant, SBTransientUIIndirectPanToDismissParticipant>

 {
    BOOL _isSystemPointerInteractionEnabled;
    BOOL _isAnimating;
    BOOL _cachedIsChamoisWindowingUIEnabled;
    UIView *_pillMessageView;
    UIImageView *_messageImageView;
    UILabel *_messageTitleLabel;
    UILabel *_messageSubtitleLabel;
    SBFFluidBehaviorSettings *_expandAnimationSettings;
    SBFFluidBehaviorSettings *_collapseAnimationSettings;
    SBAffordancePresenceController *_affordancePresenceController;
    NSInteger _animationCount;
    NSLayoutConstraint *_pillContentsViewCenterYConstraint;
}


@property (readonly, nonatomic) UIAction *addToSetAction; // ivar: _addToSetAction
@property (nonatomic) CGFloat additionalTopInset; // ivar: _additionalTopInset
@property (nonatomic) BOOL autoHides; // ivar: _autoHides
@property (readonly, nonatomic) MTMaterialView *captureOnlyPillBackgroundView; // ivar: _captureOnlyPillBackgroundView
@property (readonly, nonatomic) UIAction *closeAction; // ivar: _closeAction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTopAffordanceViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBTopAffordanceDotsView *dotsView; // ivar: _dotsView
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) UIAction *fullScreenAction; // ivar: _fullScreenAction
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) UIAction *leftSplitAction; // ivar: _leftSplitAction
@property (readonly, nonatomic) UIAction *maximizationAction; // ivar: _maximizationAction
@property (readonly, nonatomic) UIMenu *menu; // ivar: _menu
@property (readonly, nonatomic) UIAction *moveToDisplayAction; // ivar: _moveToDisplayAction
@property (readonly, nonatomic) UIView *pillBackgroundContainerView; // ivar: _pillBackgroundContainerView
@property (readonly, nonatomic) MTMaterialView *pillBackgroundView; // ivar: _pillBackgroundView
@property (readonly, nonatomic) UIView *pillContentsView; // ivar: _pillContentsView
@property (readonly, nonatomic) UIView *pillShadowView; // ivar: _pillShadowView
@property (readonly, nonatomic) UIAction *removeFromSetAction; // ivar: _removeFromSetAction
@property (readonly, nonatomic) UIAction *rightSplitAction; // ivar: _rightSplitAction
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly, nonatomic) UIAction *slideOverAction; // ivar: _slideOverAction
@property (readonly, nonatomic) UIAction *splitViewAction; // ivar: _splitViewAction
@property (readonly, nonatomic) UIMenu *splitViewMenu; // ivar: _splitViewMenu
@property (retain, nonatomic) BSSpringAnimationSettings *styleSettings; // ivar: _styleSettings
@property (readonly) Class superclass;
@property (nonatomic) NSInteger topAffordanceMode; // ivar: _topAffordanceMode


+(CGFloat)collapsedHitTestWidth;
+(id)imageForAction:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;
+(id)landscapeImageNameForAction:(NSInteger)arg0 ;
+(id)portraitImageNameForAction:(NSInteger)arg0 ;
+(id)symbolConfiguration;
-(BOOL)_applicationIsInOrCanMoveToSplitViewFromLayoutRole:(NSInteger)arg0 ;
-(BOOL)_applicationSupportsAnyAffordanceActions;
-(BOOL)_applicationSupportsMedusa;
-(BOOL)_dismissIfNeededWithLocation:(struct CGPoint )arg0 window:(id)arg1 ;
-(BOOL)_hasLoadedPillSubviews;
-(BOOL)_isChamoisWindowingUIEnabled;
-(BOOL)_primaryApplicationSupportsMedusa;
-(BOOL)_shouldEnableMoveToDisplayMenu;
-(BOOL)isHidden;
-(BOOL)shouldAutorotate;
-(BOOL)transientUIHandledTouch:(id)arg0 withSystemGestureRecognizer:(id)arg1 ;
-(CGFloat)_defaultCenterYOffset;
-(id)_animationSettingsForTopAffordanceMode:(NSInteger)arg0 ;
-(id)_localizedMenuTitleForKey:(id)arg0 ;
-(id)_makeDotsView;
-(id)_makePillBackgroundContainerView;
-(id)_makePillBackgroundViewCaptureOnly:(BOOL)arg0 ;
-(id)_makePillContentsView;
-(id)_makePillShadowView;
-(id)initWithDeviceApplicationSceneHandle:(id)arg0 ;
-(void)_animateWithSettings:(id)arg0 mode:(NSInteger)arg1 animations:(id)arg2 ;
-(void)_emitAnalyticsEventForMenuInteraction:(NSInteger)arg0 ;
-(void)_loadPillBackgroundAndContentViews;
-(void)_loadPillMessageView;
-(void)_loadPillSubviewsIfNeeded;
-(void)_lockScreenUIDidLock:(id)arg0 ;
-(void)_setSystemPointerInteractionEnabled:(BOOL)arg0 ;
-(void)_updateDotsForTopAffordanceMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updatePillContentsIfNeededForCurrentTopAffordanceMode:(NSInteger)arg0 previousTopAffordanceMode:(NSInteger)arg1 ;
-(void)_updatePillForTopAffordanceMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateStyleForOverrideUserInterfaceStyle;
-(void)affordancePresenceController:(id)arg0 didChangeToPresence:(NSInteger)arg1 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)loadView;
-(void)presentTransientMessageWithImage:(id)arg0 title:(id)arg1 subtitle:(id)arg2 duration:(CGFloat)arg3 animated:(BOOL)arg4 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 forReason:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOverrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)topAffordanceDotsViewWillDismissMenu:(id)arg0 ;
-(void)topAffordanceDotsViewWillPresentMenu:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transientUI:(id)arg0 wasIndirectPannedToDismissFromGestureRecognizer:(id)arg1 ;
-(void)updateContextMenuWithLayoutRole:(NSInteger)arg0 spaceConfiguration:(NSInteger)arg1 floatingConfiguration:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 isZoomed:(BOOL)arg4 ;
-(void)viewDidLoad;


@end


#endif