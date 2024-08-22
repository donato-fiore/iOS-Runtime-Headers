// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMOVIEHIGHLIGHTANALYZER_H
#define VCPMOVIEHIGHLIGHTANALYZER_H

@class NSArray, NSMutableArray, AVAssetImageGenerator;

#import <Foundation/Foundation.h>

#import "VCPColorNormalizationAnalyzer.h"

@interface VCPMovieHighlightAnalyzer : NSObject {
    NSArray *_junkResults;
    NSArray *_qualityResults;
    NSArray *_faceResults;
    NSArray *_petsResults;
    NSArray *_saliencyResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_featureResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_keyFrameResults;
    NSArray *_sceneResults;
    NSArray *_orientationResults;
    NSArray *_mlHighlightScoreResults;
    NSArray *_mlQualityResults;
    NSMutableArray *_expressionSegments;
    NSMutableArray *_internalResults;
    NSMutableArray *_highlightResults;
    NSMutableArray *_internalConstraintResults;
    CGSize _frameSize;
    float _maxDurationInSeconds;
    float _minDurationInSeconds;
    float _targetDurationInSeconds;
    float _toleranceInSeconds;
    int _targetHighlightIndex;
    ? _startRange;
    BOOL _isMaxTrim;
    BOOL _requestBestTrim;
    BOOL _requestFullResult;
    float _maxHighlightScore;
    float _minHighlightScore;
    BOOL _isLivePhoto;
    float _photoOffset;
    BOOL _verbose;
    BOOL _hadFlash;
    BOOL _hadZoom;
    BOOL _isTimelapse;
    ? _preferredTimeRange;
    AVAssetImageGenerator *_imageGenerator;
    int _numberOfFrames;
    array<float, 6UL> _prevMotionParamDiff;
    array<float, 6UL> _sumMotionParam;
    array<float, 6UL> _diffFlipCount;
    VCPColorNormalizationAnalyzer *_colorNormalizationAnalyzer;
}




+(float)getMinimumHighlightInSec;
-(BOOL)addSegment:(id)arg0 ;
-(BOOL)checkCameraZoom:(struct ? )arg0 ;
-(BOOL)isGoodQuality:(struct ? )arg0 ;
-(BOOL)updateCropHeatMap:(*float)arg0 withResults:(id)arg1 timeRange:(struct ? )arg2 resultsKey:(id)arg3 ;
-(float)actionScoreForTimerange:(struct ? )arg0 ;
-(float)analyzeOverallQuality:(struct ? )arg0 isSettlingEffect:(BOOL)arg1 ;
-(float)cameraMotionScoreForTimerange:(struct ? )arg0 ;
-(float)computeActionScoreInTimerange:(struct ? )arg0 ;
-(float)computeExpressionScoreInTimerange:(struct ? )arg0 ;
-(float)computeHighlightScoreOfRange:(struct ? )arg0 ;
-(float)computeHumanActionScoreInTimerange:(struct ? )arg0 ;
-(float)computeHumanPoseScoreInTimerange:(struct ? )arg0 ;
-(float)computeMLHighlightScoreForTimerange:(struct ? )arg0 ;
-(float)computeMLQualityScoreForTimerange:(struct ? )arg0 ;
-(float)computeSubtleMotionScoreInTimerange:(struct ? )arg0 ;
-(float)computeVoiceScoreInTimeRange:(struct ? )arg0 ;
-(float)expressionScoreForTimerange:(struct ? )arg0 ;
-(float)highlightScoreForTimeRange:(struct ? )arg0 average:(BOOL)arg1 ;
-(float)junkScoreForTimerange:(struct ? )arg0 lengthScale:(BOOL)arg1 ;
-(float)qualityScoreForTimerange:(struct ? )arg0 ;
-(float)settlingExposureChangeScore:(struct ? )arg0 ;
-(float)settlingMotionScore:(struct ? )arg0 ;
-(float)settlingSubjectScore:(struct ? )arg0 ;
-(float)subtleMotionScoreForTimerange:(struct ? )arg0 ;
-(float)visualPleasingScoreForTimerange:(struct ? )arg0 ;
-(float)voiceScoreForTimerange:(struct ? )arg0 ;
-(id)findBestHighlightSegment:(struct ? )arg0 targetTrim:(BOOL)arg1 ;
-(id)highlightScoreResults;
-(id)initWithAnalysisType:(NSUInteger)arg0 isLivePhoto:(BOOL)arg1 photoOffset:(float)arg2 hadFlash:(BOOL)arg3 hadZoom:(BOOL)arg4 isTimelapse:(BOOL)arg5 preferredTimeRange:(struct ? )arg6 asset:(id)arg7 ;
-(id)initWithPostProcessOptions:(id)arg0 ;
-(id)maxTrimMovieHighlight:(id)arg0 ;
-(id)movieSummary;
-(id)pickKeyFramesInRange:(struct ? )arg0 ;
-(id)postProcessMovieHighlight:(id)arg0 ;
-(id)results;
-(id)settlingEffects;
-(id)targetExtendRange:(struct ? )arg0 maxRange:(struct ? )arg1 ;
-(id)targetMovieHighlight:(id)arg0 mergedRange:(struct ? )arg1 maxRange:(struct ? )arg2 ;
-(id)targetProcessRange:(struct ? )arg0 maxRange:(struct ? )arg1 ;
-(id)targetTrimRange:(struct ? )arg0 searchRange:(struct ? )arg1 ;
-(int)analyzeMotionStability:(struct array<float, 6UL> )arg0 motionParamDiff:(struct array<float, 6UL> )arg1 ;
-(int)combineMLHighlightScore;
-(int)computeColorNormalization;
-(int)computeHighlightScoreResults;
-(int)evaluateSegment:(id)arg0 ;
-(int)generateHighlights;
-(int)pickHighlightsFrom:(id)arg0 ;
-(int)postProcessMLHighlightScore;
-(int)prepareRequiredQualityResult:(id)arg0 junkDetectionResult:(id)arg1 descriptorResult:(id)arg2 faceResult:(id)arg3 petsResult:(id)arg4 saliencyResult:(id)arg5 actionResult:(id)arg6 subtleMotionResult:(id)arg7 voiceResult:(id)arg8 keyFrameResult:(id)arg9 sceneResults:(id)arg10 humanActionResults:(id)arg11 humanPoseResults:(id)arg12 cameraMotionResults:(id)arg13 orientationResults:(id)arg14 mlHighlightScoreResults:(id)arg15 mlQualityResults:(id)arg16 frameSize:(struct CGSize )arg17 ;
-(int)selectHighlights;
-(int)selectHighlightsForTimelapse;
-(struct ? )computeActionFaceTrimFor:(struct ? )arg0 ;
-(struct ? )computeQualityTrimFor:(struct ? )arg0 withKeyFrame:(BOOL)arg1 ;
-(struct ? )computeSteadyTranslationTrimFor:(struct ? )arg0 ;
-(struct ? )computeTrimWithHighlightScoreFor:(struct ? )arg0 ;
-(struct ? )findBestTrim:(struct ? )arg0 ;
-(struct CGRect )computeBestPlaybackCrop:(struct ? )arg0 ;
-(void)SetKeyFramesForSegments:(id)arg0 ;
-(void)computeHighlightScoreOfSegment:(id)arg0 ;
-(void)generateExpressionSegments:(struct ? )arg0 ;
-(void)loadHighlightScoreResults:(id)arg0 ;
-(void)searchFeatureVectorOfSegment:(id)arg0 ;
-(void)setMaxHighlightDuration:(float)arg0 ;


@end


#endif