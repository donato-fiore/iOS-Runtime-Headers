// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNGUIDEDUPSAMPLINGGENERATOR_H
#define VNGUIDEDUPSAMPLINGGENERATOR_H

@class MPSImageSpatioTemporalGuidedFilter;


#import "VNDetector.h"
#import "VNProcessingDevice.h"

@interface VNGuidedUpsamplingGenerator : VNDetector {
    VNProcessingDevice *_processingDevice;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
}




+(id)configurationOptionKeysForDetectorKey;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)_renderCIImage:(id)arg0 toBuffer:(*void)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 rowBytes:(NSUInteger)arg4 format:(unsigned int)arg5 error:(*id)arg6 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMetalContext;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(struct __CVBuffer *)_renderCIImage:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 format:(unsigned int)arg3 error:(*id)arg4 ;


@end


#endif