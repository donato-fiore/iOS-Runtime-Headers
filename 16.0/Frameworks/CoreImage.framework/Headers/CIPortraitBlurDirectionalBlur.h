// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPORTRAITBLURDIRECTIONALBLUR_H
#define CIPORTRAITBLURDIRECTIONALBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPortraitBlurDirectionalBlur : CIFilter

@property (copy, nonatomic) NSNumber *inputAntiAliasBlurStrength; // ivar: inputAntiAliasBlurStrength
@property (copy, nonatomic) NSNumber *inputHorizontalBlur; // ivar: inputHorizontalBlur
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputMaxBlur; // ivar: inputMaxBlur
@property (copy, nonatomic) NSNumber *inputUseMetal; // ivar: inputUseMetal


-(id)_kernel;
-(id)_kernelMetal;
-(id)outputImage;


@end


#endif