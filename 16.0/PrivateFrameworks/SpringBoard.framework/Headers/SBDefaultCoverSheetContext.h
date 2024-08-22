// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEFAULTCOVERSHEETCONTEXT_H
#define SBDEFAULTCOVERSHEETCONTEXT_H

@class SBFWallpaperAggdLogger, NSMutableSet, NSString, NSArray;
@protocol CSAuthenticationManaging, CSCarPlayStatusProviding, CSMediaControlling, CSReachabilityControlling, CSResetRestoreStatusProviding, CSTelephonyStatusProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSOverlayProviding, CSAppHostConfiguring, CSSystemPointerInteractionManaging, CSProximitySensorProviding, CSDeviceOrientationProviding, SBProximitySensorManagerObserver, SBFOverlayObserving, CSCoverSheetContextProviding, CSMagSafeAccessoryStatusProviding, CSApplicationInforming, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBUIBiometricResource, SBFActionProviding, SBFDateProviding, CSHomeAffordanceControlling, CSLegibilityProviding, SBFLockOutStatusProvider, CSModalHomeAffordanceControlling, CSNotificationPresenting, SBFPasscodeFieldChangeObserver, CSPlatterHomeGestureManaging, CSPowerStatusProviding, CSScreenStateProviding, SBFScreenWakeAnimationControlling, CSStatusBarControlling, CSThermalStatusProviding, CSWallpaperProviding, CSWallpaperSnapshotUpdating;

#import <Foundation/Foundation.h>

#import "SBSyncController.h"
#import "SBDashBoardNotificationPresenter.h"
#import "SBProximitySensorManager.h"
#import "SBWindowScene.h"

@interface SBDefaultCoverSheetContext : NSObject <CSAuthenticationManaging, CSCarPlayStatusProviding, CSMediaControlling, CSReachabilityControlling, CSResetRestoreStatusProviding, CSTelephonyStatusProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSOverlayProviding, CSAppHostConfiguring, CSSystemPointerInteractionManaging, CSProximitySensorProviding, CSDeviceOrientationProviding, SBProximitySensorManagerObserver, SBFOverlayObserving, CSCoverSheetContextProviding>

 {
    SBSyncController *_syncController;
    SBFWallpaperAggdLogger *_wallpaperAggdLogger;
    SBDashBoardNotificationPresenter *_notificationPresenter;
    SBProximitySensorManager *_proximitySensorManager;
    NSMutableSet *_proximitySensorProviderObservers;
}


@property (readonly, copy, nonatomic) NSString *accessoryAnimationStatusChangedNotificationName; // ivar: _accessoryAnimationStatusChangedNotificationName
@property (readonly, copy, nonatomic) NSString *accessoryAttachedNotificationName; // ivar: _accessoryAttachedNotificationName
@property (readonly, copy, nonatomic) NSString *accessoryDetachedNotificationName; // ivar: _accessoryDetachedNotificationName
@property (readonly, nonatomic) NSObject<CSMagSafeAccessoryStatusProviding> *accessoryStatusProvider; // ivar: _accessoryStatusProvider
@property (readonly, nonatomic) NSObject<CSAppHostConfiguring> *appHostConfiguring;
@property (readonly, nonatomic) NSObject<CSApplicationInforming> *applicationInformer; // ivar: _applicationInformer
@property (readonly, nonatomic) NSObject<SBFAuthenticationAssertionProviding> *authenticationAssertionProvider; // ivar: _authenticationAssertionProvider
@property (readonly, nonatomic) NSObject<CSAuthenticationManaging> *authenticationManager;
@property (readonly, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (readonly, nonatomic) NSObject<SBUIBiometricResource> *biometricResource; // ivar: _biometricResource
@property (readonly, nonatomic, getter=isCarPlayActiveForNotifications) BOOL carPlayActiveForNotifications;
@property (readonly, nonatomic) NSObject<CSCarPlayStatusProviding> *carPlayStatusProvider;
@property (readonly, nonatomic) NSObject<SBFActionProviding> *contentActionProvider; // ivar: _contentActionProvider
@property (readonly, nonatomic) NSObject<SBFDateProviding> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CSDeviceOrientationProviding> *deviceOrientationProvider;
@property (readonly, copy, nonatomic) NSArray *dismissableOverlays;
@property (readonly, nonatomic) BOOL expectsPocketTouches;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CSHomeAffordanceControlling> *homeAffordanceController; // ivar: _homeAffordanceController
@property (readonly, nonatomic) NSObject<CSOverlayProviding> *homeScreenOverlayProvider;
@property (readonly, nonatomic) NSObject<CSLegibilityProviding> *legibilityProvider; // ivar: _legibilityProvider
@property (readonly, nonatomic) NSObject<SBFLockOutStatusProvider> *lockOutStatusProvider; // ivar: _lockOutStatusProvider
@property (readonly, nonatomic, getter=isLogoutSupported) BOOL logoutSupported;
@property (readonly, nonatomic) NSObject<CSMediaControlling> *mediaController;
@property (readonly, nonatomic) NSObject<CSModalHomeAffordanceControlling> *modalHomeAffordanceController; // ivar: _modalHomeAffordanceController
@property (readonly, nonatomic) NSObject<CSNotificationPresenting> *notificationPresenter;
@property (readonly, nonatomic, getter=isObjectInProximity) BOOL objectInProximity; // ivar: _objectInProximity
@property (readonly, nonatomic) NSObject<SBFPasscodeFieldChangeObserver> *passcodeFieldChangeObserver; // ivar: _passcodeFieldChangeObserver
@property (readonly, nonatomic) NSObject<CSPlatterHomeGestureManaging> *platterHomeGestureManager; // ivar: _platterHomeGestureManager
@property (readonly, copy, nonatomic) NSString *powerStatusChangeNotificationName; // ivar: _powerStatusChangeNotificationName
@property (readonly, nonatomic) NSObject<CSPowerStatusProviding> *powerStatusProvider; // ivar: _powerStatusProvider
@property (readonly, nonatomic) NSObject<CSProximitySensorProviding> *proximitySensorProvider;
@property (readonly, nonatomic) NSInteger rawDeviceOrientationIgnoringOrientationLocks; // ivar: _rawDeviceOrientationIgnoringOrientationLocks
@property (readonly, nonatomic) NSObject<CSReachabilityControlling> *reachabilityController;
@property (readonly, nonatomic) NSObject<CSResetRestoreStatusProviding> *resetRestoreStatusProvider;
@property (readonly, nonatomic) NSInteger resetState;
@property (readonly, nonatomic, getter=isResetting) BOOL resetting;
@property (readonly, nonatomic) NSInteger restoreState;
@property (readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property (readonly, weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene; // ivar: _sbWindowScene
@property (readonly, nonatomic) NSObject<CSScreenStateProviding> *screenStateProvider; // ivar: _screenStateProvider
@property (readonly, nonatomic) NSObject<SBFScreenWakeAnimationControlling> *screenWakeAnimationController; // ivar: _screenWakeAnimationController
@property (readonly, nonatomic) NSObject<CSStatusBarControlling> *statusBarController; // ivar: _statusBarController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CSSystemPointerInteractionManaging> *systemPointerInteractionManager;
@property (readonly, nonatomic) NSObject<CSTelephonyStatusProviding> *telephonyStatusProvider;
@property (readonly, nonatomic) NSObject<CSThermalStatusProviding> *thermalStatusProvider; // ivar: _thermalStatusProvider
@property (readonly, nonatomic) NSObject<CSTouchEnvironmentStatusProviding> *touchEnvironmentStatusProvider;
@property (readonly, nonatomic) NSObject<CSUnlockRequesting> *unlockRequester;
@property (readonly, nonatomic) NSObject<CSUserSessionControlling> *userSessionController;
@property (readonly, nonatomic) NSObject<CSWallpaperLogging> *wallpaperLogger;
@property (readonly, nonatomic) NSObject<CSWallpaperProviding> *wallpaperProvider; // ivar: _wallpaperProvider
@property (readonly, nonatomic) NSObject<CSWallpaperSnapshotUpdating> *wallpaperSnapshotUpdater; // ivar: _wallpaperSnapshotUpdater
@property (readonly, nonatomic) BOOL wantsHomeScreenOverlay;


-(BOOL)dismissModalContentIfVisibleAnimated:(BOOL)arg0 ;
-(BOOL)isEmergencyCallSupported;
-(CGFloat)effectiveReachabilityYOffset;
-(id)_todayViewControllerIfAvailable;
-(id)applicationHosterForHostContextProvider:(id)arg0 ;
-(id)createUnlockRequest;
-(id)createUnlockRequestForActionContext:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)newOverlayController;
-(void)addProximitySensorProviderObserver:(id)arg0 ;
-(void)attemptUnlockWithPasscode:(id)arg0 finishUIUnlock:(BOOL)arg1 completion:(id)arg2 ;
-(void)deactivateReachability;
-(void)incrementIrisPlayCount;
-(void)logout;
-(void)overlayController:(id)arg0 didChangePresentationProgress:(CGFloat)arg1 newPresentationProgress:(CGFloat)arg2 fromLeading:(BOOL)arg3 ;
-(void)overlayController:(id)arg0 visibilityDidChange:(BOOL)arg1 ;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg0 ;
-(void)proximitySensorManager:(id)arg0 crudeProximityDidChange:(BOOL)arg1 ;
-(void)registerView:(id)arg0 delegate:(id)arg1 ;
-(void)removeProximitySensorProviderObserver:(id)arg0 ;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setPasscodeVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)stopMediaPlaybackForSource:(NSInteger)arg0 ;
-(void)unlockWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)unregisterView:(id)arg0 ;


@end


#endif