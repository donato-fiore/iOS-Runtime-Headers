// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSIRIAUDIOACTIVATIONINFO_H
#define CSSIRIAUDIOACTIVATIONINFO_H

@class AFClientConfiguration, AFExperimentContext, NSDictionary, NSString, AFLanguageDetectionUserContext, AFSpeechRecordingAlertPolicy, NSUUID;

#import <Foundation/Foundation.h>


@interface CSSiriAudioActivationInfo : NSObject {
    NSInteger _activationMode;
    NSInteger _storedActivationMode;
    NSInteger _csAudioRecordType;
    AFClientConfiguration *_currentClientConfiguration;
    BOOL _suppressStartAlert;
    AFExperimentContext *_experimentContext;
    BOOL _isActivated;
    float _activeMediaPlaybackVolume;
}


@property (readonly, nonatomic) NSUInteger activationHostTime; // ivar: _activationHostTime
@property (readonly, copy, nonatomic) NSDictionary *activationMetadata; // ivar: _activationMetadata
@property (readonly, nonatomic) CGFloat activationSystemUptime; // ivar: _activationSystemUptime
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, copy, nonatomic) NSString *applicationDisplayName; // ivar: _applicationDisplayName
@property (readonly, nonatomic) NSInteger audioAlertStyle; // ivar: _audioAlertStyle
@property (readonly, nonatomic) NSUInteger buttonDownHostTime; // ivar: _buttonDownHostTime
@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSInteger dictationInputOrigin; // ivar: _dictationInputOrigin
@property (readonly, nonatomic) NSUInteger dictationVoiceTriggerAbsStartSampleId; // ivar: _dictationVoiceTriggerAbsStartSampleId
@property (readonly, nonatomic) BOOL hasPlayedStartAlert; // ivar: _hasPlayedStartAlert
@property (readonly, nonatomic) BOOL isOnPhoneCall; // ivar: _isOnPhoneCall
@property (readonly, nonatomic) BOOL isSpokenNotification; // ivar: _isSpokenNotification
@property (readonly, copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext; // ivar: _languageDetectionUserContext
@property (readonly, nonatomic) NSInteger presentationMode; // ivar: _presentationMode
@property (readonly, nonatomic) NSInteger speechEndpointerOperationMode; // ivar: _speechEndpointerOperationMode
@property (readonly, nonatomic) NSInteger speechEvent; // ivar: _speechEvent
@property (readonly, nonatomic) AFSpeechRecordingAlertPolicy *speechRecordingAlertPolicy; // ivar: _speechRecordingAlertPolicy
@property (nonatomic) NSInteger speechRecordingMode; // ivar: _speechRecordingMode
@property (readonly, copy, nonatomic) NSUUID *turnIdentifier; // ivar: _turnIdentifier
@property (readonly, nonatomic) BOOL useBorealisBuffer; // ivar: _useBorealisBuffer
@property (readonly, nonatomic) BOOL usePrelistening; // ivar: _usePrelistening
@property (readonly, nonatomic) NSUInteger voiceTriggerEndHostTime; // ivar: _voiceTriggerEndHostTime


-(BOOL)_canUseZLL;
-(BOOL)_eventIsRaiseToSpeak;
-(BOOL)_eventIsTVRemote;
-(BOOL)_eventIsVoiceTrigger;
-(BOOL)_isRequestFromSpokenNotification:(NSInteger)arg0 ;
-(BOOL)_isVibrationDisabledInAccessibility;
-(BOOL)_isVoiceOverTouchEnabledInAccessibility;
-(BOOL)_shouldSkipStartRecordingAlertForRecordingInfo:(id)arg0 ;
-(BOOL)canEnterTwoShot;
-(BOOL)canGetPCMStream;
-(BOOL)canPrepareWithoutInterruption;
-(BOOL)canPrewarm;
-(BOOL)isVoiceOverTouchEnabled;
-(BOOL)needsUpdateToPostVoiceMode;
-(BOOL)requiresBorealisConsumerCheck;
-(BOOL)shouldExplicitlyPlayAlertOnStart;
-(BOOL)shouldOverrideRecordingStartingAlertBehaviorForAlertStyle:(NSInteger)arg0 ;
-(BOOL)shouldPlayAlertIfNotPrelistening;
-(BOOL)shouldSuppressRecordingErrorAlert;
-(BOOL)shouldSuppressRecordingStopAlert;
-(BOOL)shouldTreatTimeoutAsHardEndpoint;
-(BOOL)shouldUseVoiceTriggerAnalyzerStyle;
-(NSInteger)_activationMode;
-(NSInteger)_audioAlertStyleForListenAfterSpeakingWithRecordRoute:(id)arg0 playbackRoute:(id)arg1 echoCancellation:(BOOL)arg2 useDeviceSpeakerForTTS:(NSInteger)arg3 ;
-(NSInteger)_csAudioRecordType;
-(NSInteger)_csAudioRecordTypeForSpeechEvent:(NSInteger)arg0 currentClientConfiguration:(id)arg1 ;
-(NSInteger)_csAudioRecordTypeForSpeechRequestOptions:(id)arg0 useBorealisBuffer:(BOOL)arg1 currentClientConfiguration:(id)arg2 ;
-(NSInteger)audioAlertStyleForRecordRoute:(id)arg0 recordingInfo:(id)arg1 playbackRoute:(id)arg2 ;
-(NSInteger)event;
-(NSInteger)overrideStartingAlertBeepSoundID;
-(NSInteger)twoShotPromptTypeForRecordRoute:(id)arg0 playbackRoute:(id)arg1 ;
-(NSUInteger)beginUpdateToPostVoice;
-(id)_alertBehaviorForRecordRoute:(id)arg0 recordingInfo:(id)arg1 playbackRoute:(id)arg2 attemptsToUsePastDataBufferFrames:(BOOL)arg3 ;
-(id)_appendDictationApplicationInfoSettings:(id)arg0 ;
-(id)_audioSessionActiveDelayCoreSpeechWithType:(NSUInteger)arg0 ;
-(id)_audioSessionActiveDelayOverride;
-(id)_audioSessionActiveDelayServerConfiguration;
-(id)_audioSessionActiveDelayUserPerceptionWithType:(NSUInteger)arg0 ;
-(id)audioSessionActivationTargetDate;
-(id)dateByAddingTimeIntervalSinceActivation:(CGFloat)arg0 ;
-(id)description;
-(id)initWithSpeechRecordingMode:(NSInteger)arg0 clientConfiguration:(id)arg1 experimentContext:(id)arg2 ;
-(id)recordContext;
-(id)recordContextForSpeechEvent:(NSInteger)arg0 ;
-(id)recordSettingsWithOptions:(NSUInteger)arg0 appendingSettings:(id)arg1 ;
-(id)startRecordingSettingsWithRecordRoute:(id)arg0 recordingInfo:(id)arg1 playbackRoute:(id)arg2 ;
-(id)startingAlertBeepURL;
-(void)audioSessionActivated;
-(void)endUpdateToPostVoiceWithContext:(NSUInteger)arg0 success:(BOOL)arg1 ;
-(void)setClientConfiguration:(id)arg0 ;
-(void)setSpeechRequestOptions:(id)arg0 currentActivationInfo:(id)arg1 ;


@end


#endif