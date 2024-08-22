// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIRAWFACEBALANCE_H
#define PIRAWFACEBALANCE_H

@class CIFilter, CIImage;



@interface PIRAWFaceBalance : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (nonatomic) CGFloat inputOrigI; // ivar: _inputOrigI
@property (nonatomic) CGFloat inputOrigQ; // ivar: _inputOrigQ
@property (nonatomic) CGFloat inputStrength; // ivar: _inputStrength
@property (nonatomic) CGFloat inputWarmth; // ivar: _inputWarmth


+(id)faceBalanceKernels;
+(struct CGColorSpace *)linearWideGamutColorSpace;
+(struct CGColorSpace *)newLinearWideGamutColorSpace;
-(id)outputImage;


@end


#endif