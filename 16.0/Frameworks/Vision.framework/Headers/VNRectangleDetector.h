// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRECTANGLEDETECTOR_H
#define VNRECTANGLEDETECTOR_H



#import "VNDetector.h"

@interface VNRectangleDetector : VNDetector {
    *float _perMeshPtr;
}




+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)needsMetalContext;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(void)dealloc;


@end


#endif