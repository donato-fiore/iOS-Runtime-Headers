// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFRAMEANALYSISSTATS_H
#define VCPFRAMEANALYSISSTATS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPVideoActivityDescriptor.h"

@interface VCPFrameAnalysisStats : NSObject {
    array<float, 6UL> _motionParam;
    array<float, 6UL> _motionParamDiff;
}


@property (nonatomic) float cameraMotionScore; // ivar: _cameraMotionScore
@property (nonatomic) float colorfulnessScore; // ivar: _colorfulnessScore
@property (retain, nonatomic) NSMutableArray *detectedFaces; // ivar: _detectedFaces
@property (nonatomic) float exposureScore; // ivar: _exposureScore
@property (nonatomic) float faceArea; // ivar: _faceArea
@property (nonatomic) float frameExpressionScore; // ivar: _frameExpressionScore
@property (nonatomic) BOOL frameProcessedByFaceDetector; // ivar: _frameProcessedByFaceDetector
@property (nonatomic) BOOL frameProcessedByHumanAnalyzer; // ivar: _frameProcessedByHumanAnalyzer
@property (nonatomic) BOOL frameProcessedByPetsActionAnalyzer; // ivar: _frameProcessedByPetsActionAnalyzer
@property (nonatomic) BOOL frameProcessedByVideoAnalyzer; // ivar: _frameProcessedByVideoAnalyzer
@property (nonatomic) float humanActionScore; // ivar: _humanActionScore
@property (nonatomic) float humanPoseScore; // ivar: _humanPoseScore
@property (nonatomic) float interestingnessScore; // ivar: _interestingnessScore
@property ? motionParam;
@property ? motionParamDiff;
@property (nonatomic) float obstructionScore; // ivar: _obstructionScore
@property (nonatomic) float petsActionScore; // ivar: _petsActionScore
@property (retain, nonatomic) NSMutableArray *petsDetections; // ivar: _petsDetections
@property (nonatomic) BOOL subMbMotionAvailable; // ivar: _subMbMotionAvailable
@property (nonatomic) float subjectActionScore; // ivar: _subjectActionScore
@property (retain, nonatomic) VCPVideoActivityDescriptor *videoActivityDescriptor; // ivar: _videoActivityDescriptor




@end


#endif