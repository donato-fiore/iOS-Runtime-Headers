// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIMODTRANSITION_H
#define CIMODTRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIModTransition : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) NSNumber *inputCompression; // ivar: inputCompression
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage
@property (retain, nonatomic) NSNumber *inputTime; // ivar: inputTime


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif