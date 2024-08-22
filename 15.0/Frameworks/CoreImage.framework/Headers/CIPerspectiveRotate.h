// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIPERSPECTIVEROTATE_H
#define CIPERSPECTIVEROTATE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPerspectiveRotate : CIFilter {
    float3x3 K;
    float3x3 invK;
}


@property (copy, nonatomic) NSNumber *inputFocalLength; // ivar: inputFocalLength
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputPitch; // ivar: inputPitch
@property (copy, nonatomic) NSNumber *inputRoll; // ivar: inputRoll
@property (copy, nonatomic) NSNumber *inputYaw; // ivar: inputYaw
@property (readonly, nonatomic) ? outputTransform;


+(id)customAttributes;
-(id)outputImage;
-(void)computeCameraIntrinsics;


@end


#endif