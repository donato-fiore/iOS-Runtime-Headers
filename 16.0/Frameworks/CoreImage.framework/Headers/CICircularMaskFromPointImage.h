// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICIRCULARMASKFROMPOINTIMAGE_H
#define CICIRCULARMASKFROMPOINTIMAGE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CICircularMaskFromPointImage : CIFilter

@property (retain, nonatomic) CIImage *inputCoordinate; // ivar: inputCoordinate
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputInnerRadius; // ivar: inputInnerRadius
@property (copy, nonatomic) NSNumber *inputOuterRadius; // ivar: inputOuterRadius


+(id)customAttributes;
-(id)_kernelDraw;
-(id)outputImage;


@end


#endif