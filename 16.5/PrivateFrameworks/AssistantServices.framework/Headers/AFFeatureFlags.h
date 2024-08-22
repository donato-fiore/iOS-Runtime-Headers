// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFFEATUREFLAGS_H
#define AFFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface AFFeatureFlags : NSObject



+(BOOL)forceAsrOnServerForUOD;
+(BOOL)isAccessibleAnnounceEnabled;
+(BOOL)isAnnounceEnabled;
+(BOOL)isAnnounceGroupFaceTimeInviteEnabled;
+(BOOL)isAnnounceMessagesInCarPlayEnabled;
+(BOOL)isAnnounceNotificationsEnabled;
+(BOOL)isAnnounceTelephonyEnabled;
+(BOOL)isAsrOnServerForUODEnabled;
+(BOOL)isAudioAppPredictionOnHomePodEnabled;
+(BOOL)isAudioSessionCoordinationEnabled;
+(BOOL)isBlushingPhantomEnabled;
+(BOOL)isCDAFaceDetectionEnabled;
+(BOOL)isCDMLifecycleDecoupleEnabled;
+(BOOL)isCaballeroEnabled;
+(BOOL)isCrossDeviceArbitrationFeedbackEnabled;
+(BOOL)isCrossDeviceTVControlEnabled;
+(BOOL)isCrossDeviceTVControlFromWatchEnabled;
+(BOOL)isCrossDeviceVoiceFollowUpEnabled;
+(BOOL)isDictationAutoPunctuationEnabled;
+(BOOL)isDictationEmojiRecognitionEnabled;
+(BOOL)isDictationOnSRDEnabled;
+(BOOL)isDictationUserEditClassificationEnabled;
+(BOOL)isDictationVoiceCommandsEnabled;
+(BOOL)isDictationVoiceTriggerEnabled;
+(BOOL)isFileARadarSupported;
+(BOOL)isHintsEnabled;
+(BOOL)isHomeAutomationBackgroundRequestEnabled;
+(BOOL)isIntuitiveConversationAnnounceEnabled;
+(BOOL)isLassoEnabled;
+(BOOL)isListeningOnBothStereoPairUnitsEnabled;
+(BOOL)isLocationSearchContinuityEnabled;
+(BOOL)isMediaEntitySyncDisabled;
+(BOOL)isMyriadNonSpeakerRawScoreThresholdEnabled;
+(BOOL)isMyriadSelfMetricsEnabled;
+(BOOL)isNanoSiriUIRefreshEnabled;
+(BOOL)isNotificationVoiceActionsEnabled;
+(BOOL)isOlympusEnabled;
+(BOOL)isRemoraEnabled;
+(BOOL)isResponseFrameworkEnabled;
+(BOOL)isRingtoneOverA2DPEnabled;
+(BOOL)isSCDAFrameworkEnabled;
+(BOOL)isSDTForASREnabled;
+(BOOL)isSiriDataSharingRepromptEnabled;
+(BOOL)isSiriHybridUODEnabledForWatchOS;
+(BOOL)isSiriMUXEnabledForTVOS;
+(BOOL)isSiriPommesEnabled;
+(BOOL)isSiriPommesEnabledForLanguage:(id)arg0 ;
+(BOOL)isSiriRequestDispatcherEnabled;
+(BOOL)isSiriUODAvailableForLanguage:(id)arg0 ;
+(BOOL)isSiriUODEnabledForTVOS;
+(BOOL)isSiriUODEnabledForWatchOS;
+(BOOL)isSiriUODForceDisabledForTVOS;
+(BOOL)isSiriVocabularySpeechProfileEnabled;
+(BOOL)isSiriXEnabled;
+(BOOL)isStationaryDeviceLocationManagerEnabled;
+(BOOL)isTVAirPodsEnabled;
+(BOOL)isTVPolyglotEnabled;
+(BOOL)isTVPushToTalkEnabled;
+(BOOL)isThemisABEnabled;
+(BOOL)isTimerAlarmCoordinationEnabled;
+(BOOL)isTrialDictationAssetDeliveryEnabled;
+(BOOL)isUnifiedAssetNamespaceEnabled;
+(id)featureFlags;
+(id)sharedInstance;
+(void)dump;
+(void)setLocationSearchContinuityEnabled:(BOOL)arg0 ;


@end


#endif