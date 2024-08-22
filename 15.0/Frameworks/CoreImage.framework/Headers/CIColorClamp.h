// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICOLORCLAMP_H
#define CICOLORCLAMP_H



#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIColorClamp : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputMaxComponents; // ivar: inputMaxComponents
@property (retain, nonatomic) CIVector *inputMinComponents; // ivar: inputMinComponents


+(id)customAttributes;
-(id)_kernel;
-(id)_kernelAlphaPreserving;
-(id)outputImage;


@end


#endif