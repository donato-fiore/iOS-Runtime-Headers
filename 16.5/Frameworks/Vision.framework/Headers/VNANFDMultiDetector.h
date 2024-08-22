// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNANFDMULTIDETECTOR_H
#define VNANFDMULTIDETECTOR_H



#import "VNEspressoModelFileBasedDetector.h"
#import "VNFaceBBoxAligner.h"
#import "ShotflowDetector.h"

@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {
    VNFaceBBoxAligner *_faceBBoxAligner;
}


@property (readonly, nonatomic) ShotflowDetector *shotflowDetector; // ivar: _mMultiHeadedANFDDetector


+(BOOL)shouldAlignFacesForRequestWithSpecifier:(id)arg0 ;
+(Class)anfdMultiDetectorClassToProcessRequest:(id)arg0 ;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
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
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)isDetectedObject:(id)arg0 ofAGivenObjectSubClass:(id)arg1 ;
-(BOOL)processDetectedObject:(id)arg0 originatingRequestSpecifier:(id)arg1 objectBoundingBox:(struct CGRect )arg2 imageBuffer:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 detectedObjectResults:(id)arg6 error:(*id)arg7 ;
-(BOOL)updateRuntimeParametersFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)_alignFace:(id)arg0 imageBuffer:(id)arg1 qosClass:(unsigned int)arg2 warningRecorder:(id)arg3 error:(*id)arg4 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(id)splitDetectedClassResultsIntoSubclasses:(id)arg0 ;
-(void)processRecognizedObjectWithIdentifier:(id)arg0 originatingRequestSpecifier:(id)arg1 objectBoundingBox:(struct CGRect )arg2 objectConfidence:(float)arg3 detectedObjectResults:(id)arg4 ;


@end


#endif