// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMOVIECURATIONANALYZER_H
#define VCPMOVIECURATIONANALYZER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "VCPVideoKeyFrameAnalyzer.h"
#import "VCPMovieHighlightAnalyzer.h"
#import "VCPFrameAnalysisStats.h"

@interface VCPMovieCurationAnalyzer : NSObject {
    VCPVideoKeyFrameAnalyzer *_keyFrameAnalyzer;
    VCPMovieHighlightAnalyzer *_highlightAnalyzer;
    NSArray *_descriptorResults;
    NSArray *_qualityResuls;
    NSArray *_junkResults;
    NSArray *_faceResults;
    NSArray *_petsResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_audioQualityResults;
    NSArray *_sceneResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_saliencyResults;
    NSArray *_orientationResults;
    NSArray *_mlHighlightScoreResults;
    NSArray *_mlQualityResults;
    NSDictionary *_faceRanges;
    ? _timeRange;
    CGSize _frameSize;
    VCPFrameAnalysisStats *_frameStats;
    BOOL _isLivePhoto;
    BOOL _hadFlash;
    BOOL _hadZoom;
}




+(BOOL)isSettlingEffectPregatingEnabled;
-(id)audioQualityScore:(struct ? )arg0 ;
-(id)initWithAnalysisTypes:(NSUInteger)arg0 transform:(struct CGAffineTransform )arg1 timeRange:(struct ? )arg2 isLivePhoto:(BOOL)arg3 photoOffset:(float)arg4 frameStats:(id)arg5 hadFlash:(BOOL)arg6 hadZoom:(BOOL)arg7 keyFrameResults:(id)arg8 isTimelapse:(BOOL)arg9 preferredTimeRange:(struct ? )arg10 asset:(id)arg11 ;
-(id)results;
-(int)analyzeKeyFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)generateMovieCurations;
-(int)postProcessKeyFrames;
-(void)addHighlight:(id)arg0 to:(id)arg1 ;
-(void)addSettling:(id)arg0 to:(id)arg1 ;
-(void)addSummary:(id)arg0 to:(id)arg1 ;
-(void)loadVideoAnalysisResults:(id)arg0 audioAnalysisResults:(id)arg1 videoCNNResults:(id)arg2 andFaceRanges:(id)arg3 frameSize:(struct CGSize )arg4 ;
-(void)reportMovieCurationAnalysisResults:(id)arg0 withSummaryAnalytics:(id)arg1 ;
-(void)setMaxHighlightDuration:(float)arg0 ;


@end


#endif