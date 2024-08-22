// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNANFDMULTIDETECTOR_H
#define VNANFDMULTIDETECTOR_H



#import "VNEspressoModelFileBasedDetector.h"
#import "VNFaceBBoxAligner.h"
#import "ShotflowDetector.h"

@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {
    VNFaceBBoxAligner *_faceBBoxAligner;
}


@property (readonly, nonatomic) ShotflowDetector *shotflowDetector; // ivar: _mMultiHeadedANFDDetector


+(Class)anfdMultiDetectorClassToProcessRequest:(id)arg0 ;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(float)faceDetectorChunkAspectRatio;
+(id)configurationOptionKeysForDetectorKey;
+(id)detectedObjectClassToRequestKey;
+(id)detectedObjectRequestKeyToRequestInfo;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(id)knownAnimalIdentifiers;
+(id)recognizedAnimalObjectClassToAnimalName;
+(id)requestInfoForRequest:(id)arg0 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
+(void)_printDebugInfo:(id)arg0 detectedObjectsRaw:(id)arg1 faceDetectorBGRAImage:(struct __CVBuffer *)arg2 tempImage:(struct vImage_Buffer )arg3 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)processDetectedObject:(id)arg0 originatingRequestSpecifier:(id)arg1 objectBoundingBox:(struct CGRect )arg2 imageBuffer:(id)arg3 warningRecorder:(id)arg4 detectedObjectResults:(id)arg5 error:(*id)arg6 ;
-(BOOL)updateRuntimeParametersFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)_alignFace:(id)arg0 imageBuffer:(id)arg1 warningRecorder:(id)arg2 error:(*id)arg3 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)processRecognizedObjectWithIdentifier:(id)arg0 originatingRequestSpecifier:(id)arg1 objectBoundingBox:(struct CGRect )arg2 objectConfidence:(float)arg3 detectedObjectResults:(id)arg4 ;


@end


#endif