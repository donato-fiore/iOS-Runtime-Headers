// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPOTLIGHTMULTIPLEXINGVIEWCONTROLLER_H
#define SBSPOTLIGHTMULTIPLEXINGVIEWCONTROLLER_H

@class UIViewController, NSString, _UILegibilitySettings;
@protocol SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBScrollToTopSceneProxyViewDelegate, SBDeviceApplicationSceneStatusBarStateObserver, SPUIRemoteSearchViewDelegate;


#import "SBScrollToTopSceneProxyView.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBMedusaHostedKeyboardWindowLevelAssertion.h"

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBScrollToTopSceneProxyViewDelegate, SBDeviceApplicationSceneStatusBarStateObserver>

 {
    SBScrollToTopSceneProxyView *_scrollToTopView;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}


@property (nonatomic, getter=isActiveDelegate) BOOL activeDelegate; // ivar: _activeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSUInteger level;
@property (retain, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *medusaHostedKeyboardWindowLevelAssertion; // ivar: _medusaHostedKeyboardWindowLevelAssertion
@property (weak, nonatomic) NSObject<SPUIRemoteSearchViewDelegate> *spotlightDelegate; // ivar: _spotlightDelegate
@property (readonly) Class superclass;


+(id)sharedRemoteSearchViewController;
+(id)sharedRemoteSearchViewControllerIfExists;
-(BOOL)_isStatusBarEffectivelyHidden;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSUInteger)_appStatusBarSettingsLevelForSpotlightMultiplexingLevel:(NSUInteger)arg0 ;
-(NSUInteger)remoteSearchViewPresentationSource;
-(id)_spotlightSceneIdentifier;
-(id)sceneHandle;
-(void)_clearStatusBarAssertion;
-(void)_configureStatusBarScrollToTopView;
-(void)_registerStatusBarScrollToTopView;
-(void)_registerStatusBarScrollToTopViewWithWindow:(id)arg0 ;
-(void)_unregisterStatusBarScrollToTopView;
-(void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg0 ;
-(void)_updateStatusBarAssertion;
-(void)dealloc;
-(void)didBecomeActiveDelegate;
-(void)didResignActiveDelegate;
-(void)dismissSearchView;
-(void)invalidate;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAlphaTo:(CGFloat)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarHiddenTo:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg0 rootedAtWindow:(id)arg1 ;
-(void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg0 rootedAtWindow:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif