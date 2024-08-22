// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNSMARTCAMCLASSIFIER_H
#define VNSMARTCAMCLASSIFIER_H



#import "VNEspressoModelClassifier.h"

@interface VNSmartCamClassifier : VNEspressoModelClassifier



+(?)createDescriprorProcessorWithModelPath:(?)arg0 nBatch:(?)arg1 computePlatform:(?)arg2 computePathoptions;
+(Class)espressoModelImageprintClass;
+(id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg0 ;
+(id)createObservationWithDescriptors:(id)arg0 forOriginatingRequestSpecifier:(id)arg1 ;
+(id)returnAllResultsOptionKey;
+(struct shared_ptr<vision::mod::ImageClassifierAbstract> )createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> )arg0 classifierAbsolutePath:(char *)arg1 computePlatform:(int)arg2 computePath:(int)arg3 labelsFilename:(char *)arg4 options:(struct Options )arg5 ;
+(void)initDumpDebugIntermediates:(*id)arg0 debugInfo:(*id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;


@end


#endif