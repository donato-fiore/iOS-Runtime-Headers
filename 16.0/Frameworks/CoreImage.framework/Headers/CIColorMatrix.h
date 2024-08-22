// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICOLORMATRIX_H
#define CICOLORMATRIX_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIColorMatrix : CIFilter

@property (retain, nonatomic) CIVector *inputAVector; // ivar: inputAVector
@property (retain, nonatomic) CIVector *inputBVector; // ivar: inputBVector
@property (retain, nonatomic) CIVector *inputBiasVector; // ivar: inputBiasVector
@property (retain, nonatomic) CIVector *inputGVector; // ivar: inputGVector
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputRVector; // ivar: inputRVector


+(id)customAttributes;
-(id)outputImage;


@end


#endif