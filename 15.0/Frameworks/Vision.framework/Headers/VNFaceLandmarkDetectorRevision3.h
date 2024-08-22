// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACELANDMARKDETECTORREVISION3_H
#define VNFACELANDMARKDETECTORREVISION3_H



#import "VNFaceLandmarkDetectorDNN.h"

@interface VNFaceLandmarkDetectorRevision3 : VNFaceLandmarkDetectorDNN



+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned char)landmarkDetectorDNNVersion;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(struct CGRect )normalizedFaceBBoxForLandmarks:(id)arg0 ;


@end


#endif