// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOFULLFACEDETECTOR_H
#define VCPVIDEOFULLFACEDETECTOR_H

@class NSArray, NSMutableDictionary, NSMutableArray;


#import "VCPVideoFaceDetector.h"
#import "VCPCNNSmileDetector.h"
#import "VCPCNNPoseEstimator.h"
#import "VCPFrameAnalysisStats.h"

@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector {
    int _latestTrackID;
    VCPCNNSmileDetector *_smileDetector;
    VCPCNNPoseEstimator *_poseEstimator;
    NSArray *_existingFaceprints;
    VCPFrameAnalysisStats *_frameStats;
    float _latestFrameArea;
    ? _timeLastTracking;
    NSMutableDictionary *_faceTrackers;
    NSMutableDictionary *_keyFaces;
    NSMutableArray *_reservedIDs;
    NSMutableDictionary *_facePrints;
    NSMutableArray *_allFaces;
    NSMutableDictionary *_faceRanges;
    NSMutableArray *_frameFaceResults;
}




-(BOOL)compareFace:(id)arg0 withFace:(id)arg1 ;
-(BOOL)locationChange:(struct CGRect )arg0 relativeTo:(struct CGRect )arg1 landscape:(BOOL)arg2 ;
-(float)minProcessTimeIntervalInSecs;
-(id)faceRanges;
-(id)frameFaceResults;
-(id)initWithTransform:(struct CGAffineTransform )arg0 ;
-(id)initWithTransform:(struct CGAffineTransform )arg0 withExistingFaceprints:(id)arg1 frameStats:(id)arg2 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)clusterFaces;
-(int)detectFaces:(struct __CVBuffer *)arg0 faces:(id)arg1 ;
-(int)detectTrackFacesInFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 faces:(id)arg2 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)updateWithExistingFaces;
-(void)dealloc;
-(void)removeSmallestKeyFace;


@end


#endif