// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AR3DSKELETONREGISTRATIONTECHNIQUE_H
#define AR3DSKELETONREGISTRATIONTECHNIQUE_H

@class ABPKCameraRegistration, ABPKDepthBasedScaleEstimation;


#import "ARTechnique.h"
#import "ARWorldTrackingPoseData.h"

@interface AR3DSkeletonRegistrationTechnique : ARTechnique {
    BOOL _is_tracking;
    int _last_btr_poses_idx;
    float _estimatedScale;
    CGFloat _last_detection_timestamp;
    shared_ptr<arkit::btr::ScaleCorrection> _scaler;
    array<arkit::btr::RegistrationData, 5UL> _last_btr_poses;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _dumps_dir;
    basic_ofstream<char, std::char_traits<char>> _btrf;
    basic_ofstream<char, std::char_traits<char>> _btrts;
    ARWorldTrackingPoseData *_currentWorldTrackingPose;
    ABPKCameraRegistration *_abpkRegistration;
    ABPKDepthBasedScaleEstimation *_abpkScaleEstimation;
}


@property (nonatomic) BOOL automaticSkeletonScaleEstimationEnabled; // ivar: _automaticSkeletonScaleEstimationEnabled


-(BOOL)_estimateCameraPoseFromMatchingImageData:(id)arg0 to3DData:(id)arg1 worldTrackingPose:(id)arg2 pCameraFromBody:(struct ? *)arg3 depthData:(id)arg4 pScaleOut:(*float)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(float)_estimateScaleFromDepthData:(id)arg0 imageData:(id)arg1 cameraPoseFromBody:(struct ? )arg2 skeleton:(id)arg3 ;
-(float)_estimateScaleFromJasperCloud:(id)arg0 cameraPoseFromBody:(struct ? )arg1 skeleton:(id)arg2 ;
-(id)processResultData:(id)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;
-(void)prepare:(BOOL)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)resetState;


@end


#endif