// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEREGIONMAPGENERATOR_H
#define VNFACEREGIONMAPGENERATOR_H



#import "VNDetector.h"

@interface VNFaceRegionMapGenerator : VNDetector {
    shared_ptr<vision::mod::FaceRegionMap> mFaceRegionMapAlgorithmImpl;
}




-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif