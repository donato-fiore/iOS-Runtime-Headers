// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNHOMEAPPFACEANALYZERMULTIDETECTORBASE_H
#define VNHOMEAPPFACEANALYZERMULTIDETECTORBASE_H



#import "VNFaceAnalyzerMultiDetectorBase.h"

@interface VNHomeAppFaceAnalyzerMultiDetectorBase : VNFaceAnalyzerMultiDetectorBase



-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;


@end


#endif