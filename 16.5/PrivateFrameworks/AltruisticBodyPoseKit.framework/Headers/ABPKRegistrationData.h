// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKREGISTRATIONDATA_H
#define ABPKREGISTRATIONDATA_H


#import <Foundation/Foundation.h>


@interface ABPKRegistrationData : NSObject {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _imagePointsVector;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _jointsLifted3DVector;
}


@property (readonly, nonatomic) ? cameraFromBodyPose; // ivar: _cameraFromBodyPose
@property (readonly, nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (readonly, nonatomic) CGSize imageDimensions; // ivar: _imageDimensions
@property ? imagePoints;
@property (readonly, nonatomic) NSUInteger imagePointsCount; // ivar: _imagePointsCount
@property ? jointsLifted3D;
@property (readonly, nonatomic) NSUInteger jointsLifted3DCount; // ivar: _jointsLifted3DCount
@property (readonly, nonatomic) BOOL registrationValid; // ivar: _registrationValid


-(id)initWithImagePoints:(*NSUInteger)arg0 imagePointsCount:(*NSUInteger)arg1 jointsLifted3D:(struct ? )arg2 jointsLifted3DCount:(struct CGSize )arg3 cameraIntrinsics:(struct ? )arg4 imageDimensions:(BOOL)arg5 cameraFromBodyPoseregistrationValid;


@end


#endif