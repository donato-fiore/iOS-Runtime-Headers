// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISCENEHOSTINGVIEWCONTROLLER_H
#define AFUISCENEHOSTINGVIEWCONTROLLER_H

@class UIViewController, NSString, FBScene, UIView;
@protocol AFUISceneControllerDelegate, BSInvalidatable, UIScenePresenter;


#import "AFUISceneConfiguration.h"
#import "AFUISceneController.h"

@interface AFUISceneHostingViewController : UIViewController <AFUISceneControllerDelegate>



@property (readonly, nonatomic) AFUISceneConfiguration *configuration; // ivar: _configuration
@property (nonatomic) CGRect currentFrame; // ivar: _currentFrame
@property (nonatomic) NSInteger currentOrientation; // ivar: _currentOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger deferralMode; // ivar: _deferralMode
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets effectiveSafeAreaInsets; // ivar: _effectiveSafeAreaInsets
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInFluidDismissal) BOOL inFluidDismissal; // ivar: _inFluidDismissal
@property (nonatomic) BOOL pauseDeferrals; // ivar: _pauseDeferrals
@property (retain, nonatomic) NSObject<BSInvalidatable> *predicateInvalidationHandler; // ivar: _predicateInvalidationHandler
@property (retain, nonatomic) NSObject<UIScenePresenter> *presentation; // ivar: _presentation
@property (nonatomic) BOOL safeAreaInsetsAreSuspended; // ivar: _safeAreaInsetsAreSuspended
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) AFUISceneController *sceneController; // ivar: _sceneController
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets suspendedSafeAreaInsets; // ivar: _suspendedSafeAreaInsets
@property (retain, nonatomic) UIView *windowSceneHostingView; // ivar: _windowSceneHostingView


-(BOOL)_hasScene;
-(BOOL)_shouldDeferHIDEventsForMode;
-(BOOL)isDeferringHIDEvents;
-(BOOL)isHostingScene;
-(BOOL)isSceneActive;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg0 ;
-(void)_commonInit;
-(void)_handleInvalidationForReason:(NSUInteger)arg0 explanation:(id)arg1 ;
-(void)_handleSceneDidActivateWithIdentifier:(id)arg0 ;
-(void)_transitionContentsWithView:(id)arg0 forContentState:(NSInteger)arg1 ;
-(void)_updateDeferralChainWithWindow:(id)arg0 ;
-(void)_updateSceneSettingsToSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 withAnimationSettings:(id)arg2 animationFence:(id)arg3 ;
-(void)_updateSceneUIApplicationSceneSettingsWithBlock:(id)arg0 ;
-(void)deactivateScene;
-(void)invalidateAndPauseDeferringHIDEvents;
-(void)invalidateSceneForReason:(NSUInteger)arg0 explanation:(id)arg1 ;
-(void)reactivateScene;
-(void)sceneController:(id)arg0 sceneContentStateDidChange:(id)arg1 ;
-(void)sceneController:(id)arg0 sceneDidUpdateClientSettings:(id)arg1 ;
-(void)sceneController:(id)arg0 sceneWasInvalidated:(id)arg1 forReason:(NSUInteger)arg2 ;
-(void)startDeferringHIDEventsIfNeeded;
-(void)startHostingSceneForConfiguration:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)stopHostingScene;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(NSInteger)arg0 ;
-(void)updateSceneDeactivationReasonMask:(NSUInteger)arg0 ;
-(void)updateSceneWithConfiguration:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif