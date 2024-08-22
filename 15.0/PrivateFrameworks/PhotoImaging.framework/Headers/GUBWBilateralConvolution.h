// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GUBWBILATERALCONVOLUTION_H
#define GUBWBILATERALCONVOLUTION_H

@class CIFilter, NSNumber, CIImage, NSArray;



@interface GUBWBilateralConvolution : CIFilter

@property (retain) NSNumber *inputBorder; // ivar: _inputBorder
@property (retain) NSNumber *inputEdgeDetail; // ivar: _inputEdgeDetail
@property (retain) CIImage *inputImage; // ivar: _inputImage
@property (retain) NSArray *inputPoints; // ivar: _inputPoints
@property (retain) NSArray *inputWeights; // ivar: _inputWeights


+(id)BWBilateralKernels;
+(id)bilateralLoop11Kernel;
+(id)bilateralLoop2Kernel;
+(id)bilateralLoop5Kernel;
-(id)doBilateralLoop:(id)arg0 points:(id)arg1 weights:(id)arg2 slope:(id)arg3 ;
-(id)outputImage;
-(struct CGRect )bilateralROI:(NSInteger)arg0 destRect:(struct CGRect )arg1 userInfo:(id)arg2 ;


@end


#endif