// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEQUALITYGENERATOR_H
#define VNFACEQUALITYGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNFaceQualityGenerator : VNEspressoModelFileBasedDetector {
    shared_ptr<vision::mod::FaceQualityPredictor> _mFaceQualityPredictor;
}




+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(id)keyForDetectorWithConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif