// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNHORIZONDETECTOR_H
#define VNHORIZONDETECTOR_H



#import "VNDetector.h"

@interface VNHorizonDetector : VNDetector



-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)needsMetalContext;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;


@end


#endif