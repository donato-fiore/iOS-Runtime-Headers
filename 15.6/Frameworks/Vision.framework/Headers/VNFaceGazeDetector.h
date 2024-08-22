// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEGAZEDETECTOR_H
#define VNFACEGAZEDETECTOR_H



#import "VNDetector.h"

@interface VNFaceGazeDetector : VNDetector {
    shared_ptr<vision::mod::CamGazePredictor> _gazePredictor;
    shared_ptr<vision::mod::GazeFollowPredictor> _gazeFollowPredictor;
}




+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif