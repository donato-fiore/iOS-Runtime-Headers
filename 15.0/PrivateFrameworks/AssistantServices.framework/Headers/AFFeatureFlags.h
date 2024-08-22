// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFFEATUREFLAGS_H
#define AFFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface AFFeatureFlags : NSObject



+(BOOL)isAnnounceEnabled;
+(BOOL)isAnnounceGroupFaceTimeInviteEnabled;
+(BOOL)isAnnounceMessagesInCarPlayEnabled;
+(BOOL)isAnnounceNotificationsEnabled;
+(BOOL)isAnnounceTelephonyEnabled;
+(BOOL)isAudioSessionCoordinationEnabled;
+(BOOL)isCrossDeviceTVControlEnabled;
+(BOOL)isCrossDeviceVoiceFollowUpEnabled;
+(BOOL)isDictationVoiceTriggerEnabled;
+(BOOL)isHintsEnabled;
+(BOOL)isHomeAutomationBackgroundRequestEnabled;
+(BOOL)isLassoEnabled;
+(BOOL)isListeningOnBothStereoPairUnitsEnabled;
+(BOOL)isLocationSearchContinuityEnabled;
+(BOOL)isMyriadNonSpeakerRawScoreThresholdEnabled;
+(BOOL)isRemoraEnabled;
+(BOOL)isSiriRequestDispatcherEnabled;
+(BOOL)isSiriUODAvailableForLanguage:(id)arg0 ;
+(BOOL)isSiriXEnabled;
+(BOOL)isThemisABEnabled;
+(BOOL)isTimerAlarmCoordinationEnabled;
+(BOOL)isTrialDictationAssetDeliveryEnabled;
+(id)featureFlags;
+(id)sharedInstance;
+(void)dump;
+(void)setLocationSearchContinuityEnabled:(BOOL)arg0 ;


@end


#endif