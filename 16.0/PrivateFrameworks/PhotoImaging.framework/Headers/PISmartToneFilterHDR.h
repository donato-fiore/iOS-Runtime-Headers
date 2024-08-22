// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISMARTTONEFILTERHDR_H
#define PISMARTTONEFILTERHDR_H

@class CIFilter, NSNumber, CIImage;



@interface PISmartToneFilterHDR : CIFilter

@property (retain, nonatomic) NSNumber *inputBlack; // ivar: inputBlack
@property (retain, nonatomic) NSNumber *inputBrightness; // ivar: inputBrightness
@property (retain, nonatomic) NSNumber *inputContrast; // ivar: inputContrast
@property (retain, nonatomic) NSNumber *inputExposure; // ivar: inputExposure
@property (retain, nonatomic) NSNumber *inputHighlights; // ivar: inputHighlights
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRawHighlights; // ivar: inputRawHighlights
@property (retain, nonatomic) NSNumber *inputShadows; // ivar: inputShadows


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernelBneg;
-(id)_kernelBpos;
-(id)_kernelC;
-(id)_kernelC_hdr;
-(id)_kernelH;
-(id)_kernelRH;
-(id)outputImage;


@end


#endif