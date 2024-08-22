// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNIMAGEANALYZERBASEDDETECTOR_H
#define VNIMAGEANALYZERBASEDDETECTOR_H

@class NSArray;


#import "VNDetector.h"

@interface VNImageAnalyzerBasedDetector : VNDetector {
    unique_ptr<vision::mod::ImageAnalyzer, std::default_delete<vision::mod::ImageAnalyzer>> _imageAnalyzer;
    _Geometry2D_size2D_ _networkRequiredInputImageSize;
    BOOL _networkUsesAnisotropicScaling;
    NSArray *_cachedSupportedClassificationIdentifiers;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)inputImageBlobNameForConfiguration:(id)arg0 ;
+(id)modelNameForConfiguration:(id)arg0 ;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureImageAnalyzerOptions:(*void)arg0 error:(*id)arg1 ;
-(BOOL)providesSceneLabels;
-(BOOL)providesSegmentationLabels;
-(BOOL)supportsProcessingDevice:(id)arg0 ;
-(NSUInteger)defaultImageCropAndScaleOption;
-(id)observationsForLastAnalysisOfImageAnalyzer:(*void)arg0 processOptions:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(*id)arg3 ;
// -(id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(*void)arg0 identifierAcceptingBlock:(id)arg1 operationPointsProvider:(unk)arg2 originatingRequestSpecifier:(id)arg3 error:(id)arg4  ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(id)sceneLabelsFileName;
-(id)segmentationLabelsFileName;
// -(id)supportedClassificationIdentifiersAcceptedByBlock:(id)arg0 error:(unk)arg1  ;
-(struct CGSize )inputImageSize;
-(unsigned int)analysisTypesForProcessOptions:(id)arg0 ;


@end


#endif