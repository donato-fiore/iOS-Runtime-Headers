// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOFACEMESHANALYZER_H
#define VCPVIDEOFACEMESHANALYZER_H

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "VCPRTLandmarkDetector.h"
#import "VCPFaceShapeModel.h"

@interface VCPVideoFaceMeshAnalyzer : NSObject {
    int _faceCount;
    CGRect _faceBounds;
    BOOL _inDetectionMode;
    VCPRTLandmarkDetector *_lmDetector;
    VCPRTLandmarkDetector *_lmTracker;
    *float _prevLM;
    *float _curLM;
    int _detectionModeCounter;
    int _trackingModeCounter;
    int _lostTrackCounter;
    BOOL _angleStable;
    float _validationScore;
    BOOL _validateFailedOnce;
    NSObject<OS_dispatch_queue> *_validationQueue;
    NSObject<OS_dispatch_group> *_validationGroup;
    *__CVBuffer _valBuffer;
    *__CVBuffer _valBufferRotated;
    *float _valAngle;
    *float _valLM;
    ? _meshVertices;
    VCPFaceShapeModel *_shapeModel;
    VCPLandmarkValidator" _faceValidator;
    float _eulerAngle;
    float _focalLengthInPixels;
    float _uc;
    float _vc;
    BOOL _offline;
    BOOL _initialized;
}


@property (readonly, nonatomic) NSDictionary *blendShapes; // ivar: _blendShapes
@property (readonly, nonatomic) BOOL bufferRotated; // ivar: _bufferRotated
@property (readonly, nonatomic) *float landmarks;
@property (readonly, nonatomic) ? pose; // ivar: _pose
@property (readonly, nonatomic) NSUInteger vertexCount; // ivar: _vertexCount
@property ? vertices;


-(BOOL)updateFocalLengthInPixels:(float)arg0 ;
-(id)initWithFocalLengthInPixels:(float)arg0 offline:(BOOL)arg1 isFastMode:(BOOL)arg2 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withFaceRect:(struct CGRect )arg1 withRotation:(int)arg2 withTimestamp:(struct ? )arg3 ;
-(int)checkResolutionChange:(struct __CVBuffer *)arg0 withRotation:(int)arg1 ;
-(int)validateFace:(struct __CVBuffer *)arg0 eulerAngles:(*float)arg1 ;
-(void)rotateLandmarks:(int)arg0 width:(int)arg1 height:(int)arg2 landmarks:(*float)arg3 numLandmarks:(int)arg4 ;


@end


#endif