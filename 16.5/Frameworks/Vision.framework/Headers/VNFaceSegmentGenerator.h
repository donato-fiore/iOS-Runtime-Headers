// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACESEGMENTGENERATOR_H
#define VNFACESEGMENTGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector {
    shared_ptr<vision::mod::FaceSegmenterDNN> _faceSegmenterDNN;
}




+(NSUInteger)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg0 ;
+(float)_faceSegmenterMaximumInputImageAspectRatio;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)arg0 error:(*id)arg1 ;
-(BOOL)_getFaceSegmenterInputImageSize:(struct CGSize *)arg0 forRequestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_getNumberOfSupportedFaceSegments:(*NSUInteger)arg0 forRequestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;


@end


#endif