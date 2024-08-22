// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRVTUITRAININGMANAGER_H
#define SSRVTUITRAININGMANAGER_H

@class NSString, NSMutableArray, SFSpeechRecognizer, CSAsset, CSDispatchGroup, CSPlainAudioFileWriter;
@protocol CSVTUITrainingSessionDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndpointAnalyzerDelegate, CSVTUIAudioSession, OS_dispatch_queue, SSRVTUITrainingManagerDelegate;

#import <Foundation/Foundation.h>

#import "CSVTUIEndpointAnalyzer.h"
#import "CSVTUIKeywordDetector.h"
#import "CSVTUITrainingSession.h"
#import "SSRVoiceProfile.h"

@interface SSRVTUITrainingManager : NSObject <CSVTUITrainingSessionDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndpointAnalyzerDelegate>

 {
    BOOL _performRMS;
    NSString *_locale;
    id<CSVTUIAudioSession> *_audioSession;
    CSVTUIEndpointAnalyzer *_audioAnalyzer;
    CSVTUIKeywordDetector *_keywordDetector;
    NSMutableArray *_trainingSessions;
    CSVTUITrainingSession *_currentTrainingSession;
    NSInteger _sessionNumber;
    BOOL _suspendAudio;
    NSObject<OS_dispatch_queue> *_queue;
    id *_cleanupCompletion;
    SFSpeechRecognizer *_speechRecognizer;
    CSAsset *_currentAsset;
    SSRVoiceProfile *_profile;
    CSDispatchGroup *_didStopWaitingGroup;
}


@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // ivar: _audioFileWriter
@property (readonly) NSUInteger audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSRVTUITrainingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property float rms; // ivar: _rms
@property (readonly) BOOL speechRecognizerAvailable; // ivar: _speechRecognizerAvailable
@property (readonly) Class superclass;
@property BOOL suspendAudio;
@property (readonly) SSRVoiceProfile *voiceProfile;


+(id)sharedtrainingSessionQueue;
+(id)trainingManagerWithLocaleID:(id)arg0 withAppDomain:(id)arg1 ;
-(BOOL)CSVTUITrainingSession:(id)arg0 hasTrainUtterance:(id)arg1 languageCode:(id)arg2 payload:(BOOL)arg3 ;
-(BOOL)_createAudioAnalyzer;
-(BOOL)_setupAudioSession;
-(BOOL)_shouldShowHeadsetDisconnectionMessage;
-(BOOL)_startAudioSession;
-(BOOL)_stopAudioSession;
-(BOOL)cancelTrainingForID:(NSInteger)arg0 ;
-(BOOL)createKeywordDetector;
-(BOOL)shouldPerformRMS;
-(NSInteger)trainUtterance:(NSInteger)arg0 shouldUseASR:(BOOL)arg1 completion:(id)arg2 ;
-(id)cleanupWithCompletion:(id)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 withAudioSession:(id)arg1 withAppDomain:(id)arg2 ;
-(void)CSVTUITrainingSessionRMSAvailable:(float)arg0 ;
-(void)CSVTUITrainingSessionStopListen;
-(void)_beginOfSpeechDetected;
-(void)_destroyAudioSession;
-(void)_endOfSpeechDetected;
-(void)audioSessionDidStartRecording:(BOOL)arg0 error:(id)arg1 ;
-(void)audioSessionDidStopRecording:(NSInteger)arg0 ;
-(void)audioSessionErrorDidOccur:(id)arg0 ;
-(void)audioSessionRecordBufferAvailable:(id)arg0 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)closeSessionBeforeStartWithStatus:(int)arg0 successfully:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)createSpeechRecognizer;
-(void)destroySpeakerTrainer;
-(void)didDetectForceEndPoint;
-(void)endpointer:(id)arg0 didDetectHardEndpointAtTime:(CGFloat)arg1 ;
-(void)endpointer:(id)arg0 didDetectStartpointAtTime:(CGFloat)arg1 ;
-(void)prepareWithCompletion:(id)arg0 ;
-(void)reset;
-(void)setLocaleIdentifier:(id)arg0 ;
-(void)startRMS;
-(void)stopRMS;


@end


#endif