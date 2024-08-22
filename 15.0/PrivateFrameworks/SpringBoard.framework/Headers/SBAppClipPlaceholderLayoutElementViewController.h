// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPCLIPPLACEHOLDERLAYOUTELEMENTVIEWCONTROLLER_H
#define SBAPPCLIPPLACEHOLDERLAYOUTELEMENTVIEWCONTROLLER_H

@class NSString, NSMutableArray, NSMutableSet, _UIStatusBarData, FBScene;
@protocol SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding, SBMainDisplaySceneLayoutElementViewControlling, SBDeviceApplicationSceneStatusBarStateObserver;


#import "SBLayoutElementViewController.h"
#import "SBAppClipOverlayViewController.h"
#import "SBDeviceApplicationSceneStatusBarBreadcrumbProvider.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBAppClipPlaceholderLayoutElementViewController : SBLayoutElementViewController <SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding, SBMainDisplaySceneLayoutElementViewControlling>

 {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    BOOL _isPendingUpdate;
    BOOL _isObservingApplicationInstalls;
    NSMutableArray *_statusBarAssertions;
    NSMutableSet *_maskDisplayCornersReasons;
}


@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (readonly, nonatomic) CGRect statusBarAvoidanceFrame;
@property (weak, nonatomic) NSObject<SBDeviceApplicationSceneStatusBarStateObserver> *statusBarDelegate; // ivar: _statusBarDelegate
@property (readonly, nonatomic) NSObject<SBApplicationSceneStatusBarDescribing> *statusBarDescriber;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) NSInteger statusBarOrientation;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) NSInteger statusBarStyle;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;


-(BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(NSInteger)statusBarStyleForPartWithIdentifier:(id)arg0 ;
-(NSUInteger)supportedContentInterfaceOrientations;
-(id)_aggregateStatusBarOverrideSettings;
-(id)_newDisplayLayoutElementForEntity:(id)arg0 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg0 atLevel:(NSUInteger)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg0 nubViewHidden:(NSInteger)arg1 atLevel:(NSUInteger)arg2 ;
-(void)_beginObservingApplicationInstalls;
-(void)_beginPollingUpdateStillAvailable;
-(void)_cleanup;
-(void)_installedApplicationsDidChange:(id)arg0 ;
-(void)_launchApplication:(id)arg0 ;
-(void)_statusBarAssertionDidUpdate;
-(void)_stopObservingApplicationInstalls;
-(void)configureWithWorkspaceEntity:(id)arg0 forLayoutElement:(id)arg1 layoutState:(id)arg2 referenceFrame:(struct CGRect )arg3 ;
-(void)invalidate;
-(void)prepareForReuse;
-(void)setCornerRadiusConfiguration:(id)arg0 ;
-(void)setMaskDisplayCorners:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setShadowOffset:(CGFloat)arg0 ;
-(void)setShadowOpacity:(CGFloat)arg0 ;
-(void)statusBarAssertionDidInvalidate:(id)arg0 ;
-(void)statusBarAssertionDidUpdate:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif