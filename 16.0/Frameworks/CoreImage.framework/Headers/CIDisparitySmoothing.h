// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDISPARITYSMOOTHING_H
#define CIDISPARITYSMOOTHING_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDisparitySmoothing : CIFilter

@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy) NSNumber *inputNumIterations; // ivar: inputNumIterations


+(id)customAttributes;
-(id)_customBoxBlur5Kernel;
-(id)outputImage;
-(id)outputImageMetal;


@end


#endif