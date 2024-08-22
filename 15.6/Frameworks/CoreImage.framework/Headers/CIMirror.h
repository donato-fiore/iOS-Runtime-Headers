// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIMIRROR_H
#define CIMIRROR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIMirror : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputPoint; // ivar: inputPoint


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(struct Rectangle )computeDOD:(struct vec2 )arg0 tst:(struct vec3 )arg1 off:(struct vec4 )arg2 mtx:(struct vec4 )arg3 ;


@end


#endif