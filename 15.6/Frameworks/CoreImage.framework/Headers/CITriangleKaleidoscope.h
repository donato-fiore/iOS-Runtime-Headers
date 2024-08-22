// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CITRIANGLEKALEIDOSCOPE_H
#define CITRIANGLEKALEIDOSCOPE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CITriangleKaleidoscope : CIFilter

@property (retain, nonatomic) NSNumber *inputDecay; // ivar: inputDecay
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputPoint; // ivar: inputPoint
@property (retain, nonatomic) NSNumber *inputRotation; // ivar: inputRotation
@property (retain, nonatomic) NSNumber *inputSize; // ivar: inputSize


+(id)customAttributes;
-(id)_colorKernel;
-(id)_geomKernel;
-(id)outputImage;


@end


#endif