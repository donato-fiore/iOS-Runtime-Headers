// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPERSPECTIVETRANSFORMWITHEXTENT_H
#define CIPERSPECTIVETRANSFORMWITHEXTENT_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIPerspectiveTransformWithExtent : CIFilter

@property (retain, nonatomic) CIVector *inputBottomLeft; // ivar: inputBottomLeft
@property (retain, nonatomic) CIVector *inputBottomRight; // ivar: inputBottomRight
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputTopLeft; // ivar: inputTopLeft
@property (retain, nonatomic) CIVector *inputTopRight; // ivar: inputTopRight


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif