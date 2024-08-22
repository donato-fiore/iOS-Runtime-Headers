// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CISPARSERENDERER_H
#define CISPARSERENDERER_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CISparseRenderer : CIFilter

@property (copy, nonatomic) NSNumber *inputAperture; // ivar: inputAperture
@property (copy, nonatomic) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (copy, nonatomic) NSNumber *inputDraftMode; // ivar: inputDraftMode
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIImage *inputMatteImage; // ivar: inputMatteImage
@property (copy, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


+(id)customAttributes;
-(BOOL)_useD2XRenderer;
-(id)_kernel:(BOOL)arg0 alpha:(BOOL)arg1 ;
-(id)_lutKernel:(BOOL)arg0 alpha:(BOOL)arg1 ;
-(id)_packageParams:(BOOL)arg0 extent:(struct CGRect )arg1 image:(id)arg2 haveAlpha:(BOOL)arg3 ;
-(id)baseVecsLUT:(unsigned int)arg0 ;
-(id)baseVecsLUTGenerator;
-(id)outputImage;
-(id)stepsLUT:(unsigned int)arg0 ;
-(id)stepsLUTGenerator;


@end


#endif