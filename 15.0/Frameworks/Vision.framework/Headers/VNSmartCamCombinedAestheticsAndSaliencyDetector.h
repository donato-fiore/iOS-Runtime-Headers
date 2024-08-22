// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNSMARTCAMCOMBINEDAESTHETICSANDSALIENCYDETECTOR_H
#define VNSMARTCAMCOMBINEDAESTHETICSANDSALIENCYDETECTOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector



+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
-(BOOL)warmUpSession:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)_classifyAesthetics:(BOOL)arg0 generateSaliencyHeatMap:(BOOL)arg1 for32BGRAImageInPixelBuffer:(struct __CVBuffer *)arg2 withOptions:(id)arg3 modelInputImageSize:(struct CGSize )arg4 originalImageSize:(struct CGSize )arg5 regionOfInterest:(struct CGRect )arg6 warningRecorder:(id)arg7 error:(*id)arg8 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg0 ;


@end


#endif