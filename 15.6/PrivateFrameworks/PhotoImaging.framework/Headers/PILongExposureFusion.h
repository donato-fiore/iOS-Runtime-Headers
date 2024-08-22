// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PILONGEXPOSUREFUSION_H
#define PILONGEXPOSUREFUSION_H

@class CIFilter, CIVector, CIImage, NSNumber;



@interface PILongExposureFusion : CIFilter

@property (retain, nonatomic) CIVector *inputAlignmentExtent; // ivar: _inputAlignmentExtent
@property (retain, nonatomic) CIVector *inputAlignmentTransform; // ivar: _inputAlignmentTransform
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) CIImage *inputMaskImage; // ivar: _inputMaskImage
@property (retain, nonatomic) NSNumber *inputRenderScale; // ivar: _inputRenderScale
@property (retain, nonatomic) CIImage *inputStillImage; // ivar: _inputStillImage
@property (retain, nonatomic) NSNumber *inputVideoScale; // ivar: _inputVideoScale


+(BOOL)_debugDumpIntermediateImages;
+(BOOL)debugDumpIntermediateImages;
+(void)initialize;
+(void)loadFusionTuningParameters;
-(id)_computeNCCMapFromImage:(id)arg0 toImage:(id)arg1 scale:(CGFloat)arg2 ;
-(id)_fuseImage:(id)arg0 withGuideImage:(id)arg1 weightImage:(id)arg2 maskImage:(id)arg3 ;
-(id)_refineMaskImage:(id)arg0 guideImage:(id)arg1 scale:(CGFloat)arg2 ;
-(id)alignImage:(id)arg0 transform:(struct ? )arg1 extent:(struct CGRect )arg2 ;
-(id)outputImage;


@end


#endif