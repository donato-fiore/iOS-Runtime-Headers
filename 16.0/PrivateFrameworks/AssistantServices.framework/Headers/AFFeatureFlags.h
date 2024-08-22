// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
+(BOOL)isAudioSessionCoordinationEnabled;
+(BOOL)isBlushingPhantomEnabled;
+(BOOL)isCDAFaceDetectionEnabled;
+(BOOL)isCDMLifecycleDecoupleEnabled;
+(BOOL)isCaballeroEnabled;
+(BOOL)isCrossDeviceTVControlEnabled;
+(BOOL)isCrossDeviceVoiceFollowUpEnabled;
+(BOOL)isDictationAutoPunctuationEnabled;
+(BOOL)isDictationEmojiRecognitionEnabled;
+(BOOL)isDictationOnSRDEnabled;
+(BOOL)isDictationVoiceCommandsEnabled;
+(BOOL)isDictationVoiceTriggerEnabled;
+(BOOL)isFileARadarSupported;
+(BOOL)isHintsEnabled;
+(BOOL)isHomeAutomationBackgroundRequestEnabled;
+(BOOL)isListeningOnBothStereoPairUnitsEnabled;
+(BOOL)isLocationSearchContinuityEnabled;
+(BOOL)isMyriadNonSpeakerRawScoreThresholdEnabled;
+(BOOL)isMyriadSelfMetricsEnabled;
+(BOOL)isNanoSiriUIRefreshEnabled;
+(BOOL)isNotificationVoiceActionsEnabled;
+(BOOL)isRemoraEnabled;
+(BOOL)isResponseFrameworkEnabled;
+(BOOL)isRingtoneOverA2DPEnabled;
+(BOOL)isSDTForASREnabled;
+(BOOL)isSiriDataSharingRepromptEnabled;
+(BOOL)isSiriMUXEnabledForTVOS;
+(BOOL)isSiriRequestDispatcherEnabled;
+(BOOL)isSiriUODAvailableForLanguage:(id)arg0 ;
+(BOOL)isSiriUODEnabledForTVOS;
+(BOOL)isSiriUODEnabledForWatchOS;
+(BOOL)isSiriUODForceDisabledForTVOS;
+(BOOL)isSiriVocabularySpeechProfileEnabled;
+(BOOL)isSiriXEnabled;
+(BOOL)isStationaryDeviceLocationManagerEnabled;
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