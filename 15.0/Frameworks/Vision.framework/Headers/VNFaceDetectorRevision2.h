// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACEDETECTORREVISION2_H
#define VNFACEDETECTORREVISION2_H



#import "VNFaceDetector.h"
#import "VNFaceBBoxAligner.h"

@interface VNFaceDetectorRevision2 : VNFaceDetector {
    shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
    BOOL _preferBackgroundProcessing;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)purgeIntermediates;


@end


#endif