// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACELANDMARKDETECTORREVISION3_H
#define VNFACELANDMARKDETECTORREVISION3_H



#import "VNFaceLandmarkDetectorDNN.h"

@interface VNFaceLandmarkDetectorRevision3 : VNFaceLandmarkDetectorDNN



+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(unsigned char)landmarkDetectorDNNVersion;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(struct CGRect )normalizedFaceBBoxForLandmarks:(id)arg0 ;


@end


#endif