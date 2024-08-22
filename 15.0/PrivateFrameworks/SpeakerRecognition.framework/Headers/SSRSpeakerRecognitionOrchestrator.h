// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRSPEAKERRECOGNITIONORCHESTRATOR_H
#define SSRSPEAKERRECOGNITIONORCHESTRATOR_H

@class NSDictionary, NSString;
@protocol SSRSpeakerRecognizerDelegate, SSRVoiceActivityDetectorDelegate, SSRSpeakerRecognitionOrchestratorDelegate, SSRSpeakerRecognizer, OS_dispatch_queue, CSAudioFileWriter, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "SSRSpeakerRecognitionContext.h"
#import "SSRVoiceActivityDetector.h"

@interface SSRSpeakerRecognitionOrchestrator : NSObject <SSRSpeakerRecognizerDelegate, SSRVoiceActivityDetectorDelegate>

 {
    CGFloat _lastScoreReportTimeStamp;
    CGFloat _lastSegmentStartTime;
    NSUInteger _segmentCounter;
    NSUInteger _numSamplesAddedToSpeakerRecognizers;
    BOOL _endAudioCalled;
    BOOL _startPointReported;
}


@property (retain, nonatomic) NSDictionary *combinedScores; // ivar: _combinedScores
@property (retain, nonatomic) SSRSpeakerRecognitionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *debugUtteranceAudioFilePath; // ivar: _debugUtteranceAudioFilePath
@property (retain, nonatomic) NSString *debugUtteranceJsonFilePath; // ivar: _debugUtteranceJsonFilePath
@property (weak, nonatomic) NSObject<SSRSpeakerRecognitionOrchestratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger myriadResult; // ivar: _myriadResult
@property (retain, nonatomic) NSDictionary *psrFinalSpeakerInfo; // ivar: _psrFinalSpeakerInfo
@property (retain, nonatomic) NSDictionary *psrLastSpeakerInfo; // ivar: _psrLastSpeakerInfo
@property (retain, nonatomic) NSObject<SSRSpeakerRecognizer> *psrRecognizer; // ivar: _psrRecognizer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSDictionary *satFinalSpeakerInfo; // ivar: _satFinalSpeakerInfo
@property (retain, nonatomic) NSDictionary *satLastSpeakerInfo; // ivar: _satLastSpeakerInfo
@property (retain, nonatomic) NSObject<SSRSpeakerRecognizer> *satRecognizer; // ivar: _satRecognizer
@property (retain, nonatomic) NSObject<CSAudioFileWriter> *ssrUttLogger; // ivar: _ssrUttLogger
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *transDesc; // ivar: _transDesc
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (retain, nonatomic) SSRVoiceActivityDetector *vad; // ivar: _vad


-(id)getLatestVoiceRecognitionInfo;
-(id)initWithContext:(id)arg0 withDelegate:(id)arg1 error:(*id)arg2 ;
-(id)orchestratorScoresWithPSRScores:(id)arg0 withSATScores:(id)arg1 withSegmentStartTime:(CGFloat)arg2 ;
-(id)resetWithContext:(id)arg0 ;
-(void)SSRVoiceActivityDetector:(id)arg0 didDetectEndPointAt:(NSUInteger)arg1 ;
-(void)SSRVoiceActivityDetector:(id)arg0 didDetectStartPointAt:(NSUInteger)arg1 ;
-(void)_logSpeakerIdProcessorScoreDelayWithScoreInfo:(id)arg0 hasFinished:(BOOL)arg1 ;
-(void)_resetWithContext:(id)arg0 ;
-(void)dealloc;
-(void)endAudio;
-(void)processAudio:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)speakerRecognizer:(id)arg0 hasSpeakerIdInfo:(id)arg1 ;
-(void)speakerRecognizerFinishedProcessing:(id)arg0 withFinalSpeakerIdInfo:(id)arg1 ;
-(void)updateDebugFilePathsForSegment:(NSUInteger)arg0 ;


@end


#endif