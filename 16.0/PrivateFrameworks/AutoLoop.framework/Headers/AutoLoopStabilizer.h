// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUTOLOOPSTABILIZER_H
#define AUTOLOOPSTABILIZER_H

@class NSString, NSDictionary, AVAsset, NSArray, NSURL;
@protocol ICFlowControl;

#import <Foundation/Foundation.h>


@interface AutoLoopStabilizer : NSObject <ICFlowControl>



@property (nonatomic) float alwaysAcceptedTripodCropRatio; // ivar: alwaysAcceptedTripodCropRatio
@property (readonly, nonatomic) int analysisResult; // ivar: _analysisResult
@property int canceledAnalysis; // ivar: canceledAnalysis
@property (nonatomic) float confidenceHighQualityThreshold; // ivar: confidenceHighQualityThreshold
@property (nonatomic) float cropRatioMinimum; // ivar: cropRatioMinimum
@property (readonly, nonatomic) CGRect cropRect; // ivar: cropRect
@property (retain) NSString *currentStatusString; // ivar: currentStatusString
@property (nonatomic) BOOL didDrop; // ivar: _didDrop
@property (nonatomic) BOOL disableGPUStabilization; // ivar: _disableGPUStabilization
@property BOOL doLoopClosureCorrection; // ivar: doLoopClosureCorrection
@property (nonatomic) BOOL drawFeaturesFlag; // ivar: drawFeaturesFlag
@property (nonatomic) NSInteger droppedEndFrameCount; // ivar: droppedEndFrameCount
@property (nonatomic) NSInteger droppedStartFrameCount; // ivar: droppedStartFrameCount
@property (retain) NSDictionary *featuresDictionary; // ivar: featuresDictionary
@property (nonatomic) ? firstFrameTimeAfterDrop; // ivar: _firstFrameTimeAfterDrop
@property (nonatomic) NSUInteger frameSearchLength; // ivar: frameSearchLength
@property (readonly, nonatomic) *void icCorrectionResultRef; // ivar: icCorrectionResultRef
@property (readonly, nonatomic) CGSize inputMovieDimensions; // ivar: inputMovieDimensions
@property (nonatomic) ? lastFrameTimeAfterDrop; // ivar: _lastFrameTimeAfterDrop
@property (readonly, nonatomic) int lastStabilizationResult; // ivar: _lastStabilizationResult
@property (readonly) float lastTripodQuality; // ivar: _lastTripodQuality
@property (nonatomic) ? maxAllowedTrimTimeEnd; // ivar: _maxAllowedTrimTimeEnd
@property (nonatomic) ? maxAllowedTrimTimeStart; // ivar: _maxAllowedTrimTimeStart
@property (nonatomic) float minAllowedRemainingTripodCrop; // ivar: _minAllowedRemainingTripodCrop
@property (nonatomic) float minConfidenceForTripodAccept; // ivar: minConfidenceForTripodAccept
@property (nonatomic) ? minimumFrameDuration; // ivar: _minimumFrameDuration
@property (nonatomic) float minimumHighQualityConfidenceValue; // ivar: minimumHighQualityConfidenceValue
@property (retain, nonatomic) AVAsset *movieAssetIn; // ivar: movieAssetIn
@property (nonatomic) int naturalTimeScale; // ivar: _naturalTimeScale
@property (nonatomic) float necessaryCropGainFractionPerDroppedFrame; // ivar: necessaryCropGainFractionPerDroppedFrame
@property (nonatomic) BOOL onlyProcessForHighQualityTripod; // ivar: onlyProcessForHighQualityTripod
@property (nonatomic) BOOL optimizeProcessingForMemory; // ivar: _optimizeProcessingForMemory
@property (retain) NSArray *presentationTimesOfFramesToSkip; // ivar: _presentationTimesOfFramesToSkip
@property float progressValue; // ivar: progressValue
@property (nonatomic) ? refFrameTime; // ivar: refFrameTime
@property (retain, nonatomic) NSArray *skipFrameTimes; // ivar: _skipFrameTimes
@property (retain, nonatomic) NSURL *statsFileOutURL; // ivar: statsFileOutURL
@property (copy, nonatomic) id *statusUpdateBlock; // ivar: _statusUpdateBlock
@property (nonatomic) ? trimLength; // ivar: _trimLength
@property (nonatomic) ? trimStart; // ivar: _trimStart
@property (nonatomic) BOOL useLimitedTime; // ivar: _useLimitedTime


-(BOOL)CheckForTripodOKInHomographies:(*void)arg0 firstIndex:(NSUInteger)arg1 lastIndex:(NSUInteger)arg2 refIndex:(NSUInteger)arg3 cropRectOut:(struct CGRect *)arg4 minConfidence:(float)arg5 confidenceOut:(*float)arg6 ;
-(BOOL)CropRectValid:(struct CGRect *)arg0 ;
-(BOOL)ICShouldBeCanceled;
-(BOOL)getNaturalTimeScaleForVideoTrackInAsset;
-(BOOL)tripodOKWithTrimming:(*void)arg0 frameTimes:(*void)arg1 minConfidence:(float)arg2 ;
-(BOOL)updateStabilizerStatus;
-(NSUInteger)FindFrameIndexForReferenceTimeInHomographies:(*void)arg0 ;
-(float)CropRatio:(struct CGRect *)arg0 ;
-(id)getVideoTrack;
-(id)init;
-(int)FindAcceptableTripodSegmentForInput:(*void)arg0 frameTimes:(*void)arg1 ;
-(int)analyzeForAutoloopWithDirect:(BOOL)arg0 toAnalysisOutput:(**void)arg1 ;
-(int)processStabilizationAnalysis:(*void)arg0 forcePassThru:(BOOL)arg1 forceSmoothing:(BOOL)arg2 forceSequentialTripod:(BOOL)arg3 ;
-(int)processStabilizationAnalysisForCinematicL1:(*void)arg0 ;
-(struct ? )GetPreciseReferenceTimeFromHomographies:(*void)arg0 ;
-(struct ? )determinePreciseTimeRange;
-(void)ICReportProgress:(float)arg0 ;
-(void)dealloc;


@end


#endif