// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOMPOSITINGFILTER_H
#define PICOMPOSITINGFILTER_H

@class CIFilter, CIImage, NSString, NSNumber;



@interface PICompositingFilter : CIFilter

@property (retain, nonatomic) CIImage *inputBackgroundImage; // ivar: _inputBackgroundImage
@property (retain, nonatomic) NSString *inputBlendMode; // ivar: _inputBlendMode
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSNumber *inputIntensity; // ivar: _inputIntensity


+(id)availableBlendModes;
+(id)blendKernelForBlendMode:(id)arg0 ;
+(id)customAttributes;
-(id)outputImage;


@end


#endif