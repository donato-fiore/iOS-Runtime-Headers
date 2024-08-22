// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CISCREENFILTER_H
#define _CISCREENFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface _CIScreenFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputSharpness; // ivar: inputSharpness
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif