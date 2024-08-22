// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGEARPOSEDETECTOR_H
#define VGEARPOSEDETECTOR_H


#import <Foundation/Foundation.h>


@interface VGEarPoseDetector : NSObject {
    unique_ptr<cv3d::visage::ear_frame_selection::EarDetector, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> _ear_detector;
    float _earPresenceConfidence;
    float _earVisibility;
    float _bboxVisibility;
    float _landmarkVisibility;
    float _percentileDetectionConfidence;
    unsigned int _sameSideFrameCount;
    int _prevSide;
    ? _earNormalAvg;
    float _expAvgWeight;
}




-(float)_calculateFaceYawWithRotationMatrix:(struct float4x4 *)arg0 ;
-(id)computeEarPlaneNormal:(int)arg0 side:(id)arg1 captureData;
-(id)initWithCaptureOptions:(id)arg0 ;
-(int)checkEarQualityForFrame:(id)arg0 detections:(*void)arg1 ;
-(int)detectPose:(*void)arg0 FromCaptureData:(id)arg1 ;
-(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> )findROIPoints:(*float)arg0 side:(int)arg1 captureData:(id)arg2 ;


@end


#endif