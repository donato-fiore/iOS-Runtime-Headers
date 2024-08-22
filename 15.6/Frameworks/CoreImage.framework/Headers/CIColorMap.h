// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICOLORMAP_H
#define CICOLORMAP_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorMap : CIFilter

@property (retain, nonatomic) CIImage *inputGradientImage; // ivar: inputGradientImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif