// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIPALETTECENTROID_H
#define CIPALETTECENTROID_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPaletteCentroid : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputPaletteImage; // ivar: inputPaletteImage
@property (retain, nonatomic) NSNumber *inputPerceptual; // ivar: inputPerceptual


+(id)customAttributes;
-(id)_kernelClusterMask;
-(id)outputImage;


@end


#endif