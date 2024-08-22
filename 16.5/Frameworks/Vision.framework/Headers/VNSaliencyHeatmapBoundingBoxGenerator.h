// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)warmUpSession:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 error:(*id)arg3 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(struct __CVBuffer *)_createPixelBufferOfWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 fromImageBuffer:(id)arg2 options:(id)arg3 error:(*id)arg4 ;


@end


#endif