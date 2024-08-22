// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINWORKSPACEAPPLICATIONSCENELAYOUTELEMENTVIEWCONTROLLER_H
#define SBMAINWORKSPACEAPPLICATIONSCENELAYOUTELEMENTVIEWCONTROLLER_H

@class NSMutableSet, UIView<SBApplicationSceneBackgroundView>, BSCornerRadiusConfiguration, UIView, NSString, UIDropInteraction;
@protocol SBDeviceApplicationSceneHandleObserver, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMainDisplaySceneLayoutElementViewControlling, SBMedusaDecoratedDeviceApplicationSceneViewControlling, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;


#import "SBAppContainerViewController.h"
#import "SBHomeGrabberView.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBMainWorkspaceApplicationSceneLayoutElementViewController : SBAppContainerViewController <SBDeviceApplicationSceneHandleObserver, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMainDisplaySceneLayoutElementViewControlling, SBMedusaDecoratedDeviceApplicationSceneViewControlling>

 {
    BOOL _nubViewHidden;
    BOOL _nubViewHighlighted;
    NSMutableSet *_maskDisplayCornersReasons;
}


@property (weak, nonatomic) NSObject<SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (nonatomic) CGFloat blurViewIconScale;
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (nonatomic) BOOL clipsToBounds; // ivar: _clipsToBounds
@property (readonly, nonatomic) NSInteger contentInterfaceOrientation;
@property (readonly, nonatomic) CGSize contentReferenceSize;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // ivar: _cornerRadiusConfiguration
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic) CGFloat darkenViewAlpha; // ivar: _darkenViewAlpha
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeGrabberDisplayMode;
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic, getter=isNubViewHidden) BOOL nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) BOOL nubViewHighlighted;
@property (readonly, nonatomic) NSInteger overrideStatusBarStyle;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext;
@property (readonly, nonatomic) UIView *sceneContentView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (copy, nonatomic) NSString *sceneMinificationFilter; // ivar: sceneMinificationFilter
@property (nonatomic) BOOL sceneRendersAsynchronously; // ivar: sceneRendersAsynchronously
@property (nonatomic) BOOL sceneResizesHostedContext; // ivar: sceneResizesHostedContext
@property (nonatomic) CGFloat shadowOffset; // ivar: _shadowOffset
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (readonly) Class superclass;


-(BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
-(BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(BOOL)_shouldDisplayLayoutElementBecomeActive;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)_overrideStatusBarOrientationGivenFallbackOrientation:(NSInteger)arg0 ;
-(NSInteger)bestHomeAffordanceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)styleOverridesToSuppress;
-(NSUInteger)supportedContentInterfaceOrientations;
-(id)_applicationSceneViewController;
-(id)_applicationSceneViewControllerForSceneHandle:(id)arg0 ;
-(id)_deviceApplicationSceneViewController;
-(id)_deviceApplicationSceneViewController:(id)arg0 ;
-(id)_medusaDecoratedVC;
-(id)_medusaDecoratedVC:(id)arg0 ;
-(id)containerViewForBlurContentView;
-(id)initWithDisplayIdentity:(id)arg0 ;
-(id)initialCornerRadiusConfiguration;
-(id)mainWorkspaceApplicationSceneLayoutElementViewController;
-(id)prepareForContentRotation;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg0 atLevel:(NSUInteger)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg0 nubViewHidden:(NSInteger)arg1 atLevel:(NSUInteger)arg2 ;
-(void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg0 ;
-(void)_configureViewController:(id)arg0 ;
-(void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg0 ;
-(void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
-(void)containerDidUpdateTraitsParticipant:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)prepareForReuse;
-(void)sceneHandle:(id)arg0 didChangeEffectiveForegroundness:(BOOL)arg1 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
// -(void)setLiveContentBlurEnabled:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;
-(void)setMaskDisplayCorners:(BOOL)arg0 forReason:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 alongsideContainerView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif