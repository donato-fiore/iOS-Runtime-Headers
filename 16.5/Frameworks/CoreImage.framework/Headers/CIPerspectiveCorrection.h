// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIPERSPECTIVECORRECTION_H
#define CIPERSPECTIVECORRECTION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIPerspectiveCorrection : CIFilter

@property (retain, nonatomic) CIVector *inputBottomLeft; // ivar: inputBottomLeft
@property (retain, nonatomic) CIVector *inputBottomRight; // ivar: inputBottomRight
@property (retain, nonatomic) NSNumber *inputCrop; // ivar: inputCrop
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputTopLeft; // ivar: inputTopLeft
@property (retain, nonatomic) CIVector *inputTopRight; // ivar: inputTopRight


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif