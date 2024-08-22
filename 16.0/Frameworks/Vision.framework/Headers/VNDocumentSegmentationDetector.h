// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDOCUMENTSEGMENTATIONDETECTOR_H
#define VNDOCUMENTSEGMENTATIONDETECTOR_H



#import "VNImageAnalyzerBasedDetector.h"

@interface VNDocumentSegmentationDetector : VNImageAnalyzerBasedDetector



+(id)inputImageBlobNameForConfiguration:(id)arg0 ;
+(id)modelNameForConfiguration:(id)arg0 ;
+(unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg0 ;
-(BOOL)configureImageAnalyzerOptions:(*void)arg0 error:(*id)arg1 ;
-(id)observationsForLastAnalysisOfImageAnalyzer:(*void)arg0 processOptions:(id)arg1 originatingRequestSpecifier:(id)arg2 qosClass:(unsigned int)arg3 error:(*id)arg4 ;
-(id)segmentationLabelsFileName;
-(unsigned int)analysisTypesForProcessOptions:(id)arg0 ;


@end


#endif