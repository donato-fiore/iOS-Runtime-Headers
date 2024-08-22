// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOKEYFRAMEANALYZER_H
#define VCPVIDEOKEYFRAMEANALYZER_H

@class NSDictionary, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPImageBlurAnalyzer.h"
#import "VCPImageFaceQualityAnalyzer.h"
#import "VCPVideoKeyFrame.h"
#import "VCPFrameAnalysisStats.h"

@interface VCPVideoKeyFrameAnalyzer : NSObject {
    VCPImageBlurAnalyzer *_blurAnalyzer;
    VCPImageFaceQualityAnalyzer *_faceQualityAnalyzer;
    NSDictionary *_faceRanges;
    NSArray *_junkResults;
    NSMutableArray *_keyFrames;
    ? _timeRange;
    VCPVideoKeyFrame *_activeKeyFrame;
    VCPFrameAnalysisStats *_frameStats;
    BOOL _isLivePhoto;
    NSMutableArray *_keyFrameScores;
    NSArray *_inputKeyFrameResults;
}




-(float)computeMinDistanceBetween:(id)arg0 withSet:(id)arg1 ;
-(id)initWithTransform:(struct CGAffineTransform )arg0 timeRange:(struct ? )arg1 isLivePhoto:(BOOL)arg2 frameStats:(id)arg3 keyFrameResults:(id)arg4 ;
-(id)keyFrameScores;
-(id)keyFrames;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 ;
-(int)computeFaceQualityOfFrame:(struct __CVBuffer *)arg0 ;
-(int)computeSharpnessOfFrame:(struct __CVBuffer *)arg0 ;
-(int)finalizeKeyFrame;
-(int)loadKeyFrameResults:(struct ? )arg0 ;
-(int)postProcess;
-(void)adjustScoreByFace;
-(void)modulateByExposure;
-(void)modulateByJunk;
-(void)modulateByTimeRange;
-(void)prepareFrameStats:(struct ? )arg0 ;
-(void)preparePostProcessingStatsFromFaceRange:(id)arg0 junkResults:(id)arg1 ;
-(void)setBlurAnalyzerFaceResults:(id)arg0 ;
-(void)setKeyFrameTime:(struct ? )arg0 isHeadingFrame:(BOOL)arg1 ;


@end


#endif