// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECTANGLEDETECTOR_H
#define VNRECTANGLEDETECTOR_H



#import "VNDetector.h"

@interface VNRectangleDetector : VNDetector {
    *float _perMeshPtr;
}




+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMetalContext;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif