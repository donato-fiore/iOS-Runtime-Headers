// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDISPARITYREFINEMENT_H
#define CIDISPARITYREFINEMENT_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIDisparityRefinement : CIFilter

@property (retain) CIImage *inputDisparityImage; // ivar: inputDisparityImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy) CIVector *inputOriginalSize; // ivar: inputOriginalSize
@property (copy) NSNumber *inputPropagateKernel; // ivar: inputPropagateKernel
@property (copy) NSNumber *inputPropagateMinWeightSum; // ivar: inputPropagateMinWeightSum
@property (copy) NSNumber *inputPropagateSigmaChma; // ivar: inputPropagateSigmaChma
@property (copy) NSNumber *inputPropagateSigmaLuma; // ivar: inputPropagateSigmaLuma
@property (copy) NSNumber *inputScale; // ivar: inputScale
@property (copy) NSNumber *inputSmoothSigma; // ivar: inputSmoothSigma


+(id)customAttributes;
-(id)_combineImages;
-(id)_initialConversionRGB;
-(id)_propagateDisparity;
-(id)_propagateDisparityCombined;
-(id)_propagateDisparityR1;
-(id)_propagateDisparityR1Combined;
-(id)_pyramidGenerateLevel;
-(id)_smoothDisparity;
-(id)generatePyramidLevel:(id)arg0 useMetal:(BOOL)arg1 ;
-(id)initialConversionForSize:(struct CGSize )arg0 useMetal:(BOOL)arg1 ;
-(id)outputImage;
-(id)outputImageUsingMetal:(BOOL)arg0 ;
-(id)propagateDisparity:(id)arg0 pyramids:(*id)arg1 useMetal:(BOOL)arg2 computedPyramidLevels:(int)arg3 ;
-(id)shiftmapLevelZeroWithSize:(struct CGSize )arg0 useMetal:(BOOL)arg1 ;
-(id)smoothDisparityImage:(id)arg0 useMetal:(BOOL)arg1 ;


@end


#endif