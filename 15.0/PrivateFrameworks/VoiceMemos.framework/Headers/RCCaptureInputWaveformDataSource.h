// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCCAPTUREINPUTWAVEFORMDATASOURCE_H
#define RCCAPTUREINPUTWAVEFORMDATASOURCE_H

@class NSArray, NSString;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate, RCWaveformDataSourceObserver;


#import "RCWaveformDataSource.h"
#import "RCWaveform.h"
#import "RCCompositionWaveformDataSource.h"
#import "RCMutableComposition.h"
#import "RCMutableCompositionFragment.h"
#import "RCComposition.h"
#import "RCCompositionFragment.h"

@interface RCCaptureInputWaveformDataSource : RCWaveformDataSource <AVCaptureAudioDataOutputSampleBufferDelegate, RCWaveformDataSourceObserver>

 {
    CGFloat captureDelta;
}


@property (readonly, nonatomic) RCWaveform *baseWaveform; // ivar: _baseWaveform
@property (readonly, nonatomic) RCCompositionWaveformDataSource *baseWaveformDataSource; // ivar: _baseWaveformDataSource
@property (readonly, nonatomic) BOOL canUpdateCaptureComposition; // ivar: _canUpdateCaptureComposition
@property (readonly, nonatomic) NSArray *captureInitialDecomposedFragments; // ivar: _captureInitialDecomposedFragments
@property (readonly, nonatomic) CGFloat captureInsertionDurationInComposition; // ivar: _captureInsertionDurationInComposition
@property (readonly, nonatomic) CGFloat captureInsertionTimeInComposition; // ivar: _captureInsertionTimeInComposition
@property (readonly, nonatomic) RCMutableComposition *capturedComposition; // ivar: _capturedComposition
@property (readonly, nonatomic) RCMutableCompositionFragment *capturedFragment; // ivar: _capturedFragment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCComposition *destinationComposition; // ivar: _destinationComposition
@property (readonly, nonatomic) RCCompositionFragment *destinationFragment; // ivar: _destinationFragment
@property (readonly, nonatomic) CGFloat finalCapturedFragmentDuration; // ivar: _finalCapturedFragmentDuration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat updatedCapturedFragmentDuration; // ivar: _updatedCapturedFragmentDuration


-(BOOL)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg0 ;
-(BOOL)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)setPaused:(BOOL)arg0 ;
-(BOOL)shouldMergeLiveWaveform;
-(BOOL)waitUntilFinished;
-(BOOL)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(CGFloat)arg0 ;
-(CGFloat)_fragmentDuration;
-(CGFloat)duration;
-(id)_captureSegmentsInComponentWaveform:(id)arg0 captureTimeRange:(struct ? )arg1 componentWaveformSegmentOffset:(CGFloat)arg2 ;
-(id)initWithDestinationComposition:(id)arg0 destinationFragment:(id)arg1 ;
-(id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg0 ;
-(id)waveformSegmentsInTimeRange:(struct ? )arg0 ;
-(id)waveformSegmentsIntersectingTimeRange:(struct ? )arg0 ;
-(struct ? )timeRangeToHighlight;
-(void)_captureSesionCompletedWithFinalizedDuration:(CGFloat)arg0 ;
-(void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(CGFloat)arg0 ;
-(void)_initializeCaptureComposition;
-(void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(CGFloat)arg0 ;
-(void)_truncateAccumulatedWaveformSegmentsToEndTime:(CGFloat)arg0 ;
-(void)_updateCapturedComposition:(BOOL)arg0 ;
-(void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)arg0 ;
-(void)cancelLoading;
-(void)finishLoadingWithCompletionTimeout:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)finishLoadingWithCompletionTimeout:(NSUInteger)arg0 finalizedFragmentDuration:(CGFloat)arg1 completionBlock:(id)arg2 ;
-(void)flushPendingCapturedSampleBuffers;
-(void)startLoading;
-(void)undoCapture;
-(void)updateCapturedDelta:(CGFloat)arg0 ;
-(void)waveformDataSource:(id)arg0 didLoadWaveformSegment:(id)arg1 ;
-(void)waveformDataSourceDidFinishLoading:(id)arg0 ;
-(void)waveformDataSourceRequiresUpdate:(id)arg0 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg0 error:(id)arg1 ;


@end


#endif