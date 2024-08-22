// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACEDETECTORPRIVATEREVISIONLEGACYFACECORE_H
#define VNFACEDETECTORPRIVATEREVISIONLEGACYFACECORE_H



#import "VNFaceDetector.h"

@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector



+(id)_convertVNOptionsToFaceCoreDetectOptions:(id)arg0 ;
+(id)_convertVNOptionsToFaceCoreExtractOptions:(id)arg0 ;
+(id)_convertVNOptionsToFaceCoreOptions:(id)arg0 optionsMap:(id)arg1 ;
+(id)_convertVNOptionsToFaceCoreSetupOptions:(id)arg0 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;


@end


#endif