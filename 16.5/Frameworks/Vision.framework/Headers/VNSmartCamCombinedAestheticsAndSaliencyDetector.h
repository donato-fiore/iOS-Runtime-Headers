// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNSMARTCAMCOMBINEDAESTHETICSANDSALIENCYDETECTOR_H
#define VNSMARTCAMCOMBINEDAESTHETICSANDSALIENCYDETECTOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector



+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)warmUpSession:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)_classifyAesthetics:(BOOL)arg0 generateSaliencyHeatMap:(BOOL)arg1 for32BGRAImageInPixelBuffer:(struct __CVBuffer *)arg2 withOptions:(id)arg3 modelInputImageSize:(struct CGSize )arg4 originalImageSize:(struct CGSize )arg5 regionOfInterest:(struct CGRect )arg6 warningRecorder:(id)arg7 error:(*id)arg8 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg0 ;


@end


#endif