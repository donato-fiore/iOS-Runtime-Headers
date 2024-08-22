// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFDICTATIONCONNECTION_H
#define AFDICTATIONCONNECTION_H

@class NSXPCConnection, NSString, NSSet, NSMutableData, NSArray, NSMutableDictionary;
@protocol AFNetworkAvailabilityObserver, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, AFDictationDelegate;

#import <Foundation/Foundation.h>

#import "AFCallSiteInfo.h"
#import "AFAudioPowerUpdater.h"
#import "AFSpeechRequestOptions.h"
#import "AFInstanceContext.h"
#import "AFAnalyticsEvent.h"
#import "AFAnalyticsTurnBasedInstrumentationContext.h"

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver>

 {
    NSXPCConnection *_connection;
    NSString *_lastUsedLanguage;
    NSSet *_knownOfflineInstalledLanguages;
    AFCallSiteInfo *_initiationCallSiteInfo;
    AFAudioPowerUpdater *_inputAudioPowerUpdater;
    BOOL _isCapturingSpeech;
    BOOL _hasActiveRequest;
    BOOL _isWaitingForAudioFile;
    BOOL _recognizingIncrementally;
    BOOL _shouldClassifyIntent;
    BOOL _shouldRecognizeCommands;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_bufferTimer;
    BOOL _forceOfflineRecognition;
    AFSpeechRequestOptions *_stopOptions;
    NSMutableData *_buffer;
    CGFloat _audioStartTime;
    CGFloat _amountDataSent;
    BOOL _narrowband;
    NSString *_requestIdString;
    NSArray *_previouslyRecognizedPhrases;
    NSString *_onDeviceDictationUIInteractionIdentifier;
    AFInstanceContext *_instanceContext;
    AFAnalyticsEvent *_preheatEvent;
    AFAnalyticsTurnBasedInstrumentationContext *_intstrumentationContext;
    BOOL _isDetectingUtterances;
    NSMutableDictionary *_languagesLoggingInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFDictationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)dictationIsEnabled;
+(BOOL)dictationIsSupportedForLanguageCode:(id)arg0 error:(*id)arg1 ;
+(BOOL)languageDetectorIsEnabled;
+(void)fetchSupportedLanguageCodes:(id)arg0 ;
+(void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(id)arg0 ;
-(BOOL)dictationIsAvailableForLanguage:(id)arg0 ;
-(BOOL)dictationIsAvailableForLanguage:(id)arg0 synchronous:(BOOL)arg1 ;
-(BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)arg0 ;
-(BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)arg0 synchronous:(BOOL)arg1 ;
-(float)averagePower;
-(float)peakPower;
-(id)_connection;
-(id)_dequeueAudioWithLength:(NSUInteger)arg0 ;
-(id)_dictationService;
-(id)_dictationServiceWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(id)startRecordingForPendingDictationWithLanguageCode:(SEL)arg0 options:(id)arg1 speechOptions:(id)arg2 ;
-(void)_LogUEIRequestCategorization:(int)arg0 ;
-(void)_addPreheatAnalyticsEvent;
-(void)_availabilityChanged;
-(void)_cancelBufferFlushTimer;
-(void)_cancelRequestTimeout;
-(void)_cancelTimerClearBuffer;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg0 ;
-(void)_clearConnection;
-(void)_connectionClearedForInterruption:(BOOL)arg0 ;
-(void)_delayedStopSpeechWithOptions:(id)arg0 ;
-(void)_delegateDidRecognizeSpeechTokens:(id)arg0 nluResult:(id)arg1 languageModel:(id)arg2 delegate:(id)arg3 ;
-(void)_dispatchAsync:(id)arg0 ;
-(void)_dispatchCallbackGroupBlock:(id)arg0 ;
-(void)_extendRequestTimeout;
-(void)_invokeRequestTimeout;
-(void)_logRequestCompetionStatusWithEventType:(NSInteger)arg0 error:(id)arg1 ;
-(void)_registerInvalidationHandlerForXPCConnection:(id)arg0 ;
-(void)_scheduleRequestTimeout;
-(void)_sendDataIfNeeded;
-(void)_sendPendingAnalyticsEvents;
-(void)_setActivationTimeOnOptionsIfNecessary:(id)arg0 ;
-(void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg0 ;
-(void)_stopInputAudioPowerUpdates;
-(void)_tellSpeechDelegateAudioFileFinished:(id)arg0 error:(id)arg1 ;
-(void)_tellSpeechDelegateAvailabilityChanged;
-(void)_tellSpeechDelegateDidBeginLocalRecognitionWithModelInfo:(id)arg0 ;
-(void)_tellSpeechDelegateDidPauseRecognition;
-(void)_tellSpeechDelegateDidProcessAudioDuration:(CGFloat)arg0 ;
-(void)_tellSpeechDelegateDidRecognizeFinalResultCandidatePackage:(id)arg0 ;
-(void)_tellSpeechDelegateDidRecognizePackage:(id)arg0 ;
-(void)_tellSpeechDelegateDidRecognizePartialResult:(id)arg0 ;
-(void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg0 rawPhrases:(id)arg1 utterances:(id)arg2 rawUtterances:(id)arg3 nluResult:(id)arg4 languageModel:(id)arg5 correctionIdentifier:(id)arg6 audioAnalytics:(id)arg7 ;
-(void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg0 nluResult:(id)arg1 languageModel:(id)arg2 ;
-(void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg0 languageModel:(id)arg1 ;
-(void)_tellSpeechDelegateLanguageDetected:(id)arg0 confidenceScores:(id)arg1 isConfident:(BOOL)arg2 ;
-(void)_tellSpeechDelegateLanguageDetectorDidFail:(id)arg0 ;
-(void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)arg0 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg0 ;
-(void)_tellSpeechDelegateRecordingDidBeginWithOptions:(id)arg0 ;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg0 ;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateSearchResultsReceived:(id)arg0 recognitionText:(id)arg1 stable:(BOOL)arg2 final:(BOOL)arg3 ;
-(void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
-(void)_updateBufferFlushTimerWithDelay:(CGFloat)arg0 ;
-(void)_willCancelDictation;
-(void)_willCompleteDictation;
-(void)_willFailDictationWithError:(id)arg0 ;
-(void)_willStartDictationWithLanguageCode:(id)arg0 options:(id)arg1 speechOptions:(id)arg2 machAbsoluteTime:(NSUInteger)arg3 ;
-(void)addRecordedSpeechSampleData:(id)arg0 ;
-(void)beginAvailabilityMonitoring;
-(void)cancelAvailabilityMonitoring;
-(void)cancelSpeech;
-(void)dealloc;
-(void)endSession;
-(void)networkAvailability:(id)arg0 isAvailable:(BOOL)arg1 ;
-(void)pauseRecognition;
-(void)preheat;
-(void)preheatForLanguageCode:(id)arg0 ;
-(void)preheatTestWithLanguage:(id)arg0 options:(id)arg1 ;
-(void)preheatWithRecordDeviceIdentifier:(id)arg0 ;
-(void)reportIssueForError:(id)arg0 eventType:(NSInteger)arg1 context:(id)arg2 ;
-(void)reportIssueForError:(id)arg0 eventType:(NSInteger)arg1 subtype:(id)arg2 context:(id)arg3 ;
-(void)requestOfflineAssistantSupportForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)requestOfflineDictationSupportForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)resumeRecognitionWithPrefixText:(id)arg0 postfixText:(id)arg1 selectedText:(id)arg2 ;
-(void)sendEngagementFeedback:(NSInteger)arg0 voiceQueryIdentifier:(id)arg1 ;
-(void)sendSpeechCorrection:(id)arg0 forIdentifier:(id)arg1 ;
-(void)sendSpeechCorrection:(id)arg0 interactionIdentifier:(id)arg1 ;
-(void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg0 ;
-(void)startDictationWithLanguageCode:(id)arg0 options:(id)arg1 ;
-(void)startDictationWithLanguageCode:(id)arg0 options:(id)arg1 speechOptions:(id)arg2 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg0 isNarrowBand:(BOOL)arg1 options:(id)arg2 forLanguage:(id)arg3 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg0 options:(id)arg1 forLanguage:(id)arg2 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg0 forLanguage:(id)arg1 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg0 forLanguage:(id)arg1 narrowband:(BOOL)arg2 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg0 forLanguage:(id)arg1 narrowband:(BOOL)arg2 forceSampling:(BOOL)arg3 ;
-(void)stopSpeech;
-(void)stopSpeechWithOptions:(id)arg0 ;
-(void)suppressLowStorageNotificationForLanguage:(id)arg0 suppress:(BOOL)arg1 ;
-(void)updateSpeechOptions:(id)arg0 ;


@end


#endif