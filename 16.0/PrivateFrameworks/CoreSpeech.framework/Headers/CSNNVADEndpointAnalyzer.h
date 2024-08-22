// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSNNVADENDPOINTANALYZER_H
#define CSNNVADENDPOINTANALYZER_H

@class AVAudioFormat, NSString, SNAudioStreamAnalyzer;
@protocol SNResultsObserving, CSEndpointAnalyzerImpl, CSAudioFileWriter, CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSNNVADEndpointAnalyzer : NSObject <SNResultsObserving, CSEndpointAnalyzerImpl>



@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (nonatomic) NSUInteger anchorMachAbsTime; // ivar: _anchorMachAbsTime
@property (retain, nonatomic) NSObject<CSAudioFileWriter> *audioFileWriter; // ivar: _audioFileWriter
@property (nonatomic) CGFloat automaticEndpointingSuspensionEndTime; // ivar: _automaticEndpointingSuspensionEndTime
@property (nonatomic) CGFloat bypassSamples;
@property (readonly, nonatomic) BOOL canProcessCurrentRequest;
@property (retain, nonatomic) AVAudioFormat *currentRequestAudioFormat; // ivar: _currentRequestAudioFormat
@property (nonatomic) NSUInteger currentRequestSampleRate; // ivar: _currentRequestSampleRate
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (weak, nonatomic) NSObject<CSEndpointAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didEnterTwoshot; // ivar: _didEnterTwoshot
@property (readonly, nonatomic) CGFloat elapsedTimeWithNoSpeech;
@property (nonatomic) CGFloat endWaitTime; // ivar: _endWaitTime
@property (nonatomic) NSInteger endpointMode; // ivar: _endpointMode
@property (nonatomic) NSInteger endpointStyle; // ivar: _endpointStyle
@property (readonly, nonatomic) NSString *endpointerModelVersion;
@property (nonatomic) BOOL finishedSkippingSamplesForVT; // ivar: _finishedSkippingSamplesForVT
@property (nonatomic) CGFloat firstAudioSampleSensorTimestamp; // ivar: _firstAudioSampleSensorTimestamp
@property (nonatomic) NSInteger firstSampleId; // ivar: _firstSampleId
@property (nonatomic) NSUInteger framePosition; // ivar: _framePosition
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSEndpointAnalyzerImplDelegate> *implDelegate; // ivar: _implDelegate
@property (nonatomic) CGFloat interspeechWaitTime; // ivar: _interspeechWaitTime
@property (nonatomic) BOOL isAnchorTimeBuffered; // ivar: _isAnchorTimeBuffered
@property (nonatomic) BOOL isRequestTimeout; // ivar: _isRequestTimeout
@property (readonly, nonatomic) CGFloat lastEndOfVoiceActivityTime; // ivar: _lastEndOfVoiceActivityTime
@property (readonly, nonatomic) CGFloat lastStartOfVoiceActivityTime; // ivar: _lastStartOfVoiceActivityTime
@property (retain, nonatomic) NSString *mhId; // ivar: _mhId
@property (nonatomic) CGFloat minimumDurationForEndpointer; // ivar: _minimumDurationForEndpointer
@property (nonatomic) CGFloat nnvadAudioOriginInMs; // ivar: _nnvadAudioOriginInMs
@property (nonatomic) NSUInteger nnvadState; // ivar: _nnvadState
@property (nonatomic) NSUInteger numSamplesProcessedBeforeAnchorTime; // ivar: _numSamplesProcessedBeforeAnchorTime
@property (nonatomic) NSUInteger numSamplesReceived; // ivar: _numSamplesReceived
@property (nonatomic) NSUInteger numSamplesSkippedForVT; // ivar: _numSamplesSkippedForVT
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL saveSamplesSeenInReset; // ivar: _saveSamplesSeenInReset
@property (nonatomic) BOOL shouldDetectTwoShot; // ivar: _shouldDetectTwoShot
@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer; // ivar: _snAudioStreamAnalyzer
@property (nonatomic) CGFloat startWaitTime; // ivar: _startWaitTime
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger vtEndInSampleCount; // ivar: _vtEndInSampleCount
@property (nonatomic) CGFloat vtEndInSecs; // ivar: _vtEndInSecs
@property (nonatomic) CGFloat vtExtraAudioAtStartInMs; // ivar: _vtExtraAudioAtStartInMs


+(id)timeStampString;
-(BOOL)_shouldEnterTwoShotAtAudioTimeInSecs:(CGFloat)arg0 ;
-(CGFloat)_effectiveAudioTimeInSecsForSNObservation:(id)arg0 ;
-(CGFloat)_trailingSilenceDurationAtEndpoint;
-(id)_pcmBufferForAudioChunk:(id)arg0 ;
-(id)init;
-(void)_checkSNObservationForEndpoint:(id)arg0 ;
-(void)_checkSNObservationForStartpoint:(id)arg0 ;
-(void)_emitEndpointDetectedEventWithEndpointTime:(CGFloat)arg0 endpointBufferHostTime:(NSUInteger)arg1 ;
-(void)_reportEndpointAtTsInSecs:(CGFloat)arg0 ;
-(void)_reportStartpointAtTsInSecs:(CGFloat)arg0 ;
-(void)_reportTwoShotAtTsInSecs:(CGFloat)arg0 ;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg0 ;
-(void)preheat;
-(void)processAudioSamplesAsynchronously:(id)arg0 ;
-(void)recordingStoppedForReason:(NSInteger)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)reset;
-(void)resetForNewRequestWithSampleRate:(NSUInteger)arg0 recordContext:(id)arg1 ;
-(void)stopEndpointer;


@end


#endif