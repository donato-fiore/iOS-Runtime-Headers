// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGEANALYZERBASEDDETECTOR_H
#define VNIMAGEANALYZERBASEDDETECTOR_H

@class NSArray;


#import "VNDetector.h"

@interface VNImageAnalyzerBasedDetector : VNDetector {
    shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;
    _Geometry2D_size2D_ _networkRequiredInputImageSize;
    BOOL _networkUsesAnisotropicScaling;
    NSArray *_cachedSupportedClassificationIdentifiers;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)inputImageBlobNameForConfiguration:(id)arg0 ;
+(id)modelNameForConfiguration:(id)arg0 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureImageAnalyzerOptions:(*void)arg0 error:(*id)arg1 ;
-(BOOL)providesSceneLabels;
-(BOOL)providesSegmentationLabels;
-(NSUInteger)defaultImageCropAndScaleOption;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)observationsForLastAnalysisOfImageAnalyzer:(*void)arg0 processOptions:(id)arg1 originatingRequestSpecifier:(id)arg2 qosClass:(unsigned int)arg3 error:(*id)arg4 ;
// -(id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(*void)arg0 identifierAcceptingBlock:(id)arg1 operationPointsProvider:(unk)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(id)arg4 error:(unsigned int)arg5  ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(id)sceneLabelsFileName;
-(id)segmentationLabelsFileName;
// -(id)supportedClassificationIdentifiersAcceptedByBlock:(id)arg0 error:(unk)arg1  ;
-(struct CGSize )inputImageSize;
-(unsigned int)analysisTypesForProcessOptions:(id)arg0 ;


@end


#endif