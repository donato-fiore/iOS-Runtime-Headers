// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEANALYZERMULTIDETECTORFPREV3_1FAREV1_3_MD3_H
#define VNFACEANALYZERMULTIDETECTORFPREV3_1FAREV1_3_MD3_H



#import "VNFaceAnalyzerMultiDetector.h"

@interface VNFaceAnalyzerMultiDetectorFPrev3_1FArev1_3_MD3 : VNFaceAnalyzerMultiDetector



+(*void)modelVersionForOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
-(BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> )arg0 ;


@end


#endif