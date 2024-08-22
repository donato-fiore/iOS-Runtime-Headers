// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEDETECTORPRIVATEREVISIONLEGACYFACECORE_H
#define VNFACEDETECTORPRIVATEREVISIONLEGACYFACECORE_H



#import "VNFaceDetector.h"

@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector



+(id)_convertVNOptionsToFaceCoreDetectOptions:(id)arg0 ;
+(id)_convertVNOptionsToFaceCoreExtractOptions:(id)arg0 ;
+(id)_convertVNOptionsToFaceCoreOptions:(id)arg0 optionsMap:(id)arg1 ;
+(id)_convertVNOptionsToFaceCoreSetupOptions:(id)arg0 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif