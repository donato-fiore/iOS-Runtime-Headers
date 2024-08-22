// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOCNNANALYZER_H
#define VCPVIDEOCNNANALYZER_H

@class NSMutableArray, NSString;


#import "VCPVideoAnalyzer.h"
#import "VCPVideoCNNBackbone.h"
#import "VCPVideoPersonDetector.h"
#import "VCPVideoCNNAutoplay.h"

@interface VCPVideoCNNAnalyzer : VCPVideoAnalyzer {
    VCPVideoCNNBackbone *_backbone;
    NSMutableArray *_tasks;
    NSMutableArray *_postTasks;
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
    CGRect _regionCrop;
    ? _timeEnd;
    BOOL _postInference;
}




+(BOOL)forcePersonDetection;
-(id)initWithTimeOfInteret:(id)arg0 frameRate:(float)arg1 phFaces:(id)arg2 timeRange:(struct ? )arg3 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)configForAspectRatio:(float)arg0 ;
-(int)copyImage:(struct __CVBuffer *)arg0 withChannels:(int)arg1 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)loadAnalysisResults:(id)arg0 audioResults:(id)arg1 ;
-(int)runTasks:(struct ? )arg0 duration:(struct ? )arg1 persons:(id)arg2 regionCrop:(struct CGRect )arg3 ;
-(struct __CVBuffer *)cropAndScale:(struct __CVBuffer *)arg0 regionCrop:(struct CGRect )arg1 ;
-(void)dealloc;


@end


#endif