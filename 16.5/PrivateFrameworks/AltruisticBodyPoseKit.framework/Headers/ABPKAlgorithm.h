// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKALGORITHM_H
#define ABPKALGORITHM_H


#import <Foundation/Foundation.h>

#import "ABPKAlgorithmParams.h"
#import "ABPK2DPoseEstimation.h"
#import "ABPK2DDetectionPostprocess.h"
#import "ABPK3DLifting.h"
#import "ABPKCameraRegistration.h"
#import "ABPKDepthBasedScaleEstimation.h"
#import "ABPKRetargeting.h"

@interface ABPKAlgorithm : NSObject {
    ABPKAlgorithmParams *_algParams;
    NSInteger _exitPoint;
    ABPK2DPoseEstimation *_poseEstimation2D;
    ABPK2DDetectionPostprocess *_postprocess2d;
    ABPK3DLifting *_liftingAlgorithm;
    ABPKCameraRegistration *_bodyRegistration;
    ABPKDepthBasedScaleEstimation *_scaleEstimation;
    ABPKRetargeting *_retargeting;
    float _previousValidScale;
}




-(id)initWithParams:(id)arg0 ;
-(int)runWithInput:(id)arg0 andGetOutput:(id)arg1 ;
-(void)_endABPKRunWithInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endInitABPKSignpost;
-(void)_endRetargettingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endScaleEstimationSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startABPKRunWithInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startInitABPKSignpost;
-(void)_startRetargettingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startScaleEstimationSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)setExitPoint:(NSInteger)arg0 ;


@end


#endif