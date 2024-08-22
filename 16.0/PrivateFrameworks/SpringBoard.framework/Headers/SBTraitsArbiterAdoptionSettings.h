// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSARBITERADOPTIONSETTINGS_H
#define SBTRAITSARBITERADOPTIONSETTINGS_H

@class PTSettings, NSMutableArray, NSString, PTOutlet;
@protocol PTSettingsKeyObserver;



@interface SBTraitsArbiterAdoptionSettings : PTSettings <PTSettingsKeyObserver>

 {
    NSMutableArray *_defaultsObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fullyAdoptedRolesEnabled; // ivar: _fullyAdoptedRolesEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PTOutlet *killSpringBoardOutlet; // ivar: _killSpringBoardOutlet
@property (nonatomic) BOOL orientationActuationEnabledForAccessibilityDaemonUI; // ivar: _orientationActuationEnabledForAccessibilityDaemonUI
@property (nonatomic) BOOL orientationActuationEnabledForAlert; // ivar: _orientationActuationEnabledForAlert
@property (nonatomic) BOOL orientationActuationEnabledForAllRoles; // ivar: _orientationActuationEnabledForAllRoles
@property (nonatomic) BOOL orientationActuationEnabledForAssistant; // ivar: _orientationActuationEnabledForAssistant
@property (nonatomic) BOOL orientationActuationEnabledForBanner; // ivar: _orientationActuationEnabledForBanner
@property (nonatomic) BOOL orientationActuationEnabledForBiometricMonitorUI; // ivar: _orientationActuationEnabledForBiometricMonitorUI
@property (nonatomic) BOOL orientationActuationEnabledForCommandTab; // ivar: _orientationActuationEnabledForCommandTab
@property (nonatomic) BOOL orientationActuationEnabledForControlCenter; // ivar: _orientationActuationEnabledForControlCenter
@property (nonatomic) BOOL orientationActuationEnabledForCoverSheet; // ivar: _orientationActuationEnabledForCoverSheet
@property (nonatomic) BOOL orientationActuationEnabledForCoverSheetCamera; // ivar: _orientationActuationEnabledForCoverSheetCamera
@property (nonatomic) BOOL orientationActuationEnabledForCoverSheetHomeScreenOverlay; // ivar: _orientationActuationEnabledForCoverSheetHomeScreenOverlay
@property (nonatomic) BOOL orientationActuationEnabledForDeviceApplicationSceneViewOverlay; // ivar: _orientationActuationEnabledForDeviceApplicationSceneViewOverlay
@property (nonatomic) BOOL orientationActuationEnabledForDruid; // ivar: _orientationActuationEnabledForDruid
@property (nonatomic) BOOL orientationActuationEnabledForEnsembleUI; // ivar: _orientationActuationEnabledForEnsembleUI
@property (nonatomic) BOOL orientationActuationEnabledForFloatingDock; // ivar: _orientationActuationEnabledForFloatingDock
@property (nonatomic) BOOL orientationActuationEnabledForFloatingKeyboard; // ivar: _orientationActuationEnabledForFloatingKeyboard
@property (nonatomic) BOOL orientationActuationEnabledForHUD; // ivar: _orientationActuationEnabledForHUD
@property (nonatomic) BOOL orientationActuationEnabledForHomeScreen; // ivar: _orientationActuationEnabledForHomeScreen
@property (nonatomic) BOOL orientationActuationEnabledForHomeScreenDimming; // ivar: _orientationActuationEnabledForHomeScreenDimming
@property (nonatomic) BOOL orientationActuationEnabledForInputUI; // ivar: _orientationActuationEnabledForInputUI
@property (nonatomic) BOOL orientationActuationEnabledForInteractiveScreenshotGesture; // ivar: _orientationActuationEnabledForInteractiveScreenshotGesture
@property (nonatomic) BOOL orientationActuationEnabledForLiveTranscriptionUI; // ivar: _orientationActuationEnabledForLiveTranscriptionUI
@property (nonatomic) BOOL orientationActuationEnabledForLogWindowRecipe; // ivar: _orientationActuationEnabledForLogWindowRecipe
@property (nonatomic) BOOL orientationActuationEnabledForLoginBootToSetupAppZoomInAnimation; // ivar: _orientationActuationEnabledForLoginBootToSetupAppZoomInAnimation
@property (nonatomic) BOOL orientationActuationEnabledForMedusaDrag; // ivar: _orientationActuationEnabledForMedusaDrag
@property (nonatomic) BOOL orientationActuationEnabledForModifierTimeline; // ivar: _orientationActuationEnabledForModifierTimeline
@property (nonatomic) BOOL orientationActuationEnabledForOverlayUI; // ivar: _orientationActuationEnabledForOverlayUI
@property (nonatomic) BOOL orientationActuationEnabledForPictureInPicture; // ivar: _orientationActuationEnabledForPictureInPicture
@property (nonatomic) BOOL orientationActuationEnabledForPipelineManager; // ivar: _orientationActuationEnabledForPipelineManager
@property (nonatomic) BOOL orientationActuationEnabledForReachability; // ivar: _orientationActuationEnabledForReachability
@property (nonatomic) BOOL orientationActuationEnabledForRecordingIndicator; // ivar: _orientationActuationEnabledForRecordingIndicator
@property (nonatomic) BOOL orientationActuationEnabledForRenderOverlayRecipe; // ivar: _orientationActuationEnabledForRenderOverlayRecipe
@property (nonatomic) BOOL orientationActuationEnabledForScreenFlash; // ivar: _orientationActuationEnabledForScreenFlash
@property (nonatomic) BOOL orientationActuationEnabledForSecureApp; // ivar: _orientationActuationEnabledForSecureApp
@property (nonatomic) BOOL orientationActuationEnabledForStartupFadeAnimation; // ivar: _orientationActuationEnabledForStartupFadeAnimation
@property (nonatomic) BOOL orientationActuationEnabledForSwitcherLiveOverlay; // ivar: _orientationActuationEnabledForSwitcherLiveOverlay
@property (nonatomic) BOOL orientationActuationEnabledForSwitcherRaw; // ivar: _orientationActuationEnabledForSwitcherRaw
@property (nonatomic) BOOL orientationActuationEnabledForSystemAperture; // ivar: _orientationActuationEnabledForSystemAperture
@property (nonatomic) BOOL orientationActuationEnabledForTransientOverlay; // ivar: _orientationActuationEnabledForTransientOverlay
@property (nonatomic) BOOL orientationActuationEnabledForTransientOverlayBackground; // ivar: _orientationActuationEnabledForTransientOverlayBackground
@property (nonatomic) BOOL orientationActuationEnabledForUIBanner; // ivar: _orientationActuationEnabledForUIBanner
@property (nonatomic) BOOL orientationActuationEnabledForUIContextMenu; // ivar: _orientationActuationEnabledForUIContextMenu
@property (nonatomic) BOOL orientationActuationEnabledForUIDragAnimation; // ivar: _orientationActuationEnabledForUIDragAnimation
@property (nonatomic) BOOL orientationActuationEnabledForUIKeyCommandHUD; // ivar: _orientationActuationEnabledForUIKeyCommandHUD
@property (nonatomic) BOOL orientationActuationEnabledForUIKeyboardPrivacySheet; // ivar: _orientationActuationEnabledForUIKeyboardPrivacySheet
@property (nonatomic) BOOL orientationActuationEnabledForUIPeekAndPop; // ivar: _orientationActuationEnabledForUIPeekAndPop
@property (nonatomic) BOOL orientationActuationEnabledForUIProgress; // ivar: _orientationActuationEnabledForUIProgress
@property (nonatomic) BOOL orientationActuationEnabledForWallpaper; // ivar: _orientationActuationEnabledForWallpaper
@property (nonatomic) BOOL orientationActuationEnabledForWallpaperExternal; // ivar: _orientationActuationEnabledForWallpaperExternal
@property (nonatomic) BOOL orientationActuationEnabledForWindowedAccessory; // ivar: _orientationActuationEnabledForWindowedAccessory
@property (readonly) Class superclass;
@property (retain, nonatomic) PTOutlet *toggleAdoptedRolesOutlet; // ivar: _toggleAdoptedRolesOutlet


+(BOOL)ignoresKey:(id)arg0 ;
+(id)actuationEnablementForAllPropertyName;
+(id)actuationEnablementPropertiesNamesPrefix;
+(id)settingsControllerModule;
+(id)settingsFromArchiveDictionary:(id)arg0 ;
-(BOOL)actuationEnabledForAll;
-(BOOL)orientationActuationEnabledForRole:(id)arg0 ;
-(id)_fullyAdoptedRoles;
-(id)_traitsArbiterAdoptionDefaults;
-(id)initWithDefaultValues;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_toggleAdoptedRoles;
-(void)dealloc;
-(void)setDefaultValues;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif