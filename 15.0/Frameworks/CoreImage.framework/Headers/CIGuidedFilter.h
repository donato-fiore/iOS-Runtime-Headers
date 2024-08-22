// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIGUIDEDFILTER_H
#define CIGUIDEDFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIGuidedFilter : CIFilter

@property (copy) NSNumber *inputEpsilon; // ivar: inputEpsilon
@property (retain) CIImage *inputGuideImage; // ivar: inputGuideImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)_boxFilter:(id)arg0 fullFloat:(BOOL)arg1 ;
-(id)_combineRGB_and_A;
-(id)_computeABKernel;
-(id)_downsampledColorImage:(id)arg0 ;
-(id)_finalResult;
-(id)_fullFloatBoxFilter;
-(id)_multiplyImagesKernel;
-(id)_swizzleImageXXX1:(id)arg0 ;
-(id)_swizzleImageYYZ1:(id)arg0 ;
-(id)_swizzleImageYZZ1:(id)arg0 ;
-(id)_upsampleImage:(id)arg0 targetImageSize:(struct CGSize )arg1 ;
-(id)computeAB:(id)arg0 ;
-(id)multiplyImages:(id)arg0 imageB:(id)arg1 ;
-(id)outputImage;
-(id)subtract:(id)arg0 minus:(id)arg1 ;


@end


#endif