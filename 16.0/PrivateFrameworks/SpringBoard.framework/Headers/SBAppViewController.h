// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPVIEWCONTROLLER_H
#define SBAPPVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableSet, NSSet, UIView;
@protocol SBDeviceApplicationSceneHandleObserver, SBWorkspaceApplicationSceneTransitionContextDelegate, SBApplicationHosting, SBApplicationSceneViewControlling, BSInvalidatable, SBApplicationSceneViewControllingStatusBarDelegate, SBAppViewControllerDelegate, SBScenePlaceholderContentContext;


#import "SBDeviceApplicationSceneViewController.h"
#import "SBActivationSettings.h"
#import "SBApplicationSceneView.h"
#import "SBApplicationSceneHandle.h"

@interface SBAppViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBWorkspaceApplicationSceneTransitionContextDelegate, SBApplicationHosting, SBApplicationSceneViewControlling, BSInvalidatable>

 {
    NSString *_identifier;
    SBDeviceApplicationSceneViewController *_deviceAppViewController;
    SBActivationSettings *_activationSettings;
    NSMutableSet *_activeTransitions;
    BOOL _sceneContentIsReady;
    BOOL _invalidated;
}


@property (retain, nonatomic) NSSet *actionsToDeliver; // ivar: _actionsToDeliver
@property (readonly, nonatomic) SBApplicationSceneView *appView;
@property (weak, nonatomic) NSObject<SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate; // ivar: applicationSceneStatusBarDelegate
@property (nonatomic) BOOL automatesLifecycle; // ivar: _automatesLifecycle
@property (readonly, nonatomic) NSInteger contentInterfaceOrientation;
@property (readonly, nonatomic) CGSize contentReferenceSize;
@property (readonly, nonatomic) NSInteger currentMode; // ivar: _currentMode
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAppViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresOcclusions; // ivar: _ignoresOcclusions
@property (readonly, nonatomic) NSInteger overrideStatusBarStyle;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext; // ivar: _placeholderContentContext
@property (nonatomic) BOOL placeholderContentEnabled; // ivar: _placeholderContentEnabled
@property (nonatomic) NSInteger requestedMode; // ivar: _requestedMode
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBActivationSettings *supplementalActivationSettings; // ivar: _supplementalActivationSettings
@property (nonatomic) BOOL wantsSecureRendering; // ivar: _wantsSecureRendering


-(BOOL)_canShowWhileLocked;
-(BOOL)canHostAnApp;
-(BOOL)isHostingAnApp;
-(id)_configureApplicationSceneEntity:(id)arg0 deliveringActions:(BOOL)arg1 ;
-(id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg0 deliveringActions:(BOOL)arg1 ;
-(id)_windowSceneFromSceneHandle;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)initWithIdentifier:(id)arg0 andApplicationSceneEntity:(id)arg1 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)newSnapshot;
-(id)newSnapshotView;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(void)_activateApp;
-(void)_createSceneViewController;
-(void)_deactivateHostedApp;
-(void)_destroySceneViewController;
-(void)_installedAppsDidChange:(id)arg0 ;
-(void)_sendActions:(id)arg0 ;
-(void)_transformHostedAppViewForRotationToOrientation:(NSInteger)arg0 ;
-(void)_updateForAppearanceState:(int)arg0 ;
-(void)conformsToSBApplicationHosting;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(NSInteger)arg0 ;
-(void)dealloc;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)invalidate;
-(void)newSnapshotViewOnQueue:(id)arg0 withCompletion:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif