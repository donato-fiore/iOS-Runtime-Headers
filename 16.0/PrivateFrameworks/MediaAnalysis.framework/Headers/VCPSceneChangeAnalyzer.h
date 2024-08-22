// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPSCENECHANGEANALYZER_H
#define VCPSCENECHANGEANALYZER_H

@class NSMutableArray;


#import "VCPVideoAnalyzer.h"
#import "VCPSceneChangeSegment.h"

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {
    float _sceneDeltaBuffer;
    FrameBuffer _frameBuffer;
    VCPSceneChangeSegment *_activeSegment;
    NSMutableArray *_sceneSegments;
    BOOL _verbose;
    BOOL _firstFrame;
    ? _frameTimeRange;
    BOOL _currentStatus;
    BOOL _isSegmentPoint;
}




-(BOOL)decideLensSwitchPoint:(*void)arg0 ;
-(BOOL)isSegmentPoint;
-(id)init;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)finalizeAnalysisPass:(struct ? )arg0 ;
-(void)ComputeSceneDelta:(*void)arg0 ;
-(void)PrintSegments;


@end


#endif