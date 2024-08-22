// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARSPEECHRECOGNIZER_H
#define _EARSPEECHRECOGNIZER_H

@class NSString, NSDictionary, NSSet, NSArray, NSData, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_EARFormatter.h"
#import "_EARSpeechRecognitionAudioBuffer.h"
#import "_EARTokenizer.h"
#import "_EARSpeechModelInfo.h"
#import "_EARRecognitionMetrics.h"
#import "_EARSpeakerCodeInfo.h"
#import "EARVoiceCommandActiveSet.h"

@interface _EARSpeechRecognizer : NSObject {
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_trainingQueue;
    shared_ptr<quasar::SpeakerCodeTraining> _training;
    shared_ptr<const quasar::VoiceCommandActiveSetCompilation> _voiceCommandCompilation;
    ? _recognizer;
    _EARSpeechRecognitionAudioBuffer *_currentAudioBuffer;
    weak_ptr<ResultStreamWrapper> _currentResultStreamWrapper;
    NSString *_currentLanguage;
    NSString *_currentTask;
    NSUInteger _currentSamplingRate;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    NSDictionary *_muxIdMask;
    NSDictionary *_muxIdReverseMask;
    NSSet *_muxIds;
    NSArray *_userProfiles;
    vector<std::string, std::allocator<std::string>> _rightContextTokens;
    shared_ptr<EARModelInitializeContext> _modelInitializeContext;
    _EARTokenizer *_tokenizer;
}


@property (nonatomic) BOOL allowUtteranceDelay; // ivar: _allowUtteranceDelay
@property (copy, nonatomic) NSString *aneContext; // ivar: _aneContext
@property (copy, nonatomic) NSString *bluetoothDeviceId; // ivar: _bluetoothDeviceId
@property (nonatomic) BOOL concatenateUtterances; // ivar: _concatenateUtterances
@property (readonly, nonatomic) NSString *configPath; // ivar: _configPath
@property (copy, nonatomic) NSString *cpuContext; // ivar: _cpuContext
@property (nonatomic) BOOL detectUtterances; // ivar: _detectUtterances
@property (copy, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) BOOL disableAutoPunctuation; // ivar: _disableAutoPunctuation
@property (nonatomic) BOOL disablePartialResults; // ivar: _disablePartialResults
@property (nonatomic) BOOL enableSpeakerCodeTraining; // ivar: _enableSpeakerCodeTraining
@property (nonatomic) BOOL enableVoiceCommands; // ivar: _enableVoiceCommands
@property (nonatomic) CGFloat endpointStart; // ivar: _endpointStart
@property (copy, nonatomic) NSArray *extraLmList; // ivar: _extraLmList
@property (nonatomic) BOOL farField; // ivar: _farField
@property (nonatomic) BOOL formatAcrossUtterances; // ivar: _formatAcrossUtterances
@property (copy, nonatomic) NSString *gpuContext; // ivar: _gpuContext
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (copy, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, nonatomic) BOOL isContinuousListening;
@property (readonly, nonatomic) unsigned short itnEnablingFlags;
@property (copy, nonatomic) NSData *jitProfileData; // ivar: _jitProfileData
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (copy, nonatomic) NSArray *leftContext; // ivar: _leftContext
@property (copy, nonatomic) NSArray *leftContextForItn; // ivar: _leftContextForItn
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (readonly, nonatomic) _EARSpeechModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) NSNumber *overrideDoServerSideEndpointing; // ivar: _overrideDoServerSideEndpointing
@property (copy, nonatomic) NSDictionary *recognitionConfidenceSubtraction; // ivar: _recognitionConfidenceSubtraction
@property (copy, nonatomic) _EARRecognitionMetrics *recognitionMetrics; // ivar: _recognitionMetrics
@property (copy, nonatomic) NSDictionary *recognitionReplacements; // ivar: _recognitionReplacements
@property (nonatomic) BOOL recognizeEagerCandidates; // ivar: _recognizeEagerCandidates
@property (nonatomic) BOOL recognizeEmoji; // ivar: _recognizeEmoji
@property (copy, nonatomic) NSString *refTranscriptForErrorBlaming; // ivar: _refTranscriptForErrorBlaming
@property (copy, nonatomic) NSString *rightContext; // ivar: _rightContext
@property (nonatomic) BOOL scoreNbest; // ivar: _scoreNbest
@property (copy, nonatomic) NSArray *scoreNbestExtraLmList; // ivar: _scoreNbestExtraLmList
@property (copy, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (readonly, nonatomic) _EARSpeakerCodeInfo *speakerCodeInfo; // ivar: _speakerCodeInfo
@property (copy, nonatomic) NSString *userId; // ivar: _userId
@property (copy, nonatomic) NSData *userProfileData; // ivar: _userProfileData
@property (readonly, nonatomic) EARVoiceCommandActiveSet *voiceCommandActiveSet; // ivar: _voiceCommandActiveSet


+(id)maximumSupportedConfigurationVersion;
+(id)minimumSupportedConfigurationVersion;
+(id)rawTokenResultsFromRecognitionResults:(id)arg0 ;
+(void)compileRecognizerModelsWithConfiguration:(id)arg0 ;
+(void)initialize;
+(void)purgeCompiledRecognizerModelsWithConfiguration:(id)arg0 ;
-(BOOL)canCloneIsFinalAsLastNonFinal;
-(BOOL)isSpeakerCodeTrainingSupported:(id)arg0 ;
-(id)_tokenizer;
-(id)_unmaskMuxPackages:(id)arg0 ;
-(id)activeConfiguration;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 overrideConfigFiles:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 overrideConfigFiles:(id)arg1 generalVoc:(id)arg2 lexiconEnh:(id)arg3 itnEnh:(id)arg4 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 generalVoc:(id)arg2 lexiconEnh:(id)arg3 itnEnh:(id)arg4 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 language:(id)arg6 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 language:(id)arg6 activeConfiguration:(id)arg7 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 language:(id)arg6 activeConfiguration:(id)arg7 enableSpeakerCodeTraining:(BOOL)arg8 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 language:(id)arg6 activeConfiguration:(id)arg7 modelLoadingOptions:(id)arg8 enableSpeakerCodeTraining:(BOOL)arg9 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 language:(id)arg6 activeConfiguration:(id)arg7 modelLoadingOptions:(id)arg8 enableSpeakerCodeTraining:(BOOL)arg9 supportEmojiRecognition:(BOOL)arg10 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 language:(id)arg6 activeConfiguration:(id)arg7 modelLoadingOptions:(id)arg8 enableSpeakerCodeTraining:(BOOL)arg9 supportEmojiRecognition:(BOOL)arg10 voiceCommandActiveSet:(id)arg11 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 language:(id)arg6 activeConfiguration:(id)arg7 modelLoadingOptions:(id)arg8 enableSpeakerCodeTraining:(BOOL)arg9 supportEmojiRecognition:(BOOL)arg10 voiceCommandActiveSet:(id)arg11 modelContextDelegate:(id)arg12 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 enableSpeakerCodeTraining:(BOOL)arg5 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 modelLoadingOptions:(id)arg5 enableSpeakerCodeTraining:(BOOL)arg6 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 modelLoadingOptions:(id)arg5 enableSpeakerCodeTraining:(BOOL)arg6 supportEmojiRecognition:(BOOL)arg7 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 modelLoadingOptions:(id)arg5 enableSpeakerCodeTraining:(BOOL)arg6 supportEmojiRecognition:(BOOL)arg7 voiceCommandActiveSet:(id)arg8 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 modelLoadingOptions:(id)arg5 enableSpeakerCodeTraining:(BOOL)arg6 supportEmojiRecognition:(BOOL)arg7 voiceCommandActiveSet:(id)arg8 modelContextDelegate:(id)arg9 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 modelLoadingOptions:(id)arg5 enableSpeakerCodeTraining:(BOOL)arg6 supportEmojiRecognition:(BOOL)arg7 voiceCommandActiveSet:(id)arg8 modelContextDelegate:(id)arg9 enableItn:(BOOL)arg10 ;
-(id)initWithConfiguration:(id)arg0 useQuasarFormatter:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg0 useQuasarFormatter:(BOOL)arg1 activeConfiguration:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 withGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 withLanguage:(id)arg1 withSdapiConfig:(id)arg2 ;
-(id)recognitionResultsWithAudioData:(id)arg0 userProfileData:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(NSUInteger)arg4 ;
-(id)recognitionResultsWithAudioData:(id)arg0 userProfileData:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(NSUInteger)arg4 extraLanguageModel:(id)arg5 ;
-(id)recognitionStatistics;
-(id)recognitionUtteranceInfos;
-(id)recognitionUtterenceStatistics;
-(id)runRecognitionWithResultStream:(id)arg0 ;
-(id)runRecognitionWithResultStream:(id)arg0 language:(id)arg1 task:(id)arg2 samplingRate:(NSUInteger)arg3 ;
-(id)runRecognitionWithResultStream:(id)arg0 language:(id)arg1 task:(id)arg2 samplingRate:(NSUInteger)arg3 userProfileData:(id)arg4 speakerCodeWriter:(id)arg5 ;
-(id)runRecognitionWithResultStream:(id)arg0 speakerCodeWriter:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(NSUInteger)arg4 ;
-(id)testFormattingWithOneBestResults:(id)arg0 uttMillis:(id)arg1 ;
-(id)tokenizeTextFromEnd:(id)arg0 withLimit:(NSUInteger)arg1 outTokensInVocab:(*id)arg2 ;
-(struct shared_ptr<quasar::RecogAudioBufferBase> )_audioBufferWithLangauge:(id)arg0 task:(id)arg1 samplingRate:(NSUInteger)arg2 userProfileData:(id)arg3 resultStream:(struct shared_ptr<quasar::RecogResultStreamBase> )arg4 ;
-(struct shared_ptr<quasar::SpeechRecognizer> )getRecognizer;
-(struct vector<std::string, std::allocator<std::string>> )splitWithTokenizer:(id)arg0 isLeftContext:(BOOL)arg1 shouldTruncate:(BOOL)arg2 outTokensInVocab:(*id)arg3 ;
-(struct vector<std::string, std::allocator<std::string>> )splitWithTokenizer:(id)arg0 outTokensInVocab:(*id)arg1 ;
-(void)_restartActiveRecognition;
-(void)_setProfileContainers:(id)arg0 muxIds:(id)arg1 ;
-(void)_waitForAsyncRecogToFinish;
-(void)_waitForInitialization;
-(void)cancelRecognition;
-(void)dumpModelVirtualMemoryInfo;
-(void)getFormatterWithBlock:(id)arg0 ;
-(void)interruptTraining;
-(void)pauseRecognition;
-(void)resumeRecognitionWithLeftContext:(id)arg0 rightContext:(id)arg1 selectedText:(id)arg2 ;
-(void)setActiveConfiguration:(id)arg0 ;
-(void)setAlternateRawRecognitionTokenSausage:(id)arg0 ;
-(void)setUserProfile:(id)arg0 ;
-(void)updateJitProfileData:(id)arg0 ;
-(void)updateUserProfileData:(id)arg0 ;
-(void)writeRecordedStateAccesses;


@end


#endif