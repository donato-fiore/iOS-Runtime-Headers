// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKDEPTHBASEDSCALEESTIMATION_H
#define ABPKDEPTHBASEDSCALEESTIMATION_H


#import <Foundation/Foundation.h>


@interface ABPKDepthBasedScaleEstimation : NSObject {
    CGFloat _last_detection_timestamp;
    array<float, 2UL> _depth_scaler_num_den;
    NSUInteger _depth_scaler_observation_count;
}




-(float)estimateScaleFromDepthData:(struct __CVBuffer *)arg0 depthConfidenceData:(struct __CVBuffer *)arg1 timestamp:(CGFloat)arg2 imageResolution:(struct CGSize )arg3 imageIntrinsics:(struct ? )arg4 cameraFromBodyPose:(struct ? )arg5 liftingResult:(id)arg6 ;
-(float)estimateScaleFromJasperCloud:(id)arg0 cameraFromBodyPose:(struct ? )arg1 liftingResult:(id)arg2 ;
-(id)init;
-(void)resetState;


@end


#endif