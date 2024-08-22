// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOCNNANALYZER_H
#define VCPVIDEOCNNANALYZER_H

@class NSMutableArray, NSString;


#import "VCPVideoAnalyzer.h"
#import "VCPVideoCNNBackbone.h"
#import "VCPTransforms.h"
#import "VCPVideoPersonDetector.h"
#import "VCPVideoCNNAutoplay.h"
#import "VCPVideoCNNCameraMotion.h"
#import "VCPVideoCNNQuality.h"
#import "VCPVideoCNNHighlight.h"

@interface VCPVideoCNNAnalyzer : VCPVideoAnalyzer {
    VCPVideoCNNBackbone *_backbone;
    VCPTransforms *_transformImage;
    NSMutableArray *_tasks;
    NSMutableArray *_postTasks;
    NSMutableArray *_privateTasks;
    *float _inputData;
    int _inputWidth;
    int _inputHeight;
    ? _timeLastProcess;
    ? _timeLastDetection;
    ? _timeStart;
    int _validFrames;
    BOOL _enoughFrames;
    VCPVideoPersonDetector *_personDetector;
    NSString *_resConfig;
    VCPVideoCNNAutoplay *_autoplay;
    VCPVideoCNNCameraMotion *_cameraMotion;
    VCPVideoCNNQuality *_quality;
    VCPVideoCNNHighlight *_highlight;
    CGRect _regionCrop;
    ? _timeEnd;
    BOOL _postInference;
}




+(BOOL)forcePersonDetection;
+(BOOL)isMLHighlightEnabled;
-(id)initWithTimeOfInteret:(id)arg0 frameRate:(float)arg1 isLivePhoto:(BOOL)arg2 phFaces:(id)arg3 timeRange:(struct ? )arg4 requestedAnalyses:(NSUInteger)arg5 ;
-(id)privateResults;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)configForAspectRatio:(float)arg0 ;
-(int)copyImage:(struct __CVBuffer *)arg0 withChannels:(int)arg1 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)loadAnalysisResults:(id)arg0 audioResults:(id)arg1 ;
-(int)loadAnalysisResultsFrom:(id)arg0 actionAnalyzer:(id)arg1 atTime:(struct ? )arg2 ;
-(int)runTasks:(struct ? )arg0 duration:(struct ? )arg1 persons:(id)arg2 regionCrop:(struct CGRect )arg3 ;
-(struct ? )isAnalysisResultNeeded:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif