// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNOBJECTBASEDSALIENCYGENERATOR_H
#define VNOBJECTBASEDSALIENCYGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNObjectBasedSaliencyGenerator : VNEspressoModelFileBasedDetector



+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
-(BOOL)_runAnalysisOnImage:(struct __CVBuffer *)arg0 espressoResources:(id)arg1 inputBlobName:(id)arg2 error:(*id)arg3 ;
-(BOOL)warmUpSession:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)_observationsForImageIn32BGRAPixelBuffer:(struct __CVBuffer *)arg0 withOptions:(id)arg1 originalImageSize:(struct CGSize )arg2 regionOfInterest:(struct CGRect )arg3 warningRecorder:(id)arg4 error:(*id)arg5 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif