// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)blacklistedIdentifiers;
-(id)calculateImageDescriptors:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 canceller:(id)arg3 error:(*id)arg4 ;
-(id)getLabels;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;


@end


#endif