// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIBICUBICSCALETRANSFORM_H
#define CIBICUBICSCALETRANSFORM_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBicubicScaleTransform : CIFilter

@property (retain, nonatomic) NSNumber *inputAspectRatio; // ivar: inputAspectRatio
@property (retain, nonatomic) NSNumber *inputB; // ivar: inputB
@property (retain, nonatomic) NSNumber *inputC; // ivar: inputC
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;
-(struct vec2 )_scale;


@end


#endif