// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOCAPTIONS_H
#define VCAUDIOCAPTIONS_H

@class SFSpeechRecognizer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, NSLocale, NSMutableArray, NSString, NSSet;
@protocol SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate, VCAudioIOSink, OS_dispatch_queue, VCAudioCaptionsDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface VCAudioCaptions : NSObject <SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate, VCAudioIOSink>

 {
    BOOL _isEnabled;
    BOOL _isStarted;
    BOOL _isLocal;
    AudioStreamBasicDescription _inputFormat;
    unsigned int _lastVoiceAcitivty;
    int _recognizerState;
    SFSpeechRecognizer *_recognizer;
    SFSpeechAudioBufferRecognitionRequest *_recognizerRequest;
    SFSpeechRecognitionTask *_recognizerTask;
    NSObject<OS_dispatch_queue> *_captionsQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    *__CFAllocator _copyBufferAllocator;
    *__CFAllocator _audioBufferAllocator;
    NSInteger _currentTime;
    int _timescale;
    NSInteger _epoch;
    NSLocale *_locale;
    id<VCAudioCaptionsDelegate> *_delegate;
    *opaqueRTCReporting _reportingAgent;
    CGFloat _captionsEnabledDuration;
    CGFloat _lastCaptionsEnabledTime;
    ? _lastAudioProcessedTime;
    CGFloat _captionedAudioDuration;
    unsigned int _captionTaskCount;
    CGFloat _captionsLastUtteranceStart;
    CGFloat _captionsUtteranceDuration;
    *OpaqueAudioConverter _audioConverter;
    AudioStreamBasicDescription _captionsFormat;
    unsigned int _currentUtteranceNumber;
    NSObject<OS_dispatch_semaphore> *_teardownSemaphore;
    BOOL _inputFormatDidChange;
    NSMutableArray *_captionTasks;
    NSInteger _currentActiveToken;
    *void _logCaptionsDump;
    BOOL _isCaptionsDebugDumpEnabled;
    BOOL _isSpeechModelLoaded;
    unsigned int _logMessageCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCAudioCaptionsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *localLanguages; // ivar: _localLanguages
@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL remoteCanDisplay; // ivar: _remoteCanDisplay
@property (retain, nonatomic) NSSet *remoteLanguages; // ivar: _remoteLanguages
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supported;
@property (retain, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


+(BOOL)shouldAllocateNewAllocator:(*void)arg0 streamDesc:(struct AudioStreamBasicDescription *)arg1 referenceStreamDesc:(struct AudioStreamBasicDescription *)arg2 ;
-(?)createAudioConverterWithInputFormat:(?)arg0 outputFormatconverter;
-(BOOL)captionsDebugDumpEnabled;
-(BOOL)createRecognizer:(*id)arg0 ;
-(BOOL)idleStateToState:(int)arg0 withReason:(int)arg1 error:(*id)arg2 ;
-(BOOL)loadedStateToState:(int)arg0 withReason:(int)arg1 error:(*id)arg2 ;
-(BOOL)recognizerBufferSetupWithError:(*id)arg0 ;
-(BOOL)runningStateToState:(int)arg0 withReason:(int)arg1 error:(*id)arg2 ;
-(BOOL)stoppingStateToState:(int)arg0 withReason:(int)arg1 error:(*id)arg2 ;
-(BOOL)transitionToState:(int)arg0 withReason:(int)arg1 error:(*id)arg2 ;
-(NSInteger)getTokenForTask:(id)arg0 ;
-(id)getTaskInfoForTask:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 isLocal:(BOOL)arg1 taskIdentifier:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 ;
-(struct opaqueCMSampleBuffer *)convertSamples:(char *)arg0 numSamples:(int)arg1 ;
-(struct opaqueCMSampleBuffer *)createSampleBufferWithFormat:(struct AudioStreamBasicDescription *)arg0 samples:(char *)arg1 numSamples:(int)arg2 ;
// -(void)callCompletionHandler:(id)arg0 withResult:(unk)arg1  ;
-(void)dealloc;
-(void)destroyAudioConverter:(struct OpaqueAudioConverter *)arg0 ;
-(void)destroyRecognizer;
-(void)dumpCaptionsIfNeeded:(id)arg0 final:(BOOL)arg1 ;
-(void)enableCaptions:(BOOL)arg0 ;
-(void)gatherRealtimeStats:(struct __CFDictionary *)arg0 ;
-(void)packageAndSendTranscribedString:(id)arg0 withTask:(id)arg1 final:(BOOL)arg2 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)recognizerBufferTeardown;
-(void)recordAudioSampleMetrics;
-(void)speechRecognitionDidDetectSpeech:(id)arg0 ;
-(void)speechRecognitionTask:(id)arg0 didFinishRecognition:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didHypothesizeTranscription:(id)arg1 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg0 ;
-(void)speechRecognizer:(id)arg0 availabilityDidChange:(BOOL)arg1 ;
-(void)start:(struct AudioStreamBasicDescription *)arg0 forToken:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)stop;
-(void)stopWithCompletionHandler:(id)arg0 ;


@end


#endif