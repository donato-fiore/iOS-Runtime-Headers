// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARSPEECHRECOGNIZER_H
#define _EARSPEECHRECOGNIZER_H

@class NSString, NSArray, NSData, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_EARFormatter.h"
#import "_EARSpeechRecognitionAudioBuffer.h"
#import "_EARSpeechModelInfo.h"
#import "_EARSpeakerCodeInfo.h"

@interface _EARSpeechRecognizer : NSObject {
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_trainingQueue;
    shared_ptr<quasar::SpeakerCodeTraining> _training;
    ? _recognizer;
    unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> _tokenizer;
    _EARSpeechRecognitionAudioBuffer *_currentAudioBuffer;
    weak_ptr<ResultStreamWrapper> _currentResultStreamWrapper;
    NSString *_currentLanguage;
    NSString *_currentTask;
    NSUInteger _currentSamplingRate;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
}


@property (nonatomic) BOOL allowUtteranceDelay; // ivar: _allowUtteranceDelay
@property (copy, nonatomic) NSString *bluetoothDeviceId; // ivar: _bluetoothDeviceId
@property (nonatomic) BOOL concatenateUtterances; // ivar: _concatenateUtterances
@property (readonly, nonatomic) NSString *configPath; // ivar: _configPath
@property (nonatomic) BOOL detectUtterances; // ivar: _detectUtterances
@property (copy, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) BOOL disableAutoPunctuation; // ivar: _disableAutoPunctuation
@property (nonatomic) BOOL disablePartialResults; // ivar: _disablePartialResults
@property (nonatomic) BOOL enableSpeakerCodeTraining; // ivar: _enableSpeakerCodeTraining
@property (nonatomic) CGFloat endpointStart; // ivar: _endpointStart
@property (copy, nonatomic) NSArray *extraLmList; // ivar: _extraLmList
@property (nonatomic) BOOL farField; // ivar: _farField
@property (nonatomic) BOOL formatAcrossUtterances; // ivar: _formatAcrossUtterances
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (copy, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, nonatomic) BOOL isContinuousListening;
@property (readonly, nonatomic) unsigned short itnEnablingFlags;
@property (copy, nonatomic) NSData *jitProfileData; // ivar: _jitProfileData
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (copy, nonatomic) NSArray *leftContext; // ivar: _leftContext
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (readonly, nonatomic) _EARSpeechModelInfo *modelInfo;
@property (copy, nonatomic) NSDictionary *recognitionConfidenceSubtraction; // ivar: _recognitionConfidenceSubtraction
@property (copy, nonatomic) NSDictionary *recognitionReplacements; // ivar: _recognitionReplacements
@property (nonatomic) BOOL recognizeEagerCandidates; // ivar: _recognizeEagerCandidates
@property (copy, nonatomic) NSString *refTranscriptForErrorBlaming; // ivar: _refTranscriptForErrorBlaming
@property (nonatomic) BOOL scoreNbest; // ivar: _scoreNbest
@property (copy, nonatomic) NSArray *scoreNbestExtraLmList; // ivar: _scoreNbestExtraLmList
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (readonly, nonatomic) _EARSpeakerCodeInfo *speakerCodeInfo; // ivar: _speakerCodeInfo
@property (copy, nonatomic) NSString *userId; // ivar: _userId
@property (copy, nonatomic) NSData *userProfileData; // ivar: _userProfileData


+(id)maximumSupportedConfigurationVersion;
+(id)minimumSupportedConfigurationVersion;
+(id)rawTokenResultsFromRecognitionResults:(id)arg0 ;
+(void)compileRecognizerModelsWithConfiguration:(id)arg0 ;
+(void)initialize;
+(void)purgeCompiledRecognizerModelsWithConfiguration:(id)arg0 ;
-(BOOL)canCloneIsFinalAsLastNonFinal;
-(BOOL)isSpeakerCodeTrainingSupported:(id)arg0 ;
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
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 enableSpeakerCodeTraining:(BOOL)arg5 ;
-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 overrideConfigFiles:(id)arg2 language:(id)arg3 activeConfiguration:(id)arg4 modelLoadingOptions:(id)arg5 enableSpeakerCodeTraining:(BOOL)arg6 ;
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
-(struct TextTokenizer *)_tokenizer;
-(struct shared_ptr<quasar::RecogAudioBufferBase> )_audioBufferWithLangauge:(id)arg0 task:(id)arg1 samplingRate:(NSUInteger)arg2 userProfileData:(id)arg3 resultStream:(struct shared_ptr<quasar::RecogResultStreamBase> )arg4 ;
-(struct shared_ptr<quasar::SpeechRecognizer> )getRecognizer;
-(void)_restartActiveRecognition;
-(void)_waitForAsyncRecogToFinish;
-(void)_waitForInitialization;
-(void)cancelRecognition;
-(void)dumpModelVirtualMemoryInfo;
-(void)getFormatterWithBlock:(id)arg0 ;
-(void)interruptTraining;
-(void)setActiveConfiguration:(id)arg0 ;
-(void)setAlternateRawRecognitionTokenSausage:(id)arg0 ;
-(void)updateJitProfileData:(id)arg0 ;
-(void)updateUserProfileData:(id)arg0 ;
-(void)writeRecordedStateAccesses;


@end


#endif