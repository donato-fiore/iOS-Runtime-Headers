// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKPOSEESTIMATIONPIPELINE_H
#define ABPKPOSEESTIMATIONPIPELINE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "ABPK2DDetectionConfiguration.h"
#import "ABPK2DPoseEstimation.h"
#import "ABPK2DDetectionPostprocess.h"
#import "ABPK3DLifting.h"
#import "ABPK3DLiftingSequence.h"
#import "ABPKCameraRegistration.h"
#import "ABPKDepthBasedScaleEstimation.h"
#import "ABPKRetargeting.h"
#import "ABPK2dSkeleton.h"
#import "ABPKSkeleton.h"
#import "ABPKImagePreProcessing.h"
#import "ABPKImagePreProcessingParams.h"

@interface ABPKPoseEstimationPipeline : NSObject {
    NSInteger _exitPoint;
    *__CVBuffer _mlImage;
    NSString *_saveDirectory;
    ABPK2DDetectionConfiguration *_config2D;
    BOOL _deviceANEVersionPriorOrEqualToH12;
    ABPK2DPoseEstimation *_poseEstimation2D;
    ABPK2DDetectionPostprocess *_postprocess2d;
    ABPK3DLifting *_liftingAlgorithm;
    ABPK3DLiftingSequence *_liftingAlgorithmSequence;
    ABPKCameraRegistration *_bodyRegistration;
    ABPKDepthBasedScaleEstimation *_scaleEstimation;
    ABPKRetargeting *_retargeting;
    ABPK2dSkeleton *_rawDetection2dSkeleton;
    ABPK2dSkeleton *_detection2dSkeleton;
    NSMutableArray *_rawDetection2dSkeletonArray;
    ABPKSkeleton *_liftingSkeleton;
    ABPK2dSkeleton *_registered2dSkeleton;
    ABPKSkeleton *_retargetedSkeleton;
    float _previousValidScale;
    CGSize _inputResolution;
    ABPKImagePreProcessing *_imagePreprocessor;
    ABPKImagePreProcessingParams *_imagePreProcessingParams;
}




-(BOOL)initAlgorithmModules;
-(id)init;
-(int)runABPKPoseEstimationWithInputData:(id)arg0 andGetOutput:(id)arg1 ;
-(void)_endExecuteAlgorithmSignpost;
-(void)_endImagePreprocessingSignpost;
-(void)_endInitABPKOutputSignpost;
-(void)_endInitABPKSignpost;
-(void)_endRetargettingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endScaleEstimationSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startExecuteAlgorithmSignpost;
-(void)_startImagePreprocessingSignpost;
-(void)_startInitABPKOutputSignpost;
-(void)_startInitABPKSignpost;
-(void)_startRetargettingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startScaleEstimationSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)computeRootTransforms:(id)arg0 withCameraExtrinsics:(struct ? )arg1 withVioPose:(struct ? )arg2 withVioPoseValidity:(BOOL)arg3 ;
-(void)dealloc;
-(void)initializeOutput;
-(void)runABPKAlgorithmWithInputData:(id)arg0 andGetOutput:(id)arg1 ;
-(void)saveInputData:(id)arg0 andOutputData:(id)arg1 ToDir:(id)arg2 withFileNamePrefix:(id)arg3 ;
-(void)setExitPoint:(NSInteger)arg0 ;


@end


#endif