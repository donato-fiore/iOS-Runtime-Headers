// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSINGLEHEADSCENEPRINTGENERATOR_H
#define VNSINGLEHEADSCENEPRINTGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector



+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
+(void)fullyPopulateConfigurationOptions:(id)arg0 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(BOOL)_analyzePixelBuffer:(struct __CVBuffer *)arg0 sceneprintOutputBuffer:(struct ? *)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)_analyzeRegionOfInterest:(struct CGRect )arg0 sceneprintOutputBuffer:(struct ? *)arg1 options:(id)arg2 warningRecorder:(id)arg3 error:(*id)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)_observationsForSceneprintOutput:(struct ? *)arg0 originatingRequestSpecifier:(id)arg1 error:(*id)arg2 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif