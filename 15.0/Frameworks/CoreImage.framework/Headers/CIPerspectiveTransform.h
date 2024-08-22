// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIPERSPECTIVETRANSFORM_H
#define CIPERSPECTIVETRANSFORM_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIPerspectiveTransform : CIFilter

@property (retain, nonatomic) CIVector *inputBottomLeft; // ivar: inputBottomLeft
@property (retain, nonatomic) CIVector *inputBottomRight; // ivar: inputBottomRight
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputTopLeft; // ivar: inputTopLeft
@property (retain, nonatomic) CIVector *inputTopRight; // ivar: inputTopRight


+(id)customAttributes;
-(id)outputImage;


@end


#endif