// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSALIENCYHEATMAPBOUNDINGBOXGENERATOR_H
#define VNSALIENCYHEATMAPBOUNDINGBOXGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector



+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)calculateSaliencyBoundingBoxesForDetectorType:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 configurationOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 regionOfInterest:(struct CGRect )arg4 warningRecorder:(id)arg5 error:(*id)arg6 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 error:(*id)arg3 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(struct __CVBuffer *)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif