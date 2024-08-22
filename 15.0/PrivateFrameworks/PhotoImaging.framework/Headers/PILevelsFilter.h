// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PILEVELSFILTER_H
#define PILEVELSFILTER_H

@class CIFilter, NSNumber, NSString, CIImage;



@interface PILevelsFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputBlackDstBlue; // ivar: _inputBlackDstBlue
@property (retain, nonatomic) NSNumber *inputBlackDstGreen; // ivar: _inputBlackDstGreen
@property (retain, nonatomic) NSNumber *inputBlackDstRGB; // ivar: _inputBlackDstRGB
@property (retain, nonatomic) NSNumber *inputBlackDstRed; // ivar: _inputBlackDstRed
@property (retain, nonatomic) NSNumber *inputBlackSrcBlue; // ivar: _inputBlackSrcBlue
@property (retain, nonatomic) NSNumber *inputBlackSrcGreen; // ivar: _inputBlackSrcGreen
@property (retain, nonatomic) NSNumber *inputBlackSrcRGB; // ivar: _inputBlackSrcRGB
@property (retain, nonatomic) NSNumber *inputBlackSrcRed; // ivar: _inputBlackSrcRed
@property (retain, nonatomic) NSString *inputColorSpace; // ivar: _inputColorSpace
@property (retain, nonatomic) NSNumber *inputHilightDstBlue; // ivar: _inputHilightDstBlue
@property (retain, nonatomic) NSNumber *inputHilightDstGreen; // ivar: _inputHilightDstGreen
@property (retain, nonatomic) NSNumber *inputHilightDstRGB; // ivar: _inputHilightDstRGB
@property (retain, nonatomic) NSNumber *inputHilightDstRed; // ivar: _inputHilightDstRed
@property (retain, nonatomic) NSNumber *inputHilightSrcBlue; // ivar: _inputHilightSrcBlue
@property (retain, nonatomic) NSNumber *inputHilightSrcGreen; // ivar: _inputHilightSrcGreen
@property (retain, nonatomic) NSNumber *inputHilightSrcRGB; // ivar: _inputHilightSrcRGB
@property (retain, nonatomic) NSNumber *inputHilightSrcRed; // ivar: _inputHilightSrcRed
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSNumber *inputMidDstBlue; // ivar: _inputMidDstBlue
@property (retain, nonatomic) NSNumber *inputMidDstGreen; // ivar: _inputMidDstGreen
@property (retain, nonatomic) NSNumber *inputMidDstRGB; // ivar: _inputMidDstRGB
@property (retain, nonatomic) NSNumber *inputMidDstRed; // ivar: _inputMidDstRed
@property (retain, nonatomic) NSNumber *inputMidSrcBlue; // ivar: _inputMidSrcBlue
@property (retain, nonatomic) NSNumber *inputMidSrcGreen; // ivar: _inputMidSrcGreen
@property (retain, nonatomic) NSNumber *inputMidSrcRGB; // ivar: _inputMidSrcRGB
@property (retain, nonatomic) NSNumber *inputMidSrcRed; // ivar: _inputMidSrcRed
@property (retain, nonatomic) NSNumber *inputShadowDstBlue; // ivar: _inputShadowDstBlue
@property (retain, nonatomic) NSNumber *inputShadowDstGreen; // ivar: _inputShadowDstGreen
@property (retain, nonatomic) NSNumber *inputShadowDstRGB; // ivar: _inputShadowDstRGB
@property (retain, nonatomic) NSNumber *inputShadowDstRed; // ivar: _inputShadowDstRed
@property (retain, nonatomic) NSNumber *inputShadowSrcBlue; // ivar: _inputShadowSrcBlue
@property (retain, nonatomic) NSNumber *inputShadowSrcGreen; // ivar: _inputShadowSrcGreen
@property (retain, nonatomic) NSNumber *inputShadowSrcRGB; // ivar: _inputShadowSrcRGB
@property (retain, nonatomic) NSNumber *inputShadowSrcRed; // ivar: _inputShadowSrcRed
@property (retain, nonatomic) NSNumber *inputWhiteDstBlue; // ivar: _inputWhiteDstBlue
@property (retain, nonatomic) NSNumber *inputWhiteDstGreen; // ivar: _inputWhiteDstGreen
@property (retain, nonatomic) NSNumber *inputWhiteDstRGB; // ivar: _inputWhiteDstRGB
@property (retain, nonatomic) NSNumber *inputWhiteDstRed; // ivar: _inputWhiteDstRed
@property (retain, nonatomic) NSNumber *inputWhiteSrcBlue; // ivar: _inputWhiteSrcBlue
@property (retain, nonatomic) NSNumber *inputWhiteSrcGreen; // ivar: _inputWhiteSrcGreen
@property (retain, nonatomic) NSNumber *inputWhiteSrcRGB; // ivar: _inputWhiteSrcRGB
@property (retain, nonatomic) NSNumber *inputWhiteSrcRed; // ivar: _inputWhiteSrcRed


+(id)P3Kernel;
+(id)_customAttributesForKey:(id)arg0 ;
+(id)customAttributes;
+(id)defaultValueForKey:(id)arg0 ;
-(CGFloat)floatValueForKey:(id)arg0 defaultValue:(CGFloat)arg1 clearIfNotDefault:(*BOOL)arg2 ;
-(id)_LUTImage;
-(id)outputImage;
-(void)setDefaults;


@end


#endif