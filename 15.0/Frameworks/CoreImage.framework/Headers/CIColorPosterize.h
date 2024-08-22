// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICOLORPOSTERIZE_H
#define CICOLORPOSTERIZE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorPosterize : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputLevels; // ivar: inputLevels


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;


@end


#endif