// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPFRAMEANALYSISSTATS_H
#define VCPFRAMEANALYSISSTATS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPVideoActivityDescriptor.h"

@interface VCPFrameAnalysisStats : NSObject

@property (nonatomic) float cameraMotionScore; // ivar: _cameraMotionScore
@property (nonatomic) float colorfulnessScore; // ivar: _colorfulnessScore
@property (retain, nonatomic) NSMutableArray *detectedFaces; // ivar: _detectedFaces
@property (nonatomic) float exposureScore; // ivar: _exposureScore
@property (nonatomic) float faceArea; // ivar: _faceArea
@property (nonatomic) float frameExpressionScore; // ivar: _frameExpressionScore
@property (nonatomic) BOOL frameProcessedByFaceDetector; // ivar: _frameProcessedByFaceDetector
@property (nonatomic) BOOL frameProcessedByHumanAnalyzer; // ivar: _frameProcessedByHumanAnalyzer
@property (nonatomic) BOOL frameProcessedByVideoAnalyzer; // ivar: _frameProcessedByVideoAnalyzer
@property (nonatomic) float humanActionScore; // ivar: _humanActionScore
@property (nonatomic) float humanPoseScore; // ivar: _humanPoseScore
@property (nonatomic) float interestingnessScore; // ivar: _interestingnessScore
@property (nonatomic) float obstructionScore; // ivar: _obstructionScore
@property (nonatomic) BOOL subMbMotionAvailable; // ivar: _subMbMotionAvailable
@property (nonatomic) float subjectActionScore; // ivar: _subjectActionScore
@property (retain, nonatomic) VCPVideoActivityDescriptor *videoActivityDescriptor; // ivar: _videoActivityDescriptor


-(id)init;
-(void)reset;


@end


#endif