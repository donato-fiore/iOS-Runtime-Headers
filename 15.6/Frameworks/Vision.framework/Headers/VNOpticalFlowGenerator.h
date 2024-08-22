// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNOPTICALFLOWGENERATOR_H
#define VNOPTICALFLOWGENERATOR_H



#import "VNDetector.h"

@interface VNOpticalFlowGenerator : VNDetector



-(?)_calculateLKTVectorResult:(?)arg0 fromPixelBuffer:(?)arg1 toPixelBuffer:(?)arg2 opticalFlowOptions:(?)arg3 useCPUerror;
-(?)_createOpticalFlowForPixelBuffer:(?)arg0 opticalFlowOptions:(?)arg1 useCPUerror;
-(id)_initializedLKTMetalContextAndReturnError:(*id)arg0 ;
-(id)_validatedImageBuffersFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(struct CVPixelBufferWrapper )_createVectorResultPixelBufferWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 error:(*id)arg3 ;
-(struct optional<OpticalFlowOptions> )_validatedOpticalFlowOptions:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 error:(*id)arg3 ;


@end


#endif