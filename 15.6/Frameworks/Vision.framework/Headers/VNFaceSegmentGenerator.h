// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)arg0 error:(*id)arg1 ;
-(BOOL)_getFaceSegmenterInputImageSize:(struct CGSize *)arg0 forRequestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_getNumberOfSupportedFaceSegments:(*NSUInteger)arg0 forRequestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif