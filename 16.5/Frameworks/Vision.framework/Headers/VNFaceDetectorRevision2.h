// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(void)purgeIntermediates;


@end


#endif