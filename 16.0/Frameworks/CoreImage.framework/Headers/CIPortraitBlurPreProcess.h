// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPORTRAITBLURPREPROCESS_H
#define CIPORTRAITBLURPREPROCESS_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPortraitBlurPreProcess : CIFilter

@property (retain) CIImage *inputBlurmapImage; // ivar: inputBlurmapImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputUseMetal; // ivar: inputUseMetal


-(id)_kernel;
-(id)_kernelMetal;
-(id)outputImage;


@end


#endif