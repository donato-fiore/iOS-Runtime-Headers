// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACEANALYZERMULTIDETECTORFPREV3_1FAREV1_3_MD2_H
#define VNFACEANALYZERMULTIDETECTORFPREV3_1FAREV1_3_MD2_H



#import "VNFaceAnalyzerMultiDetector.h"

@interface VNFaceAnalyzerMultiDetectorFPrev3_1FArev1_3_MD2 : VNFaceAnalyzerMultiDetector



+(*void)modelVersionForOptions:(id)arg0 ;
+(id)availableVNInferenceNetworkIdentifierFaceprintVersions;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)inferenceNetworkIdentifiers;
+(id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierFaceprint_3_1_0;
-(BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> )arg0 ;


@end


#endif