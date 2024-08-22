// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNSCREENGAZEDETECTOR_H
#define VNSCREENGAZEDETECTOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNScreenGazeDetector : VNEspressoModelFileBasedDetector {
    shared_ptr<vision::mod::ScreenGazePredictor> _predictor;
}




+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif