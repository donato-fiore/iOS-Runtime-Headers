// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACEGAZEDETECTOR_H
#define VNFACEGAZEDETECTOR_H



#import "VNDetector.h"

@interface VNFaceGazeDetector : VNDetector {
    shared_ptr<vision::mod::CamGazePredictor> _gazePredictor;
    shared_ptr<vision::mod::GazeFollowPredictor> _gazeFollowPredictor;
}




+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;


@end


#endif