// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOLIGHTFACEDETECTOR_H
#define VCPVIDEOLIGHTFACEDETECTOR_H



#import "VCPVideoFaceDetector.h"
#import "VCPFrameAnalysisStats.h"
#import "VCPVideoFaceMeshAnalyzer.h"

@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector {
    int _lastestFaceID;
    int _numFacesLastFrame;
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;
    *float _lastVertices;
    float _lastJawOpenness;
}




-(float)minProcessTimeIntervalInSecs;
-(id)initWithTransform:(struct CGAffineTransform )arg0 frameStats:(id)arg1 faceDominated:(BOOL)arg2 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)detectFaces:(struct __CVBuffer *)arg0 faces:(id)arg1 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif