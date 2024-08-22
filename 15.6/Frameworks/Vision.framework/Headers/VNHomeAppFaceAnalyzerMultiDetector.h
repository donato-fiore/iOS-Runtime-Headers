// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNHOMEAPPFACEANALYZERMULTIDETECTOR_H
#define VNHOMEAPPFACEANALYZERMULTIDETECTOR_H



#import "VNHomeAppFaceAnalyzerMultiDetectorBase.h"

@interface VNHomeAppFaceAnalyzerMultiDetector : VNHomeAppFaceAnalyzerMultiDetectorBase



+(*void)modelVersionForOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> )arg0 ;


@end


#endif