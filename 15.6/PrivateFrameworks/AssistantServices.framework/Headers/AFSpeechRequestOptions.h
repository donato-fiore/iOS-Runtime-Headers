// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSPEECHREQUESTOPTIONS_H
#define AFSPEECHREQUESTOPTIONS_H

@class NSString, NSFileHandle, NSURL, NSDictionary, NSNumber, CLLocation, NSXPCListenerEndpoint, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFLanguageDetectionUserContext.h"
#import "AFMyriadContext.h"
#import "AFSpeechRecordingAlertPolicy.h"
#import "AFSpeechSynthesisRecord.h"
#import "AFSpeechTestRequestOptions.h"

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL acousticIdEnabled; // ivar: _acousticIdEnabled
@property (copy, nonatomic) NSString *activationDeviceIdentifier; // ivar: _activationDeviceIdentifier
@property (nonatomic) NSInteger activationEvent; // ivar: _activationEvent
@property (nonatomic) NSUInteger activationEventMachAbsoluteTime; // ivar: _activationEventMachAbsoluteTime
@property (nonatomic) CGFloat activationEventTime; // ivar: _activationEventTime
@property (nonatomic) NSInteger announcementPlatform; // ivar: _announcementPlatform
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *applicationDisplayName; // ivar: _applicationDisplayName
@property (retain, nonatomic) NSFileHandle *audioFileHandle; // ivar: _audioFileHandle
@property (nonatomic) NSInteger audioFileType; // ivar: _audioFileType
@property (copy, nonatomic) NSURL *audioFileURL; // ivar: _audioFileURL
@property (nonatomic) NSUInteger bargeInOptions; // ivar: _bargeInOptions
@property (copy, nonatomic) NSString *btDeviceAddress;
@property (copy, nonatomic) NSDictionary *clientAnalyticsContext; // ivar: _clientAnalyticsContext
@property (nonatomic) NSInteger dictationInputOrigin; // ivar: _dictationInputOrigin
@property (nonatomic) NSUInteger dictationVoiceTriggerAbsStartSampleId; // ivar: _dictationVoiceTriggerAbsStartSampleId
@property (nonatomic) BOOL disableInputAudioPowerUpdate; // ivar: _disableInputAudioPowerUpdate
@property (nonatomic) BOOL disableOutputAudioPowerUpdate; // ivar: _disableOutputAudioPowerUpdate
@property (nonatomic) NSInteger endpointerOperationMode; // ivar: _endpointerOperationMode
@property (nonatomic) NSInteger endpointerStopRecordingMode; // ivar: _endpointerStopRecordingMode
@property (nonatomic) CGFloat expectedActivationEventTime; // ivar: _expectedActivationEventTime
@property (nonatomic) BOOL hasPlayedStartAlert; // ivar: _hasPlayedStartAlert
@property (nonatomic) NSUInteger homeButtonDownEventMachAbsoluteTime; // ivar: _homeButtonDownEventMachAbsoluteTime
@property (nonatomic) CGFloat homeButtonDownEventTime; // ivar: _homeButtonDownEventTime
@property (copy, nonatomic) NSNumber *homeButtonUpFromBeep; // ivar: _homeButtonUpFromBeep
@property (nonatomic) BOOL isEyesFree; // ivar: _isEyesFree
@property (nonatomic) BOOL isInitialBringUp; // ivar: _isInitialBringUp
@property (nonatomic) BOOL isMediaPlaying; // ivar: _isMediaPlaying
@property (nonatomic) BOOL isOnPhoneCall; // ivar: _isOnPhoneCall
@property (nonatomic) BOOL isTest; // ivar: _isTest
@property (copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext; // ivar: _languageDetectionUserContext
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *locationStatus; // ivar: _locationStatus
@property (nonatomic) float mediaPlaybackVolume; // ivar: _mediaPlaybackVolume
@property (copy, nonatomic) AFMyriadContext *myriadContext; // ivar: _myriadContext
@property (copy, nonatomic) NSNumber *notifyState; // ivar: _notifyState
@property (nonatomic) BOOL pendCallbacksUntilAfterContinuation; // ivar: _pendCallbacksUntilAfterContinuation
@property (copy, nonatomic) NSString *preheatLanguage; // ivar: _preheatLanguage
@property (copy, nonatomic) NSURL *preheatTestModelPath; // ivar: _preheatTestModelPath
@property (nonatomic) NSInteger presentationMode; // ivar: _presentationMode
@property (copy, nonatomic) NSString *recordDeviceIdentifier; // ivar: _recordDeviceIdentifier
@property (copy, nonatomic) AFSpeechRecordingAlertPolicy *recordingAlertPolicy; // ivar: _recordingAlertPolicy
@property (nonatomic) BOOL releaseAudioSessionOnRecordingCompletion; // ivar: _releaseAudioSessionOnRecordingCompletion
@property (nonatomic) BOOL reloadSmartSiriVolume; // ivar: _reloadSmartSiriVolume
@property (copy, nonatomic) NSString *serverCommandId; // ivar: _serverCommandId
@property (nonatomic) BOOL skipGeneratingSpeechPacket; // ivar: _skipGeneratingSpeechPacket
@property (nonatomic) BOOL skipPersonalizedASR; // ivar: _skipPersonalizedASR
@property (retain, nonatomic) NSXPCListenerEndpoint *speechRecordingEventListeningEndpoint; // ivar: _speechRecordingEventListeningEndpoint
@property (copy, nonatomic) AFSpeechSynthesisRecord *speechSynthesisRecord; // ivar: _speechSynthesisRecord
@property (copy, nonatomic) NSDictionary *startContext; // ivar: _startContext
@property (copy, nonatomic) NSDictionary *stopContext; // ivar: _stopContext
@property (nonatomic) NSUInteger stopRecordingHostTime; // ivar: _stopRecordingHostTime
@property (nonatomic) BOOL suppressStartAlert; // ivar: _suppressStartAlert
@property (nonatomic) BOOL suppressStopAlert; // ivar: _suppressStopAlert
@property (copy, nonatomic) AFSpeechTestRequestOptions *testRequestOptions; // ivar: _testRequestOptions
@property (copy, nonatomic) NSUUID *turnIdentifier; // ivar: _turnIdentifier
@property (nonatomic) BOOL useAutomaticEndpointing; // ivar: _useAutomaticEndpointing
@property (nonatomic) BOOL useBorealisBuffer; // ivar: _useBorealisBuffer
@property (nonatomic) BOOL usePrelisteningMode; // ivar: _usePrelisteningMode
@property (nonatomic) BOOL useStreamingDictation; // ivar: _useStreamingDictation
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isRaiseToSpeak;
-(BOOL)isVoiceTrigger;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForTestWithTestRequestOptions:(id)arg0 ;
-(id)initWithActivationEvent:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif