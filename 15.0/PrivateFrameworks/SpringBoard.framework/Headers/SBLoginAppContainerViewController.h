// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOGINAPPCONTAINERVIEWCONTROLLER_H
#define SBLOGINAPPCONTAINERVIEWCONTROLLER_H

@class NSMutableSet, NSHashTable, NSString;
@protocol SBLockScreenBatteryChargingViewControllerDelegate, SBLoginAppSceneHosterDelegate, SBWallpaperObserver, SBLockScreenPluginManagerDelegate, SBLoginAppSceneHoster, BSInvalidatable;


#import "SBLockScreenViewControllerBase.h"
#import "SBLockScreenBatteryChargingViewController.h"
#import "SBLockScreenTemperatureWarningViewController.h"
#import "SBLoginAppContainerPluginWrapperViewController.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBLockScreenPluginManager.h"
#import "SBWallpaperController.h"

@interface SBLoginAppContainerViewController : SBLockScreenViewControllerBase <SBLockScreenBatteryChargingViewControllerDelegate, SBLoginAppSceneHosterDelegate, SBWallpaperObserver, SBLockScreenPluginManagerDelegate>

 {
    id<SBLoginAppSceneHoster> *_sceneHoster;
    SBLockScreenBatteryChargingViewController *_batteryChargingViewController;
    SBLockScreenTemperatureWarningViewController *_thermalWarningViewController;
    SBLoginAppContainerPluginWrapperViewController *_pluginWrapperViewController;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_showStatusBarReasons;
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
    NSInteger _idleTimerMode;
    SBLockScreenPluginManager *_pluginManager;
    SBWallpaperController *_wallpaperController;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)pluginManager:(id)arg0 plugin:(id)arg1 handleAction:(id)arg2 ;
-(BOOL)requiresPasscodeInputForUIUnlockFromSource:(int)arg0 withOptions:(id)arg1 ;
-(BOOL)shouldAutoUnlockForSource:(int)arg0 ;
-(BOOL)shouldDisableALS;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesScreenshots;
-(BOOL)willUIUnlockFromSource:(int)arg0 ;
-(id)_displayLayoutElementIdentifier;
-(id)_hostedAppBundleID;
-(id)_hostedAppView;
-(id)_hostedSceneIdentifier;
-(id)_initWithSceneHoster:(id)arg0 wallpaperController:(id)arg1 ;
-(id)_statusBarSettingsAssertion;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 sceneHoster:(id)arg2 wallpaperController:(id)arg3 ;
-(id)loginContainerView;
-(void)_addBatteryChargingView;
-(void)_cleanupBatteryChargingViewWithAnimationDuration:(CGFloat)arg0 ;
-(void)_fadeViewsForChargingViewVisible:(BOOL)arg0 ;
-(void)_handleBacklightFadeEnded;
-(void)_killLoginApp;
-(void)_reallyAcquireStatusBarAssertionIfNecessaryInitiallyVisible:(BOOL)arg0 ;
-(void)_reallyRelinquishStatusBarAssertion;
-(void)_removeBatteryChargingView;
-(void)_setupLoginAppHosting;
-(void)_setupLoginScene;
-(void)_showOrHideThermalTrapUIAnimated:(BOOL)arg0 ;
-(void)_updateBatteryChargingViewAnimated:(BOOL)arg0 ;
-(void)_updateLegibility;
-(void)addLoginObserver:(id)arg0 ;
-(void)chargingViewControllerFadedOutContent:(id)arg0 ;
-(void)dealloc;
-(void)disableLockScreenPluginWithContext:(id)arg0 ;
-(void)enableLockScreenPluginWithContext:(id)arg0 ;
-(void)loadView;
-(void)noteDeviceBlockedStatusUpdated;
-(void)pluginManager:(id)arg0 activePluginDidChange:(id)arg1 ;
-(void)pluginManager:(id)arg0 didLoadPlugin:(id)arg1 ;
-(void)pluginManager:(id)arg0 displayedPluginDidChangeFromPlugin:(id)arg1 toPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg0 displayedPluginDidUpdateAppearance:(id)arg1 ;
-(void)pluginManager:(id)arg0 willUnloadPlugin:(id)arg1 ;
-(void)prepareForUILock;
-(void)prepareForUIUnlock;
-(void)removeLoginObserver:(id)arg0 ;
-(void)sceneInvalidated;
-(void)sceneUpdatedIdleTimerMode:(NSInteger)arg0 ;
-(void)sceneUpdatedRotationMode:(NSInteger)arg0 ;
-(void)sceneUpdatedStatusBarUserName:(id)arg0 ;
-(void)sceneUpdatedWallpaperMode:(NSUInteger)arg0 ;
-(void)startLockScreenFadeInAnimationForSource:(int)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg0 forVariant:(NSInteger)arg1 ;


@end


#endif