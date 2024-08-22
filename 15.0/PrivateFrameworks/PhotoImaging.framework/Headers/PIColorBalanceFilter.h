// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PICOLORBALANCEFILTER_H
#define PICOLORBALANCEFILTER_H

@class CIFilter, NSNumber, CIImage;



@interface PIColorBalanceFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputHasFace; // ivar: _inputHasFace
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSNumber *inputIsRaw; // ivar: _inputIsRaw
@property (retain, nonatomic) NSNumber *inputStrength; // ivar: _inputStrength
@property (retain, nonatomic) NSNumber *inputWarmTemp; // ivar: _inputWarmTemp
@property (retain, nonatomic) NSNumber *inputWarmTint; // ivar: _inputWarmTint


+(id)PPtogHDRKernel;
+(id)colorBalanceKernel;
+(id)colorBalanceKernels;
+(id)customAttributes;
+(id)gHDRtoPPKernel;
-(id)applyInputConversion:(id)arg0 ;
-(id)applyOutputConversion:(id)arg0 ;
-(id)outputImage;


@end


#endif