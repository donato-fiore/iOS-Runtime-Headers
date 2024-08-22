// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSMARTCAM5GATINGDETECTOR_H
#define VNSMARTCAM5GATINGDETECTOR_H

@class NSDictionary, NSArray;


#import "VNImageAnalyzerBasedDetector.h"
#import "VNSaliencyOHeatmapBoundingBoxGenerator.h"

@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector {
    NSDictionary *_documentIdentifierToSceneLabels;
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;
}


@property (readonly, copy) NSArray *supportedDocumentElementIdentifiers;


+(id)inputImageBlobNameForConfiguration:(id)arg0 ;
+(id)modelNameForConfiguration:(id)arg0 ;
+(unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureImageAnalyzerOptions:(*void)arg0 error:(*id)arg1 ;
-(NSUInteger)defaultImageCropAndScaleOption;
-(id)observationsForLastAnalysisOfImageAnalyzer:(*void)arg0 processOptions:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(*id)arg3 ;
-(id)sceneLabelsFileName;
-(id)segmentationLabelsFileName;
-(id)supportedClassificationIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)analysisTypesForProcessOptions:(id)arg0 ;


@end


#endif