// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDHOSTEDAPPVIEWCONTROLLER_H
#define SBDASHBOARDHOSTEDAPPVIEWCONTROLLER_H

@class UIApplicationSceneDeactivationAssertion, SBFAuthenticationAssertion, NSString, UIApplicationSceneClientSettingsDiffInspector, NSSet;
@protocol SBAppViewControllerDelegate, SBSceneHandleObserver, SBMainDisplaySceneLayoutStatusBarViewDataSource, SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBApplicationHosting, BSInvalidatable, SBDashBoardHostedAppViewControllerDelegate, SBScenePlaceholderContentContext, SBApplicationSceneStatusBarDescribing;


#import "SBDashBoardViewExternalControllerBase.h"
#import "SBAppViewController.h"
#import "SBMainDisplaySceneLayoutStatusBarView.h"
#import "SBApplicationSceneView.h"
#import "SBApplicationSceneHandle.h"

@interface SBDashBoardHostedAppViewController : SBDashBoardViewExternalControllerBase <SBAppViewControllerDelegate, SBSceneHandleObserver, SBMainDisplaySceneLayoutStatusBarViewDataSource, SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBApplicationHosting, BSInvalidatable>

 {
    SBAppViewController *_appViewController;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBFAuthenticationAssertion *_authenticationAssertion;
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
    NSString *_cachedBasicPublicDescription;
    BOOL _invalidated;
    BOOL _wantsIdleTimerDisabled;
    SBMainDisplaySceneLayoutStatusBarView *_statusBarView;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
}


@property (retain, nonatomic) NSSet *actionsToDeliver;
@property (readonly, nonatomic) SBApplicationSceneView *appView;
@property (readonly, nonatomic) SBApplicationSceneHandle *applicationSceneHandle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDashBoardHostedAppViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL intentToTransitionFromSecureAppToFull; // ivar: _intentToTransitionFromSecureAppToFull
@property (nonatomic) BOOL interfaceOrientationLocked; // ivar: _interfaceOrientationLocked
@property (nonatomic) NSInteger mode;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic) BOOL placeholderContentEnabled;
@property (readonly, nonatomic) NSObject<SBApplicationSceneStatusBarDescribing> *statusBarDescriber; // ivar: _statusBarObserverProxy
@property (readonly) Class superclass;


-(BOOL)allowsConfiguringIndividualStatusBarParts;
-(BOOL)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)arg0 ;
-(BOOL)canHostAnApp;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)isHostingAnApp;
-(NSInteger)containerInterfaceOrientation;
-(NSInteger)contentInterfaceOrientation;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationType;
-(NSInteger)statusBarOrientation;
-(id)_deviceApplicationSceneHandle;
-(id)appearanceIdentifier;
-(id)displayLayoutElementIdentifier;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)initWithApplicationSceneEntity:(id)arg0 ;
-(id)statusBarDescriberForStatusBarPart:(id)arg0 ;
-(void)_addStatusBarViewIfNeeded;
-(void)_beginShowingStatusBarView;
-(void)_endShowingStatusBarView;
-(void)_setResignActiveAssertionEnabled:(BOOL)arg0 ;
-(void)_updateStatusBarContainerOrientation;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)appViewController:(id)arg0 didTransitionFromMode:(NSInteger)arg1 toMode:(NSInteger)arg2 ;
-(void)appViewControllerDidDeactivateApplication:(id)arg0 ;
-(void)appViewControllerWillActivateApplication:(id)arg0 ;
-(void)applicationSceneViewController:(id)arg0 didUpdateStatusBarSettings:(id)arg1 ;
-(void)configureDisplayLayoutElement:(id)arg0 ;
-(void)conformsToSBApplicationHosting;
-(void)dealloc;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)invalidate;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeSceneInterfaceOrientationTo:(NSInteger)arg1 ;
-(void)setSupplementalActivationSettings:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif