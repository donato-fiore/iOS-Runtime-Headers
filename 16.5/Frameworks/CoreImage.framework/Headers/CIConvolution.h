// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICONVOLUTION_H
#define CICONVOLUTION_H

@class NSArray, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIConvolution : CIFilter {
    CIImage *inputImage;
    NSArray *inputPoints;
    NSArray *inputWeights;
    NSNumber *inputLinearFilterModeEnabled;
}




-(id)_CIConvolutionAdd_1;
-(id)_CIConvolutionAdd_2;
-(id)_CIConvolutionAdd_3;
-(id)_CIConvolutionAdd_4;
-(id)_CIConvolutionAdd_5;
-(id)_CIConvolutionAdd_6;
-(id)_CIConvolutionAdd_7;
-(id)_CIConvolutionAdd_8;
-(id)doConvolutionPass:(id)arg0 weights:(id)arg1 sums:(id)arg2 ;
-(id)outputImage;
-(int)samplesPerPass;


@end


#endif