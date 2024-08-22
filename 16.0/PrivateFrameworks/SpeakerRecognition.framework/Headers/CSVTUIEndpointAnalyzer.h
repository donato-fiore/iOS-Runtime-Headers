// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVTUIENDPOINTANALYZER_H
#define CSVTUIENDPOINTANALYZER_H

@class AVAudioFormat, NSString, SNAudioStreamAnalyzer;
@protocol SNResultsObserving, CSAudioFileWriter, CSVTUIEndpointAnalyzerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVTUIEndpointAnalyzer : NSObject <SNResultsObserving>



@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (nonatomic) NSUInteger anchorMachAbsTime; // ivar: _anchorMachAbsTime
@property (retain, nonatomic) NSObject<CSAudioFileWriter> *audioFileWriter; // ivar: _audioFileWriter
@property (retain, nonatomic) AVAudioFormat *currentRequestAudioFormat; // ivar: _currentRequestAudioFormat
@property (nonatomic) NSUInteger currentRequestSampleRate; // ivar: _currentRequestSampleRate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVTUIEndpointAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didEnterTwoshot; // ivar: _didEnterTwoshot
@property (nonatomic) CGFloat endWaitTime; // ivar: _endWaitTime
@property (nonatomic) BOOL finishedSkippingSamplesForVT; // ivar: _finishedSkippingSamplesForVT
@property (nonatomic) CGFloat firstAudioSampleSensorTimestamp; // ivar: _firstAudioSampleSensorTimestamp
@property (nonatomic) NSInteger firstSampleId; // ivar: _firstSampleId
@property (nonatomic) NSUInteger framePosition; // ivar: _framePosition
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnchorTimeBuffered; // ivar: _isAnchorTimeBuffered
@property (nonatomic) CGFloat nnvadAudioOriginInMs; // ivar: _nnvadAudioOriginInMs
@property (nonatomic) NSUInteger nnvadState; // ivar: _nnvadState
@property (nonatomic) NSUInteger numSamplesProcessedBeforeAnchorTime; // ivar: _numSamplesProcessedBeforeAnchorTime
@property (nonatomic) NSUInteger numSamplesReceived; // ivar: _numSamplesReceived
@property (nonatomic) NSUInteger numSamplesSkippedForVT; // ivar: _numSamplesSkippedForVT
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL shouldDetectTwoShot; // ivar: _shouldDetectTwoShot
@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer; // ivar: _snAudioStreamAnalyzer
@property (nonatomic) CGFloat startWaitTime; // ivar: _startWaitTime
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger vtEndInSampleCount; // ivar: _vtEndInSampleCount
@property (nonatomic) CGFloat vtEndInSecs; // ivar: _vtEndInSecs
@property (nonatomic) CGFloat vtExtraAudioAtStartInMs; // ivar: _vtExtraAudioAtStartInMs


+(id)timeStampString;
-(CGFloat)_effectiveAudioTimeInSecsForSNObservation:(id)arg0 ;
-(id)_pcmBufferForAudioChunk:(id)arg0 ;
-(id)init;
-(void)_checkSNObservationForEndpoint:(id)arg0 ;
-(void)_checkSNObservationForStartpoint:(id)arg0 ;
-(void)_reportEndpointAtTsInSecs:(CGFloat)arg0 ;
-(void)_reportStartpointAtTsInSecs:(CGFloat)arg0 ;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg0 ;
-(void)processAudioSamplesAsynchronously:(id)arg0 ;
-(void)recordingStoppedForReason:(NSInteger)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)resetForNewRequestWithSampleRate:(NSUInteger)arg0 ;
-(void)stopEndpointer;


@end


#endif