// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPCONTAINERVIEWCONTROLLER_H
#define SBAPPCONTAINERVIEWCONTROLLER_H

@class UIApplicationSceneSettingsDiffInspector, UIViewController<SBApplicationSceneViewControlling>, UIView, NSString;
@protocol SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBSceneHandleObserver, SBApplicationSceneViewControlling, SBApplicationSceneStatusBarDescriberProviding, SBScenePlaceholderContentContext, SBApplicationSceneStatusBarDescribing;


#import "SBLayoutElementViewController.h"
#import "SBApplicationSceneHandle.h"

@interface SBAppContainerViewController : SBLayoutElementViewController <SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBSceneHandleObserver, SBApplicationSceneViewControlling, SBApplicationSceneStatusBarDescriberProviding>

 {
    SBApplicationSceneHandle *_applicationSceneHandle;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    NSInteger _requestedDisplayMode;
}


@property (readonly, nonatomic) UIViewController<SBApplicationSceneViewControlling> *_applicationSceneViewController; // ivar: _applicationSceneViewController
@property (weak, nonatomic) NSObject<SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) NSInteger containerOrientation;
@property (readonly, nonatomic) NSInteger contentOrientation;
@property (readonly, nonatomic) CGSize contentReferenceSize;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger overrideStatusBarStyle;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext;
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (weak, nonatomic) NSObject<SBDeviceApplicationSceneStatusBarStateObserver> *statusBarDelegate; // ivar: _statusBarDelegate
@property (readonly, nonatomic) NSObject<SBApplicationSceneStatusBarDescribing> *statusBarDescriber; // ivar: _statusBarObserverProxy
@property (readonly) Class superclass;


-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
-(NSInteger)_overrideStatusBarOrientationGivenFallbackOrientation:(NSInteger)arg0 ;
-(id)_applicationSceneViewControllerForSceneHandle:(id)arg0 ;
-(id)_deviceApplicationSceneHandle;
-(id)_newDisplayLayoutElementForEntity:(id)arg0 ;
-(id)initWithDisplayIdentity:(id)arg0 ;
-(id)newSnapshot;
-(id)newSnapshotView;
-(void)_clearState;
-(void)_configureViewController:(id)arg0 ;
-(void)_updateDisplayLayoutElementForSceneExistence:(id)arg0 ;
-(void)applicationSceneViewController:(id)arg0 didUpdateStatusBarSettings:(id)arg1 ;
-(void)configureWithWorkspaceEntity:(id)arg0 forLayoutElement:(id)arg1 layoutState:(id)arg2 referenceFrame:(struct CGRect )arg3 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(NSInteger)arg0 ;
-(void)didEndTransitionToVisible:(BOOL)arg0 ;
-(void)invalidate;
-(void)newSnapshotViewOnQueue:(id)arg0 withCompletion:(id)arg1 ;
-(void)prepareForReuse;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeSceneInterfaceOrientationTo:(NSInteger)arg1 ;
-(void)setContentWrapperInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif