// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_sceneResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_saliencyResults;
    NSArray *_orientationResults;
    NSDictionary *_faceRanges;
    ? _timeRange;
    CGSize _frameSize;
    VCPFrameAnalysisStats *_frameStats;
    BOOL _isLivePhoto;
    BOOL _hadFlash;
    BOOL _hadZoom;
}




-(id)initWithAnalysisTypes:(NSUInteger)arg0 transform:(struct CGAffineTransform )arg1 timeRange:(struct ? )arg2 isLivePhoto:(BOOL)arg3 frameStats:(id)arg4 hadFlash:(BOOL)arg5 hadZoom:(BOOL)arg6 keyFrameResults:(id)arg7 isTimelapse:(BOOL)arg8 preferredTimeRange:(struct ? )arg9 asset:(id)arg10 ;
-(id)results;
-(int)analyzeKeyFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)generateMovieCurations;
-(int)postProcessKeyFrames;
-(void)addHighlight:(id)arg0 to:(id)arg1 ;
-(void)addSummary:(id)arg0 to:(id)arg1 ;
-(void)loadVideoAnalysisResults:(id)arg0 audioAnalysisResults:(id)arg1 andFaceRanges:(id)arg2 frameSize:(struct CGSize )arg3 ;
-(void)reportMovieCurationAnalysisResults:(id)arg0 withSummaryAnalytics:(id)arg1 ;
-(void)setMaxHighlightDuration:(float)arg0 ;


@end


#endif