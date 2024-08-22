// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNSEGMENTATIONGENERATOR_H
#define VNSEGMENTATIONGENERATOR_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNSegmentationGenerator : VNEspressoModelFileBasedDetector {
    BufferSize _espressoMaskInputBufferSize;
    BufferSize _espressoInputImageSize;
    BufferSize _espressoInputMaskSize;
}


@property (readonly) *BufferSize espressoInputImageSize;
@property (readonly) *BufferSize espressoInputMaskSize;
@property (readonly) *void espressoMaskOutputBufferSizes; // ivar: _espressoMaskOutputBufferSizes
@property (readonly) *void espressoMaskOutputBuffers; // ivar: _espressoMaskOutputBuffers
@property (readonly, nonatomic) BufferSize outputMaskSize;


+(BOOL)supportsTiling;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)outputConfidenceBlobNames;
+(id)requestInfoForRequest:(id)arg0 ;
+(id)requestKeyToRequestInfo;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)bindOutputConfidenceBuffersAndReturnError:(*id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMetalContext;
-(float)maskConfidenceForOutputMaskBlobName:(id)arg0 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(struct __CVBuffer *)renderCIImage:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 format:(unsigned int)arg3 processingDevice:(id)arg4 error:(*id)arg5 ;
-(struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> )processLockedImageBuffer:(struct __CVBuffer *)arg0 inputMaskObservation:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(void)initializeOutputConfidenceBuffers:(*void)arg0 ;


@end


#endif