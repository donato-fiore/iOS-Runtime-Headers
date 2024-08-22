// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISELECTIVECOLORFILTER_H
#define PISELECTIVECOLORFILTER_H

@class CIFilter, NSArray, CIImage;



@interface PISelectiveColorFilter : CIFilter

@property (retain, nonatomic) NSArray *inputCorrections; // ivar: _inputCorrections
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage


+(CGFloat)iptHueAngleFromRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 ;
+(float)hueAngleFrom:(*float)arg0 ;
+(id)convertFromIPT:(id)arg0 ;
+(id)convertToIPT:(id)arg0 ;
+(id)selectiveColorKernels;
+(void)iptFromLinearInto:(*float)arg0 fromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(id)hueSatLumTable;
-(id)outputImage;


@end


#endif