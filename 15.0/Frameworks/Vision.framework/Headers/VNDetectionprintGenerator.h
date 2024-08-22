// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTIONPRINTGENERATOR_H
#define VNDETECTIONPRINTGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNDetectionprintGenerator : VNEspressoModelFileBasedDetector



+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(id)_analyzePixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)_detectionprintTensorForOutputBuffer:(struct ? *)arg0 originatingRequestSpecifier:(id)arg1 error:(*id)arg2 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif