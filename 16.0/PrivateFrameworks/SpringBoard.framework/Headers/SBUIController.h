// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUICONTROLLER_H
#define SBUICONTROLLER_H

@class UIView, NSMapTable, UIForceStageInteractionProgress, BCBatteryDeviceController, SBFZStackParticipant, NSMutableDictionary, NSMutableSet, ATXAppDirectoryClient, ACCConnectionInfo, BSAbsoluteMachTimer, SWWakingTimer, CSMagSafeAccessory, NSString;
@protocol PBUIWallpaperObserver, PTSettingsKeyObserver, UIInteractionProgressObserver, SBWallpaperOrientationProvider, SBReachabilityObserver, SBHomeScreenBackdropViewBaseDelegate, BCBatteryDeviceObserving, ACCConnectionInfoDelegateProtocol, SBFMotionAlarmDelegate, SBFZStackParticipantDelegate, UIWindowDelegate, CSPowerStatusProviding, CSMagSafeAccessoryStatusProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHomeScreenWindow.h"
#import "SBIconContentView.h"
#import "SBHomeScreenBackdropViewBase.h"
#import "SBWindow.h"
#import "SBWallpaperEffectView.h"
#import "SBHUDController.h"
#import "SBVolumeControl.h"
#import "SBDismissOnlyAlertItem.h"
#import "SBAppSwitcherSettings.h"
#import "SBFMotionAlarmController.h"
#import "SBIconController.h"
#import "SBWindowScene.h"

@interface SBUIController : NSObject <PBUIWallpaperObserver, PTSettingsKeyObserver, UIInteractionProgressObserver, SBWallpaperOrientationProvider, SBReachabilityObserver, SBHomeScreenBackdropViewBaseDelegate, BCBatteryDeviceObserving, ACCConnectionInfoDelegateProtocol, SBFMotionAlarmDelegate, SBFZStackParticipantDelegate, UIWindowDelegate, CSPowerStatusProviding, CSMagSafeAccessoryStatusProviding>

 {
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    SBHomeScreenBackdropViewBase *_homeScreenBackdropView;
    SBWindow *_homeScreenDimmingWindow;
    SBWallpaperEffectView *_reachabilityWallpaperEffectView;
    NSMapTable *_statusBarAssertionsByWindowScene;
    UIForceStageInteractionProgress *_homeButtonForceProgress;
    BCBatteryDeviceController *_batteryDeviceController;
    BOOL _lastVolumeDownToControl;
    BOOL _isBatteryCharging;
    BOOL _isFullyCharged;
    BOOL _isBatteryCritical;
    BOOL _isOnAC;
    BOOL _isConnectedToExternalChargingAccessory;
    BOOL _isConnectedToPoweredExternalChargingAccessory;
    BOOL _isConnectedToUnsupportedChargingAccessory;
    BOOL _isConnectedToChargeIncapablePowerSource;
    BOOL _wasConnectedToWirelessChargingAccessory;
    BOOL _isConnectedToWirelessInternalCharger;
    BOOL _isConnectedToWirelessInternalChargingAccessory;
    BOOL _isConnectedToWirelessInternalAccessory;
    BOOL _isConnectedToWindowedAccessory;
    CGRect _visibleScreenCoordinatesForWindowedAccessory;
    id<BSInvalidatable> *_suspendProximityForAttachedWindowedAccessoryAssertion;
    SBFZStackParticipant *_zStackParticipant;
    BOOL _isConnectedToQiPower;
    SBHUDController *_HUDController;
    SBVolumeControl *_volumeControl;
    float _batteryCapacity;
    BOOL _supportsDetailedBatteryCapacity;
    BOOL _disableAppSwitchForcePressDueToHomeButtonForce;
    int _powerStateUpdateToken;
    NSMutableDictionary *_powerSourceHasChimed;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    NSMutableSet *_contentRequiringReasons;
    ATXAppDirectoryClient *_appDirectoryClient;
    BOOL _disallowsPointerInteraction;
    id<BSInvalidatable> *_wallpaperRasterizationAssertion;
    int _firmwareUpdateStateToken;
    ACCConnectionInfo *_accessoryConnectionInfo;
    BSAbsoluteMachTimer *_accessoryAttachmentAnimationBlockingTimer;
    SBFMotionAlarmController *_motionAlarmController;
    BOOL _disableChimeForWirelessCharging;
    BOOL _disableScreenWakeForWirelessCharging;
    SWWakingTimer *_debounceWirelessChargingTimer;
    BOOL _isAccessoryAnimationAllowed;
    CSMagSafeAccessory *_lastAttachedAccessory;
    CSMagSafeAccessory *_lastDetachedAccessory;
    NSMutableDictionary *_accessoriesAttachedByUUID;
}


@property (nonatomic) BOOL chargingChimeEnabled; // ivar: _chargingChimeEnabled
@property (readonly, nonatomic, getter=isConnectedToExternalChargingSource) BOOL connectedToExternalChargingSource;
@property (readonly, nonatomic, getter=isConnectedToQiPower) BOOL connectedToQiPower;
@property (readonly, nonatomic, getter=isConnectedToWirelessInternalCharger) BOOL connectedToWirelessInternalCharger;
@property (readonly, nonatomic, getter=isConnectedToWirelessInternalChargingAccessory) BOOL connectedToWirelessInternalChargingAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging;
@property (readonly, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (readonly, nonatomic) BOOL isAccessoryAnimationAllowed;
@property (readonly, nonatomic) CSMagSafeAccessory *lastAttachedAccessory;
@property (readonly, nonatomic) CSMagSafeAccessory *lastDetachedAccessory;
@property (readonly, nonatomic, getter=isOnAC) BOOL onAC;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


+(id)_effectiveStatusBarSettingsForSnapshot:(id)arg0 sceneHandle:(id)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)zoomViewForDeviceApplicationSceneHandle:(id)arg0 displayConfiguration:(id)arg1 interfaceOrientation:(NSInteger)arg2 snapshot:(id)arg3 snapshotSize:(struct CGSize )arg4 statusBarDescriptor:(id)arg5 decodeImage:(BOOL)arg6 hasOrientationMismatchForClassicApp:(BOOL)arg7 sizeMatchesContentSize:(BOOL)arg8 ;
+(struct CGAffineTransform )_transformAndFrame:(struct CGRect *)arg0 forLaunchImageHostViewWithOrientation:(NSInteger)arg1 statusBarHeight:(CGFloat)arg2 inJailRect:(struct CGRect )arg3 ;
+(struct CGAffineTransform )_transformForStatusBarWithOrientation:(NSInteger)arg0 scaleFactor:(CGFloat)arg1 ;
+(struct CGRect )statusBarFrameForDeviceApplicationSceneHandle:(id)arg0 displayConfiguration:(id)arg1 interfaceOrientation:(NSInteger)arg2 statusBarStyleRequest:(id)arg3 withinBounds:(struct CGRect )arg4 inReferenceSpace:(BOOL)arg5 ;
+(struct CGRect )statusBarFrameForSnapshotFrame:(struct CGRect )arg0 orientation:(NSInteger)arg1 statusBarStyleRequest:(id)arg2 hidden:(BOOL)arg3 ;
+(struct CGRect )statusBarFrameForSnapshotFrame:(struct CGRect )arg0 remainderFrame:(struct CGRect *)arg1 orientation:(NSInteger)arg2 statusBarStyleRequest:(id)arg3 hidden:(BOOL)arg4 ;
-(BOOL)_blocksAnimationForAccessoryType:(NSInteger)arg0 ;
-(BOOL)_isConnectedToWirelessCharging;
-(BOOL)_powerSourceWantsToPlayChime;
-(BOOL)_shouldInitiateAnimationForAccessory:(id)arg0 ;
-(BOOL)_shouldShowAnimationForAccessory:(id)arg0 ;
-(BOOL)disableAppSwitchForcePressDueToHomeButtonForce;
-(BOOL)dissmissAlertItemsAndSheetsIfPossible;
-(BOOL)handleHomeButtonDoublePressDown;
-(BOOL)handleHomeButtonSinglePressUp;
-(BOOL)handleHomeButtonSinglePressUpWithSourceType:(NSUInteger)arg0 ;
-(BOOL)hasVisibleAlertItemOrSheet:(*BOOL)arg0 ;
-(BOOL)isBackdropVisible;
-(BOOL)isBatteryCharging;
-(BOOL)isConnectedToChargeIncapablePowerSource;
-(BOOL)isConnectedToUnsupportedChargingAccessory;
-(BOOL)isConnectedToWindowedAccessory;
-(BOOL)isConnectedToWirelessInternalAccessory;
-(BOOL)isFullyCharged;
-(BOOL)isHeadsetBatteryCharging;
-(BOOL)isHeadsetDocked;
-(BOOL)isIconListViewTornDown;
-(BOOL)supportsDetailedBatteryCapacity;
-(NSInteger)interfaceOrientationForWallpaperController:(id)arg0 ;
-(NSInteger)transitionSourceForIcon:(id)arg0 iconLocation:(id)arg1 ;
-(float)batteryCapacity;
-(id)_currentHomeScreenLegibilitySettings;
-(id)_legibilitySettings;
-(id)contentView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)scalingView;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)window;
-(id)workflowClientFromWebClip:(id)arg0 appToLaunch:(id)arg1 ;
-(int)batteryCapacityAsPercentage;
-(struct CGRect )visibleScreenCoordinatesForWindowedAccessory;
-(unsigned char)headsetBatteryCapacity;
-(void)ACPowerChanged;
-(void)_accessibilityWillBeginAppSwitcherRevealAnimation;
-(void)_accessoryEndpointAttached:(id)arg0 ;
-(void)_accessoryEndpointDetached:(id)arg0 ;
-(void)_activateApplicationFromAccessibility:(id)arg0 ;
-(void)_activateWorkspaceEntity:(id)arg0 fromIcon:(id)arg1 location:(id)arg2 validator:(id)arg3 ;
-(void)_animationBlockingTimerFired;
-(void)_backgroundContrastDidChange:(id)arg0 ;
-(void)_cancelDebounceWirelessChargingTimer;
-(void)_closeOpenFolderIfNecessary;
-(void)_debounceWirelessChargingTimerFired;
-(void)_deviceUILocked;
-(void)_disableWirelessChargingChimeAndScreenWakeForDuration:(CGFloat)arg0 ;
-(void)_disableWirelessChargingChimeAndScreenWakeForDuration:(CGFloat)arg0 withMotionAlarm:(BOOL)arg1 ;
-(void)_dismissAccessory:(id)arg0 playChime:(BOOL)arg1 ;
-(void)_enumeratePowerSourcesWithBlock:(id)arg0 ;
-(void)_hideKeyboard;
-(void)_playAccessoryChimeIfAppropriateForAccessory:(id)arg0 attaching:(BOOL)arg1 withDelay:(CGFloat)arg2 ;
-(void)_preferredContentSizeDidChange:(id)arg0 ;
-(void)_reduceMotionStatusDidChange:(id)arg0 ;
-(void)_removeReachabilityEffectViewIfNecessary;
-(void)_resetWirelessChargingState;
-(void)_setAccessoryAttachmentAnimationBlockingTimerWithDuration:(CGFloat)arg0 ;
-(void)_setConnectedToWindowedAccessory:(BOOL)arg0 ;
-(void)_setDebounceWirelessChargingTimerWithDuration:(CGFloat)arg0 ;
-(void)_setupHomeScreenContentBackdropView;
-(void)_setupHomeScreenDimmingWindow;
-(void)_switchToHomeScreenWallpaperAnimated:(BOOL)arg0 ;
-(void)_updateLegibility;
-(void)_updateRequireWallpaperRasterization;
-(void)_willRevealOrHideContentView;
-(void)accessoryEndpointAttached:(id)arg0 transportType:(int)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4 ;
-(void)accessoryEndpointDetached:(id)arg0 forConnection:(id)arg1 ;
-(void)accessoryEndpointInfoPropertyChanged:(id)arg0 properties:(id)arg1 forConnection:(id)arg2 ;
-(void)activateApplication:(id)arg0 fromIcon:(id)arg1 location:(id)arg2 activationSettings:(id)arg3 actions:(id)arg4 ;
-(void)beginRequiringBackdropViewForReason:(id)arg0 ;
-(void)beginRequiringContentForReason:(id)arg0 ;
-(void)beginRequiringContentForReason:(id)arg0 options:(NSUInteger)arg1 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)cancelInProcessAnimations;
-(void)cancelVolumeEvent;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didDetectDeviceMotion;
-(void)disableAnimationForNextIconRotation;
-(void)endRequiringBackdropViewForReason:(id)arg0 ;
-(void)endRequiringContentForReason:(id)arg0 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)getRotationContentSettings:(struct ? *)arg0 forWindow:(id)arg1 ;
-(void)handleDidEndReachabilityAnimation;
-(void)handleVolumeButtonWithType:(NSInteger)arg0 down:(BOOL)arg1 ;
-(void)handleWillBeginReachabilityAnimation;
-(void)homeScreenBackdropView:(id)arg0 opaquenessDidChange:(BOOL)arg1 ;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)noteStatusBarHeightChanged:(id)arg0 ;
-(void)nudgeIconInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)playChargingChimeIfAppropriate;
-(void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg0 ;
-(void)removeDetachedAccessory:(id)arg0 ;
-(void)restoreContent;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg0 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg0 afterDelay:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)restoreContentWithOptions:(NSUInteger)arg0 ;
-(void)setAllowIconRotation:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setHomeScreenAlpha:(CGFloat)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setHomeScreenBackdropBlurMaterialRecipeName:(id)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setHomeScreenBlurProgress:(CGFloat)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setHomeScreenDimmingAlpha:(CGFloat)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setHomeScreenScale:(CGFloat)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg0 ;
-(void)setLockScreenScale:(CGFloat)arg0 withDuration:(CGFloat)arg1 behaviorMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)setPointerInteractionsEnabled:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)statusBarOverridesDidChange:(id)arg0 ;
-(void)storeAttachedAccessory:(id)arg0 ;
-(void)suppressChimeForConnectedPowerSources;
-(void)tearDownIconListAndBar;
-(void)updateBatteryState:(id)arg0 ;
-(void)updateStatusBarLegibilityForWindowScene:(id)arg0 ;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)windowedAccessoryDismissed;
-(void)windowedAccessoryPresented;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif