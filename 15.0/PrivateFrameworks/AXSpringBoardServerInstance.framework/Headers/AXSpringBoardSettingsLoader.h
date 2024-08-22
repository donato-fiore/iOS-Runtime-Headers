// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSPRINGBOARDSETTINGSLOADER_H
#define AXSPRINGBOARDSETTINGSLOADER_H

@class UIWindow, AXAccessQueueTimer, AXDispatchTimer, AXUIClient, AXAssetsService, NSString;
@protocol AXSBVoiceOverSwipeDetectorDelegate, AVSpeechSynthesizerDelegate, AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, AVSpeechSynthesizerDelegate, AXUIClientDelegate>

 {
    UIWindow *_voiceOverVibrateWindow;
    AXAccessQueueTimer *_voiceOverActivationCanceler;
    AXDispatchTimer *_managedConfigurationNotificationCoalesceTimer;
    AXUIClient *_soundDetectionClient;
    AXAssetsService *_assetsService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_alreadyRebootedGracefullyOnce;
+(void)_checkAccessibilityOptionsSetByiTunes;
+(void)_checkAssistiveTouchSetByiTunes;
+(void)_checkClosedCaptioningSetByiTunes;
+(void)_checkContrastSetting;
+(void)_checkForDataResetFile;
+(void)_checkForHomeButtonBreakage:(BOOL)arg0 ;
+(void)_checkInvertColorsSetByiTunes;
+(void)_checkMonoAudioSetByiTunes;
+(void)_checkSpeakAutofillSetByiTunes;
+(void)_checkVoiceOverTouchSetByiTunes;
+(void)_checkZoomTouchSetByiTunes;
+(void)_findNoteFromLoginSessionWithCompletion:(id)arg0 ;
+(void)_gracefulRebootForBrokenHomeButton;
+(void)_initializeDelayedSpringBoardSettings;
+(void)_performValidations;
+(void)_registerForHomeButtonBreakage;
+(void)_registerForHomeButtonBreakageNotification;
+(void)_registerForNotifications;
+(void)_setRebootedGracefullyOnce;
+(void)_setVoiceOverTouchSettings:(unsigned char)arg0 ;
+(void)_startAssistiveTouchForBrokenHomeButton;
+(void)_updateAXSettings;
+(void)_updateSpringBoardHelper;
+(void)bootstrapGuidedAccessIfNeeded;
+(void)checkAccessibilityOptions;
+(void)checkScreenContrast;
+(void)initialize;
-(BOOL)_isDeviceAffectedByVOActivationWorkaround;
-(BOOL)_shouldArmSoundRecognition;
-(BOOL)_shouldArmVoiceTriggers;
-(id)init;
-(void)_bootstrapSoundDetection;
-(void)_ensureUltronAppVisibility:(BOOL)arg0 ;
-(void)_handleGuidedAccessManagedConfigurationDidChange:(id)arg0 ;
-(void)_hideVoiceOverEnabler;
-(void)_initializeRemoteSettingsListener;
-(void)_makeVoiceOverVibrateWindow;
-(void)_playVOActivationSoundEnded;
-(void)_playVOActivationSoundStarted;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_registerReachability;
-(void)_remoteAccessibilitySettingsChanged:(id)arg0 ;
-(void)_showSwipeDetectionEnablerView;
-(void)_showVibrationVoiceOverEnablerView;
-(void)_startupSoundDetectionUIServer;
-(void)_turnOnHearingControlCenterModule;
-(void)_updateAXSettings;
-(void)_updateRemoteAccessibilitySettings;
-(void)_voiceOverEnabled:(id)arg0 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)dealloc;
-(void)swipeDetectorCanceled;
-(void)swipeDetectorDetectedSwipe;


@end


#endif