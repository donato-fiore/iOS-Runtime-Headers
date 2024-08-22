// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIKEYSTONECORRECTION_H
#define CIKEYSTONECORRECTION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIKeystoneCorrection : CIFilter {
    float3x3 K;
    float3x3 invK;
    float pitch;
    float yaw;
    float roll;
}


@property (copy, nonatomic) CIVector *inputBottomLeft; // ivar: inputBottomLeft
@property (copy, nonatomic) CIVector *inputBottomRight; // ivar: inputBottomRight
@property (copy, nonatomic) NSNumber *inputFocalLength; // ivar: inputFocalLength
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) CIVector *inputTopLeft; // ivar: inputTopLeft
@property (copy, nonatomic) CIVector *inputTopRight; // ivar: inputTopRight
@property (readonly, nonatomic) CIFilter *outputRotationFilter;
@property (readonly, nonatomic) ? outputTransform;


+(id)customAttributes;
-(id)outputImage;
-(void)computeCameraIntrinsics;
-(void)computeRotation;


@end


#endif