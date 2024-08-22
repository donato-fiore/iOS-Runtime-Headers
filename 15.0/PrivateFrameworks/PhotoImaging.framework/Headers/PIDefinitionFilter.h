// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIDEFINITIONFILTER_H
#define PIDEFINITIONFILTER_H

@class CIFilter, CIImage, NSNumber;



@interface PIDefinitionFilter : CIFilter

@property (retain) CIImage *inputBlurImage; // ivar: _inputBlurImage
@property (retain) CIImage *inputImage; // ivar: _inputImage
@property (retain) NSNumber *inputIntensity; // ivar: _inputIntensity


+(id)definitionKernel;
-(id)outputImage;


@end


#endif