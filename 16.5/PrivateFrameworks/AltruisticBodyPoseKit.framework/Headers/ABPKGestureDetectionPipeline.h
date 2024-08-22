// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKGESTUREDETECTIONPIPELINE_H
#define ABPKGESTUREDETECTIONPIPELINE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "ABPK2DDetectionConfiguration.h"
#import "ABPK2DPoseEstimation.h"

@interface ABPKGestureDetectionPipeline : NSObject {
    unsigned int _fps;
    ABPK2DDetectionConfiguration *_config2D;
    ABPK2DPoseEstimation *_poseEstimation2D;
    NSMutableDictionary *_joints2DBufferDict;
    NSMutableArray *_previousGestureDetectionResult;
    NSUInteger _lastTrackingId;
    unsigned int _maxPreviousPoses;
    unsigned int _raisingMaxPreviousPoses;
    unsigned int _wavingMinPeriodicFrames;
    unsigned int _wavingAngleChangeLastFrames;
}




-(BOOL)overlayResult:(id)arg0 OnImage:(struct __CVBuffer *)arg1 andGenerateOverlayImage:(struct __CVBuffer *)arg2 ;
-(id)init;
-(id)initWithFrequency:(unsigned int)arg0 ;
-(int)runPoseEstimationWithInput:(struct __CVBuffer *)arg0 abpkDeviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(int)runPoseEstimationWithInput:(struct __CVBuffer *)arg0 deviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(int)runWithInput:(struct __CVBuffer *)arg0 abpkDeviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(int)runWithInput:(struct __CVBuffer *)arg0 deviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> )extractDataForJointIdx:(NSUInteger)arg0 fromPoseTimeArray:(id)arg1 ;
-(void)_endGestureDetection2DDetectionMLSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endGestureDetection2DDetectionPostProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endGestureDetectionAlgorithmSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endGestureDetectionImagePreProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endGestureDetectionPersonTrackingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endGestureDetectionRunWithInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endInitABPKSignpost;
-(void)_startGestureDetection2DDetectionMLSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startGestureDetection2DDetectionPostProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startGestureDetectionAlgorithmSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startGestureDetectionImagePreProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startGestureDetectionPersonTrackingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startGestureDetectionRunWithInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startInitABPKSignpost;
-(void)runGestureDetection:(id)arg0 withTrackingId:(unsigned int)arg1 andResult:(id)arg2 ;


@end


#endif