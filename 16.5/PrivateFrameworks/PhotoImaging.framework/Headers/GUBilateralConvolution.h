// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GUBILATERALCONVOLUTION_H
#define GUBILATERALCONVOLUTION_H

@class CIFilter, NSNumber, CIImage, NSArray;



@interface GUBilateralConvolution : CIFilter

@property (retain) NSNumber *inputEdgeDetail; // ivar: _inputEdgeDetail
@property (retain) CIImage *inputImage; // ivar: _inputImage
@property (retain) NSArray *inputPoints; // ivar: _inputPoints
@property (retain) NSNumber *inputVersion; // ivar: _inputVersion
@property (retain) NSArray *inputWeights; // ivar: _inputWeights


+(id)LabToRGBKernel;
+(id)RGBToLabKernel;
+(id)RGBToLabKernels;
+(id)bilateralAdd1Kernel;
+(id)bilateralAdd2Kernel;
+(id)bilateralAdd3Kernel;
+(id)bilateralAdd4Kernel;
+(id)bilateralAdd5Kernel;
+(id)bilateralAdd6Kernel;
+(id)bilateralAdd7Kernel;
+(id)bilateralAdd8Kernel;
+(id)bilateralAdd9Kernel;
+(id)bilateralFinalizeKernel;
+(id)bilateralKernels;
-(NSUInteger)samplesPerPass;
-(id)doBilateralPass:(id)arg0 points:(id)arg1 weights:(id)arg2 sums:(id)arg3 slope:(id)arg4 ;
-(id)outputImage;
-(struct CGRect )bilateralAddROI:(NSInteger)arg0 destRect:(struct CGRect )arg1 userInfo:(id)arg2 ;
-(struct CGRect )boundsForPointArray:(id)arg0 ;
-(struct CGRect )enlargedBounds:(struct CGRect )arg0 withPoints:(id)arg1 ;


@end


#endif