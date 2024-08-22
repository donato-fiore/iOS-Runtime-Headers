// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPLIGHTMOTIONANALYZER_H
#define VCPLIGHTMOTIONANALYZER_H

@protocol OS_dispatch_queue;


#import "VCPVideoAnalyzer.h"

@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer {
    *void _encodeAnalysis;
    NSObject<OS_dispatch_queue> *_queue;
    Frame _frame;
    *EncodeStatsHW _stats;
    float _cameraMotionParams;
    float _cameraMotionConfidences;
    NSUInteger _flags;
    BOOL _turbo;
}


@property (readonly) float actionScore; // ivar: _actionScore
@property (readonly) float motionDivScore; // ivar: _motionDivScore


+(float)autoLiveMotionScore:(id)arg0 ;
-(?)computeMotionDivScore;
-(id)init;
-(id)initWithQueue:(id)arg0 turbo:(BOOL)arg1 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)cameraMotionDetection:(*void)arg0 ;
-(int)generateThresholds:(float)arg0 withConfidences:(float)arg1 ;
-(int)prewarmWithWidth:(int)arg0 height:(int)arg1 ;
-(void)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 completion:(id)arg3 ;
-(void)dealloc;


@end


#endif