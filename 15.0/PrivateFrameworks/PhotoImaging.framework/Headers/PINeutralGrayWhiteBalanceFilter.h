// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PINEUTRALGRAYWHITEBALANCEFILTER_H
#define PINEUTRALGRAYWHITEBALANCEFILTER_H

@class CIFilter, NSNumber, CIImage;



@interface PINeutralGrayWhiteBalanceFilter : CIFilter

@property (retain, nonatomic) NSNumber *i; // ivar: _i
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSNumber *q; // ivar: _q
@property (retain, nonatomic) NSNumber *strength; // ivar: _strength
@property (retain, nonatomic) NSNumber *warmth; // ivar: _warmth
@property (retain, nonatomic) NSNumber *y; // ivar: _y


+(id)PPtogHDRKernel;
+(id)RGBToYIQKernel;
+(id)YIQToRGBKernel;
+(id)colorBalanceKernels;
+(id)gHDRtoPPKernel;
-(BOOL)isDefaultWarmth:(CGFloat)arg0 ;
-(id)applyInputConversion:(id)arg0 ;
-(id)applyOutputConversion:(id)arg0 ;
-(id)outputImage;


@end


#endif