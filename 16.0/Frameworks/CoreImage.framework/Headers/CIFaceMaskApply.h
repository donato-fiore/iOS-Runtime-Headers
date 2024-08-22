// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIFACEMASKAPPLY_H
#define CIFACEMASKAPPLY_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIFaceMaskApply : CIFilter

@property (copy, nonatomic) CIVector *inputFacesCenterX; // ivar: inputFacesCenterX
@property (copy, nonatomic) CIVector *inputFacesCenterY; // ivar: inputFacesCenterY
@property (copy, nonatomic) CIVector *inputFacesChinX; // ivar: inputFacesChinX
@property (copy, nonatomic) CIVector *inputFacesChinY; // ivar: inputFacesChinY
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) CIVector *inputK0; // ivar: inputK0
@property (copy, nonatomic) CIVector *inputK1; // ivar: inputK1
@property (copy, nonatomic) CIVector *inputK2; // ivar: inputK2
@property (copy, nonatomic) CIVector *inputK3; // ivar: inputK3
@property (copy, nonatomic) NSNumber *inputK4; // ivar: inputK4
@property (retain, nonatomic) CIImage *inputParameterImage; // ivar: inputParameterImage
@property (copy, nonatomic) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


+(id)_kernel;
-(id)outputImage;


@end


#endif