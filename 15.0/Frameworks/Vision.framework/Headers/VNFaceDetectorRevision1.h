// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACEDETECTORREVISION1_H
#define VNFACEDETECTORREVISION1_H



#import "VNFaceDetector.h"
#import "VNFaceBBoxAligner.h"

@interface VNFaceDetectorRevision1 : VNFaceDetector {
    NSUInteger _metalContextPriority;
    BOOL _useLowPriorityMode;
    shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)keyForDetectorWithConfigurationOptions:(id)arg0 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg0 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)purgeIntermediates;


@end


#endif