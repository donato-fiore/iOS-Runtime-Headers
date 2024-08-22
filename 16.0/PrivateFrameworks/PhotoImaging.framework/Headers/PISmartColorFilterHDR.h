// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISMARTCOLORFILTERHDR_H
#define PISMARTCOLORFILTERHDR_H

@class CIFilter, NSNumber, CIImage;



@interface PISmartColorFilterHDR : CIFilter

@property (retain, nonatomic) NSNumber *inputCast; // ivar: inputCast
@property (retain, nonatomic) NSNumber *inputContrast; // ivar: inputContrast
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputVibrancy; // ivar: inputVibrancy


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernelCNeg;
-(id)_kernelCPos;
-(id)_kernelCast;
-(id)_kernelV_gt1;
-(id)_kernelV_lt1;
-(id)outputImage;


@end


#endif