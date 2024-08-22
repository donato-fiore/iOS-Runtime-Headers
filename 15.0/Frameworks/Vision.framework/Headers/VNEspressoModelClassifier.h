// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNESPRESSOMODELCLASSIFIER_H
#define VNESPRESSOMODELCLASSIFIER_H

@class NSSet;


#import "VNDetector.h"

@interface VNEspressoModelClassifier : VNDetector {
    ? mDescriptorProcessor;
    ? mClassifier;
    NSSet *_blacklistedIdentifiers;
}




+(?)createDescriprorProcessorWithModelPath:(?)arg0 nBatch:(?)arg1 computePlatform:(?)arg2 computePathoptions;
+(id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg0 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)createObservationWithDescriptors:(id)arg0 forOriginatingRequestSpecifier:(id)arg1 ;
+(struct shared_ptr<vision::mod::ImageClassifierAbstract> )createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> )arg0 classifierAbsolutePath:(char *)arg1 computePlatform:(int)arg2 computePath:(int)arg3 labelsFilename:(char *)arg4 options:(struct Options )arg5 ;
+(struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> )createHierarchicalModelForOriginatingRequestSpecifier:(id)arg0 error:(*id)arg1 ;
+(void)convertRelationships:(id)arg0 toStdRelationships:(*void)arg1 ;
+(void)initDumpDebugIntermediates:(*id)arg0 debugInfo:(*id)arg1 ;
-(BOOL)_calculateImageDescriptors:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 canceller:(id)arg3 descriptorBuffer:(*void)arg4 debugIntermediatesDumpPath:(id)arg5 outputDebugDictionary:(id)arg6 error:(*id)arg7 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)blacklistedIdentifiers;
-(id)calculateImageDescriptors:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 canceller:(id)arg3 error:(*id)arg4 ;
-(id)getLabels;


@end


#endif