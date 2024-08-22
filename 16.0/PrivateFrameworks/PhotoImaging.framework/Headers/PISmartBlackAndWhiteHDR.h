// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISMARTBLACKANDWHITEHDR_H
#define PISMARTBLACKANDWHITEHDR_H

@class CIFilter, NSNumber, CIImage;



@interface PISmartBlackAndWhiteHDR : CIFilter

@property (copy, nonatomic) NSNumber *inputGrain; // ivar: inputGrain
@property (copy, nonatomic) NSNumber *inputHue; // ivar: inputHue
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputNeutralGamma; // ivar: inputNeutralGamma
@property (copy, nonatomic) NSNumber *inputScaleFactor; // ivar: inputScaleFactor
@property (copy, nonatomic) NSNumber *inputSeed; // ivar: inputSeed
@property (copy, nonatomic) NSNumber *inputStrength; // ivar: inputStrength
@property (copy, nonatomic) NSNumber *inputTone; // ivar: inputTone


+(id)customAttributes;
-(*float)createHueArray;
-(id)hueArrayImage:(*float)arg0 ;
-(id)outputImage;
-(id)smartBlackWhiteKernel;
-(void)getNonNormalizedSettings:(struct ? *)arg0 ;


@end


#endif