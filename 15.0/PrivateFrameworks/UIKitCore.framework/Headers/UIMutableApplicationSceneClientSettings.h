// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIMUTABLEAPPLICATIONSCENECLIENTSETTINGS_H
#define UIMUTABLEAPPLICATIONSCENECLIENTSETTINGS_H

@class FBSMutableSceneClientSettings, NSData, NSArray, NSString, FBSDisplayConfigurationRequest, FBSDisplayMode, NSDictionary;
@protocol UIApplicationSceneClientSettings;



@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings>



@property (nonatomic, setter=_setDebugValidationOrientationMask:) NSUInteger _debugValidationOrientationMask;
@property (retain, nonatomic) NSData *activationConditionsData;
@property (retain, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (nonatomic) NSInteger backgroundStyle;
@property (nonatomic) CGFloat brightnessLevel;
@property (copy, nonatomic) NSString *canvasTitle;
@property (nonatomic) NSInteger compatibilityMode;
@property (nonatomic) CGFloat controlCenterAmbiguousActivationMargin;
@property (nonatomic) NSInteger controlCenterRevealMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultPNGExpirationTime;
@property (copy, nonatomic) NSString *defaultPNGName;
@property (nonatomic) BOOL defaultStatusBarHidden;
@property (nonatomic) NSInteger defaultStatusBarStyle;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceOrientationEventsEnabled;
@property (nonatomic) BOOL disablesMirroring;
@property (copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeIndicatorAutoHidden;
@property (nonatomic) BOOL idleModeVisualEffectsEnabled;
@property (nonatomic) BOOL idleTimerDisabled;
@property (nonatomic) NSInteger interfaceOrientation;
@property (nonatomic) BOOL interfaceOrientationChangesDisabled;
@property (retain, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (nonatomic) NSInteger notificationCenterRevealMode;
@property (nonatomic) NSInteger playbackControlsState;
@property (nonatomic) NSInteger preferredPointerLockStatus;
@property (nonatomic) UIEdgeInsets primaryWindowOverlayInsets;
@property (nonatomic) NSUInteger proximityDetectionModes;
@property (nonatomic, getter=isReachabilitySupported) BOOL reachabilitySupported;
@property (copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property (nonatomic) NSInteger sceneActivationBias; // ivar: _sceneActivationBias
@property (nonatomic) NSUInteger screenEdgesDeferringSystemGestures;
@property (nonatomic) CGRect screenFocusedFrame;
@property (nonatomic) CGFloat statusBarAlpha;
@property (nonatomic) unsigned int statusBarContextID;
@property (nonatomic, getter=isStatusBarForegroundTransparent) BOOL statusBarForegroundTransparent; // ivar: _statusBarForegroundTransparent
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) NSInteger statusBarModernStyle;
@property (copy, nonatomic) NSDictionary *statusBarPartStyles;
@property (nonatomic) NSInteger statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedInterfaceOrientations;
@property (nonatomic) NSInteger userInterfaceStyle;
@property (nonatomic) NSUInteger visibleMiniAlertCount;
@property (nonatomic) BOOL wantsExclusiveForeground;
@property (nonatomic) NSInteger whitePointAdaptivityStyle;


-(BOOL)isUISubclass;
-(BOOL)settings:(id)arg0 appendDescriptionToBuilder:(id)arg1 forFlag:(NSInteger)arg2 object:(id)arg3 ofSetting:(NSUInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif