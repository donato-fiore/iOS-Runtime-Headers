// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPORTRAITBLURCOMBINER_H
#define CIPORTRAITBLURCOMBINER_H

@class NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPortraitBlurCombiner : CIFilter

@property (retain) CIImage *inputBlurImage; // ivar: inputBlurImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIImage *inputMatteImage; // ivar: inputMatteImage
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(id)_blendKernel:(BOOL)arg0 ;
-(id)_ourBlendKernelMetal;
-(id)nonMetalKernel;
-(id)nonMetalKernelYCC;
-(id)outputImage;


@end


#endif