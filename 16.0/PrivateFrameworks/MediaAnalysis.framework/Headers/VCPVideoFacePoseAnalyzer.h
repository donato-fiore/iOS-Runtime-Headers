// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOFACEPOSEANALYZER_H
#define VCPVIDEOFACEPOSEANALYZER_H


#import <Foundation/Foundation.h>

#import "VCPCNNFaceLandmarkDetector.h"
#import "VCPPnPSolver.h"
#import "VCPVideoFacePoseFilter.h"

@interface VCPVideoFacePoseAnalyzer : NSObject {
    VCPCNNFaceLandmarkDetector *_landmarkDetector;
    VCPPnPSolver *_poseEstimator;
    VCPVideoFacePoseFilter *_filter;
    float _focalLengthInPixels;
    ? _lastTimestamp;
    int _width;
    int _height;
    float _points2D;
    float _points3D;
}


@property ? pose; // ivar: _pose


-(BOOL)updateFocalLengthInPixels:(float)arg0 ;
-(id)init;
-(id)initWithFocalLengthInPixels:(float)arg0 ;
-(int)analyzeFrameForPose:(struct __CVBuffer *)arg0 withFaceRect:(struct CGRect )arg1 withTimestamp:(struct ? )arg2 ;


@end


#endif