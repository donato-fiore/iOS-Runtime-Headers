// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNHORIZONDETECTOR_H
#define VNHORIZONDETECTOR_H



#import "VNDetector.h"

@interface VNHorizonDetector : VNDetector



-(BOOL)needsMetalContext;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif