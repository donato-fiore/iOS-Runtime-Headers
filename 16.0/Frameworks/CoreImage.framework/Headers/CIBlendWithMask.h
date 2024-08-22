// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBLENDWITHMASK_H
#define CIBLENDWITHMASK_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIBlendWithMask : CIFilter

@property (retain, nonatomic) CIImage *inputBackgroundImage; // ivar: inputBackgroundImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputMaskImage; // ivar: inputMaskImage


+(id)customAttributes;
-(float)_maskFillColorValue;
-(id)_kernel;
-(id)_kernelB0;
-(id)outputImage;


@end


#endif