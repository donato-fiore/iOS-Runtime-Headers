// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSPEECHSYNTHESIZER_H
#define TTSSPEECHSYNTHESIZER_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSString;
@protocol TTSSpeechConnectionDelegate, TTSSpeechSynthesizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate>

 {
    NSInteger _footprint;
    id<TTSSpeechSynthesizerDelegate> *_delegate;
    BOOL _useSharedSession;
    BOOL _audioSessionIDIsValid;
    BOOL _useMonarchStyleRate;
    NSMutableDictionary *_channels;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_currentRequestOwners;
    NSMutableArray *_speechRequests;
    ? _synthesizerFlags;
    NSUInteger _synthesizerInstanceID;
    NSArray *_outputChannels;
    NSMutableDictionary *_testingLastRuleConversion;
}


@property (copy, nonatomic) id *audioBufferCallback; // ivar: _audioBufferCallback
@property (nonatomic) unsigned int audioQueueFlags; // ivar: _audioQueueFlags
@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (weak, nonatomic) NSObject<TTSSpeechSynthesizerDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateTargetQueue; // ivar: _delegateTargetQueue
@property (nonatomic) BOOL ignoreSubstitutions; // ivar: _ignoreSubstitutions
@property (retain, nonatomic) NSArray *outputChannels;
@property (copy, nonatomic) NSArray *phonemeSubstitutions; // ivar: _phonemeSubstitutions
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) float rate; // ivar: _rate
@property (nonatomic) NSUInteger requestClientIdentifier; // ivar: _requestClientIdentifier
@property (readonly, nonatomic) NSString *resolvedVoiceIdentifier;
@property (nonatomic) BOOL skipLuthorRules; // ivar: _skipLuthorRules
@property (nonatomic) *void speakingRequestClientContext; // ivar: _speakingRequestClientContext
@property (nonatomic) BOOL supportsAccurateWordCallbacks; // ivar: _supportsAccurateWordCallbacks
@property (nonatomic) BOOL synthesizeSilently; // ivar: _synthesizeSilently
@property (copy, nonatomic) NSArray *userSubstitutions; // ivar: _userSubstitutions
@property (retain, nonatomic) NSString *voiceIdentifier; // ivar: _voiceIdentifier
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)employSpeechMarkupForType:(NSInteger)arg0 identifier:(id)arg1 withLanguage:(id)arg2 ;
+(BOOL)isSystemVoice:(id)arg0 ;
+(id)_speechVoiceForIdentifier:(id)arg0 language:(id)arg1 footprint:(NSInteger)arg2 ;
+(id)allAvailableVoices;
+(id)audioFileSettingsForVoice:(id)arg0 ;
+(id)availableLanguageCodes;
+(id)availableVoices;
+(id)availableVoicesForLanguageCode:(id)arg0 queryingMobileAssets:(BOOL)arg1 ;
+(id)combinedProsodyMarkupForIdentifier:(id)arg0 string:(id)arg1 rate:(id)arg2 pitch:(id)arg3 volume:(id)arg4 ;
+(id)refreshAllAvailableVoices;
+(id)refreshAllAvailableVoices:(BOOL)arg0 ;
+(id)remapVoiceIdentifier:(id)arg0 ;
+(id)speechMarkupStringForType:(NSInteger)arg0 forIdentifier:(id)arg1 string:(id)arg2 ;
+(id)supportedIPAPhonemeLanguages;
+(id)synthesizerForSynthesizerID:(NSUInteger)arg0 ;
+(id)unavailableVoiceIdentifiers;
+(id)voiceAccessQueue;
+(id)voiceAssetsForTesting;
+(id)voiceForIdentifier:(id)arg0 ;
+(void)_initializeServers;
+(void)initialize;
+(void)setSpeechJobFinishedUnitTestBlock:(id)arg0 ;
+(void)setSpeechJobStartedUnitTestBlock:(id)arg0 ;
+(void)setTestingAvailableVoicesForLanguageCode:(id)arg0 ;
+(void)setVoiceAssetsForTesting:(id)arg0 ;
+(void)testingSetAllVoices:(id)arg0 ;
-(BOOL)_continueSpeakingRequest:(id)arg0 withError:(*id)arg1 ;
-(BOOL)_pauseSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_skipSubstition:(id)arg0 language:(id)arg1 bundleIdentifier:(id)arg2 voice:(id)arg3 ;
-(BOOL)_startSpeakingString:(id)arg0 orAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 request:(*id)arg4 error:(*id)arg5 ;
-(BOOL)_stopSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_substitutionLanguageMatchesSpecialCase:(id)arg0 withLanguage:(id)arg1 ;
-(BOOL)continueSpeakingRequest:(id)arg0 withError:(*id)arg1 ;
-(BOOL)continueSpeakingWithError:(*id)arg0 ;
-(BOOL)isSpeaking;
-(BOOL)pauseSpeakingAtNextBoundary:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)pauseSpeakingAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)pauseSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)pauseSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)startSpeakingString:(id)arg0 error:(*id)arg1 ;
-(BOOL)startSpeakingString:(id)arg0 request:(*id)arg1 error:(*id)arg2 ;
-(BOOL)startSpeakingString:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)startSpeakingString:(id)arg0 toURL:(id)arg1 withLanguageCode:(id)arg2 error:(*id)arg3 ;
-(BOOL)startSpeakingString:(id)arg0 toURL:(id)arg1 withLanguageCode:(id)arg2 request:(*id)arg3 error:(*id)arg4 ;
-(BOOL)startSpeakingString:(id)arg0 withLanguageCode:(id)arg1 error:(*id)arg2 ;
-(BOOL)startSpeakingString:(id)arg0 withLanguageCode:(id)arg1 request:(*id)arg2 error:(*id)arg3 ;
-(BOOL)stopSpeakingAtNextBoundary:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)stopSpeakingAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)stopSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)stopSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)useMonarchStyleRate;
-(NSInteger)footprint;
-(NSUInteger)synthesizerInstanceID;
-(float)maximumRate;
-(float)minimumRate;
-(id)_determineSubstitution:(id)arg0 text:(id)arg1 wordRange:(struct _NSRange )arg2 request:(id)arg3 ;
-(id)_preprocessText:(id)arg0 languageCode:(id)arg1 ;
-(id)init;
-(id)resolvedVoiceIdentifierForLanguageCode:(id)arg0 ;
-(id)speechString;
-(id)testingLastRuleConversion;
-(void)_mediaServicesDied;
-(void)_processUserSubstitutions:(id)arg0 toText:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 voice:(id)arg4 ;
-(void)applySSMLTransformation:(id)arg0 string:(id)arg1 voice:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didStopAtEnd:(BOOL)arg2 phonemesSpoken:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 willSpeakMark:(NSInteger)arg2 inRange:(struct _NSRange )arg3 ;
-(void)connection:(id)arg0 speechRequestDidContinue:(id)arg1 ;
-(void)connection:(id)arg0 speechRequestDidPause:(id)arg1 ;
-(void)connection:(id)arg0 speechRequestDidStart:(id)arg1 ;
-(void)dealloc;
-(void)setFootprint:(NSInteger)arg0 ;
-(void)setUseMonarchStyleRate:(BOOL)arg0 ;
-(void)testingSetLastRuleConversion:(id)arg0 replacement:(id)arg1 ;
-(void)useAudioQueueFlags:(unsigned int)arg0 ;
-(void)useSpecificAudioSession:(unsigned int)arg0 ;


@end


#endif