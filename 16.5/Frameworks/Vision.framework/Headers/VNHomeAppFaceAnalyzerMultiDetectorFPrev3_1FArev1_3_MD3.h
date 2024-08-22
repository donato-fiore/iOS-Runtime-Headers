// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNHOMEAPPFACEANALYZERMULTIDETECTORFPREV3_1FAREV1_3_MD3_H
#define VNHOMEAPPFACEANALYZERMULTIDETECTORFPREV3_1FAREV1_3_MD3_H



#import "VNHomeAppFaceAnalyzerMultiDetectorBase.h"

@interface VNHomeAppFaceAnalyzerMultiDetectorFPrev3_1FArev1_3_MD3 : VNHomeAppFaceAnalyzerMultiDetectorBase



+(*void)modelVersionForOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> )arg0 ;


@end


#endif