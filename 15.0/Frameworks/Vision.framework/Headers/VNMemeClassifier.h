// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMEMECLASSIFIER_H
#define VNMEMECLASSIFIER_H



#import "VNImageAnalyzerBasedDetector.h"

@interface VNMemeClassifier : VNImageAnalyzerBasedDetector {
    int _modelDrop;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)inputImageBlobNameForConfiguration:(id)arg0 ;
+(id)modelNameForConfiguration:(id)arg0 ;
+(unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureImageAnalyzerOptions:(*void)arg0 error:(*id)arg1 ;
-(id)observationsForLastAnalysisOfImageAnalyzer:(*void)arg0 processOptions:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(*id)arg3 ;
-(id)sceneLabelsFileName;
-(id)supportedIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)analysisTypesForProcessOptions:(id)arg0 ;


@end


#endif