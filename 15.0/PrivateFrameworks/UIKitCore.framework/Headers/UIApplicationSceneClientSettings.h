// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIAPPLICATIONSCENECLIENTSETTINGS_H
#define UIAPPLICATIONSCENECLIENTSETTINGS_H

@class FBSSceneClientSettings, NSData, NSArray, NSString, FBSDisplayConfigurationRequest, FBSDisplayMode, NSDictionary;
@protocol UIApplicationSceneClientSettings;



@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>



@property (readonly, nonatomic) NSUInteger _debugValidationOrientationMask;
@property (readonly, nonatomic) NSData *activationConditionsData;
@property (readonly, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (readonly, nonatomic) NSInteger backgroundStyle;
@property (readonly, nonatomic) CGFloat brightnessLevel;
@property (readonly, copy, nonatomic) NSString *canvasTitle;
@property (readonly, nonatomic) NSInteger compatibilityMode;
@property (readonly, nonatomic) CGFloat controlCenterAmbiguousActivationMargin;
@property (readonly, nonatomic) NSInteger controlCenterRevealMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultPNGExpirationTime;
@property (readonly, copy, nonatomic) NSString *defaultPNGName;
@property (readonly, nonatomic) BOOL defaultStatusBarHidden;
@property (readonly, nonatomic) NSInteger defaultStatusBarStyle;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL deviceOrientationEventsEnabled;
@property (readonly, nonatomic) BOOL disablesMirroring;
@property (readonly, copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden;
@property (readonly, nonatomic) BOOL idleModeVisualEffectsEnabled;
@property (readonly, nonatomic) BOOL idleTimerDisabled;
@property (readonly, nonatomic) NSInteger interfaceOrientation;
@property (readonly, nonatomic) BOOL interfaceOrientationChangesDisabled;
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (readonly, nonatomic) NSInteger notificationCenterRevealMode;
@property (readonly, nonatomic) NSInteger playbackControlsState;
@property (readonly, nonatomic) NSInteger preferredPointerLockStatus;
@property (readonly, nonatomic) UIEdgeInsets primaryWindowOverlayInsets;
@property (readonly, nonatomic) NSUInteger proximityDetectionModes;
@property (readonly, nonatomic, getter=isReachabilitySupported) BOOL reachabilitySupported;
@property (readonly, copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property (readonly, nonatomic) NSInteger sceneActivationBias;
@property (readonly, nonatomic) NSUInteger screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic) CGRect screenFocusedFrame;
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (readonly, nonatomic) unsigned int statusBarContextID;
@property (readonly, nonatomic, getter=isStatusBarForegroundTransparent) BOOL statusBarForegroundTransparent;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) NSInteger statusBarModernStyle;
@property (readonly, copy, nonatomic) NSDictionary *statusBarPartStyles;
@property (readonly, nonatomic) NSInteger statusBarStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedInterfaceOrientations;
@property (readonly, nonatomic) NSInteger userInterfaceStyle;
@property (readonly, nonatomic) NSUInteger visibleMiniAlertCount;
@property (readonly, nonatomic) BOOL wantsExclusiveForeground;
@property (readonly, nonatomic) NSInteger whitePointAdaptivityStyle;


-(BOOL)isUISubclass;
-(BOOL)settings:(id)arg0 appendDescriptionToBuilder:(id)arg1 forFlag:(NSInteger)arg2 object:(id)arg3 ofSetting:(NSUInteger)arg4 ;
-(id)keyDescriptionForOtherSetting:(NSUInteger)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofOtherSetting:(NSUInteger)arg2 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif