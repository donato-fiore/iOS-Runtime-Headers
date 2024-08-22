// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIPALETTIZE_H
#define CIPALETTIZE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPalettize : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputPaletteImage; // ivar: inputPaletteImage
@property (retain, nonatomic) NSNumber *inputPerceptual; // ivar: inputPerceptual


+(id)customAttributes;
-(id)_kernelApplyPalette;
-(id)outputImage;


@end


#endif