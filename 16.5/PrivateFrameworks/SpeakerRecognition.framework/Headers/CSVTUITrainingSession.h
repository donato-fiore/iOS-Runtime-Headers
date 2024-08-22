// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVTUITRAININGSESSION_H
#define CSVTUITRAININGSESSION_H

@class NSString, NSUUID, SFSpeechRecognizer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, NSTimer, NSMutableArray, CSAudioZeroCounter, NSDictionary;
@protocol SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate, CSVTUIAudioSession, CSVTUITrainingSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSVTUIKeywordDetector.h"

@interface CSVTUITrainingSession : NSObject <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate>

 {
    NSInteger _status;
    NSInteger _utteranceId;
    NSInteger _sessionNumber;
    NSString *_locale;
    NSUUID *_mhUUID;
    CSVTUIKeywordDetector *_keywordDetector;
    id<CSVTUIAudioSession> *_audioSession;
    SFSpeechRecognizer *_speechRecognizer;
    SFSpeechAudioBufferRecognitionRequest *_speechRecognitionRequest;
    SFSpeechRecognitionTask *_speechRecognitionTask;
    NSTimer *_masterTimer;
    NSMutableArray *_pcmBufArray;
    BOOL _resultReported;
    BOOL _sessionProcess;
    BOOL _sessionSuspended;
    BOOL _ASRErrorOccured;
    id<CSVTUITrainingSessionDelegate> *_sessionDelegate;
    id *_trainingCompletion;
    id *_trainingCompletionWithResult;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _numRequiredTrailingSamples;
    NSInteger _numTrailingSamples;
    CSAudioZeroCounter *_continuousZeroCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


-(BOOL)resultAlreadyReported;
-(BOOL)setupPhraseSpotter;
-(NSInteger)numSamplesInPCMBuffer;
-(id)createAVAudioPCMBufferWithNSData:(id)arg0 ;
-(id)createDigitalZeroReporterWithVoiceTriggerEventInfo:(id)arg0 ;
-(id)initWithUtteranceId:(NSInteger)arg0 sessionNumber:(NSInteger)arg1 Locale:(id)arg2 audioSession:(id)arg3 keywordDetector:(id)arg4 speechRecognizer:(id)arg5 speechRecognitionRequest:(id)arg6 sessionDelegate:(id)arg7 sessionDispatchQueue:(id)arg8 mhUUID:(id)arg9 zeroCounter:(id)arg10 completionWithResult:(id)arg11 ;
-(id)initWithUtteranceId:(NSInteger)arg0 sessionNumber:(NSInteger)arg1 Locale:(id)arg2 audioSession:(id)arg3 keywordDetector:(id)arg4 speechRecognizer:(id)arg5 speechRecognitionRequest:(id)arg6 sessionDelegate:(id)arg7 sessionDispatchQueue:(id)arg8 zeroCounter:(id)arg9 completion:(id)arg10 ;
-(id)requestTriggeredUtterance:(id)arg0 ;
-(int)getTrainingAudioStatusWithVTEI:(id)arg0 digitalZeroReporter:(id)arg1 ;
-(void)_registerEndPointTimeout;
-(void)audioSessionDidStartRecording:(BOOL)arg0 error:(id)arg1 ;
-(void)audioSessionDidStopRecording:(NSInteger)arg0 ;
-(void)audioSessionErrorDidOccur:(id)arg0 ;
-(void)audioSessionRecordBufferAvailable:(id)arg0 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)closeSessionWithCompletion:(id)arg0 ;
-(void)closeSessionWithStatus:(int)arg0 successfully:(BOOL)arg1 ;
-(void)closeSessionWithStatus:(int)arg0 successfully:(BOOL)arg1 complete:(id)arg2 ;
-(void)closeSessionWithStatus:(int)arg0 successfully:(BOOL)arg1 voiceTriggerEventInfo:(id)arg2 completeWithResult:(id)arg3 ;
-(void)computeRequiredTrailingSamples;
-(void)didDetectBeginOfSpeech;
-(void)didDetectEndOfSpeech:(NSInteger)arg0 ;
-(void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(id)arg0 ;
-(void)feedSpeechRecognitionWithPCMBuffer;
-(void)finishSpeechRecognitionTask;
-(void)handleAudioBufferForVTWithAudioInput:(id)arg0 withDetectedBlock:(id)arg1 ;
-(void)handleAudioInput:(id)arg0 ;
-(void)handleMasterTimeout:(id)arg0 ;
-(void)logTrainingSessionCompleteWithVoiceTriggerEventInfo:(id)arg0 ;
-(void)pushAudioInputIntoPCMBuffer:(id)arg0 ;
-(void)resumeTraining;
-(void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)arg0 ;
-(void)speechRecognitionTask:(id)arg0 didHypothesizeTranscription:(id)arg1 ;
-(void)startMasterTimerWithTimeout:(float)arg0 ;
-(void)startTraining;
-(void)stopMasterTimer;
-(void)suspendTraining;
-(void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)arg0 ;
-(void)updateMeterAndForward;


@end


#endif