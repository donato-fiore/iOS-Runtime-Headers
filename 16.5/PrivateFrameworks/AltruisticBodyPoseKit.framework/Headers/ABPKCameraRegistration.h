// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKCAMERAREGISTRATION_H
#define ABPKCAMERAREGISTRATION_H


#import <Foundation/Foundation.h>

#import "ABPKResultRegistration.h"

@interface ABPKCameraRegistration : NSObject {
    CGFloat _tot_avg_err;
    BodyRegistration _body_registration;
    ABPKResultRegistration *_regResult;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _imagePoints;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _v3d_body;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _v3d_cam;
}




-(id)estimateCameraPoseFromMatchingwithImageIntrinsics:(struct ? )arg0 imageResolution:(struct CGSize )arg1 joints2d:(**NSUInteger)arg2 jointsLifted3DjointsLifted3DCount;
-(id)init;
-(id)runCameraRegistrationWithImageIntrinsics:(struct ? )arg0 imageResolution:(struct CGSize )arg1 liftingResult:(id)arg2 ;
-(void)_endRunCameraRegistrationSignpost;
-(void)_startRunCameraRegistrationSignpost;


@end


#endif