// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVTUITRAININGSESSIONWITHPAYLOAD_H
#define CSVTUITRAININGSESSIONWITHPAYLOAD_H

@class NSString, NSDictionary;
@protocol SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate;


#import "CSVTUITrainingSession.h"

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate>

 {
    BOOL _detectBOS;
    BOOL _ASRResultReceived;
    BOOL _reportedStopListening;
    BOOL _utteranceStored;
    NSUInteger _numSamplesFed;
    NSUInteger _bestTriggerSampleStart;
    NSUInteger _extraSamplesAtStart;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


-(BOOL)shouldHandleSession;
-(BOOL)shouldMatchPayload;
-(void)_firedEndPointTimeout;
-(void)_firedVoiceTriggerTimeout;
-(void)_registerEndPointTimeout;
-(void)_registerForceEndPointTimeout;
-(void)_registerVoiceTriggerTimeout;
-(void)_reportStopListening;
-(void)audioSessionDidStartRecording:(BOOL)arg0 error:(id)arg1 ;
-(void)audioSessionDidStopRecording:(NSInteger)arg0 ;
-(void)audioSessionErrorDidOccur:(id)arg0 ;
-(void)audioSessionRecordBufferAvailable:(id)arg0 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)closeSessionWithStatus:(int)arg0 successfully:(BOOL)arg1 ;
-(void)didDetectBeginOfSpeech;
-(void)didDetectEndOfSpeech:(NSInteger)arg0 ;
-(void)handleAudioInput:(id)arg0 ;
// -(void)matchRecognitionResult:(id)arg0 withMatchedBlock:(id)arg1 withNonMatchedBlock:(unk)arg2  ;
-(void)speechRecognitionTask:(id)arg0 didFinishRecognition:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didHypothesizeTranscription:(id)arg1 ;
-(void)startTraining;


@end


#endif