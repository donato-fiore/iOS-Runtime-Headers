// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNBLURDETECTOR_H
#define VNBLURDETECTOR_H



#import "VNDetector.h"

@interface VNBlurDetector : VNDetector



+(BOOL)isReentrant;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(struct __CVBuffer *)_createPixelBufferFromImageBuffer:(id)arg0 regionOfInterest:(struct CGRect )arg1 maximumIntermediateSideLength:(NSUInteger)arg2 options:(id)arg3 error:(*id)arg4 ;


@end


#endif