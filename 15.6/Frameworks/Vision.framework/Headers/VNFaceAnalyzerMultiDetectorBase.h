// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEANALYZERMULTIDETECTORBASE_H
#define VNFACEANALYZERMULTIDETECTORBASE_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {
    shared_ptr<vision::mod::FaceprintAndAttributes> _mMultiHeadedFaceClassifier;
}




+(*void)modelVersionForOptions:(id)arg0 ;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)numberOfImageChannels;
+(id)configurationOptionKeysForDetectorKey;
+(id)keyForDetectorWithConfigurationOptions:(id)arg0 ;
-(?)_saveFaceprint:(?)arg0 toFaceObservation:(?)arg1 optionserror;
-(BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> )arg0 ;
-(BOOL)_saveFaceAttributes:(*void)arg0 toFaceObservation:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(void)_addFaceAnalysisResultsFromMap:(*void)arg0 toFaceAttributeObject:(id)arg1 forOriginatingRequestSpecifier:(id)arg2 ;


@end


#endif