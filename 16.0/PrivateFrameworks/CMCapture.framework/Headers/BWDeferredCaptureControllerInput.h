// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEFERREDCAPTURECONTROLLERINPUT_H
#define BWDEFERREDCAPTURECONTROLLERINPUT_H



#import "BWStillImageProcessorControllerInput.h"
#import "BWDeferredCaptureControllerConfiguration.h"
#import "BWStillImageSettings.h"
#import "BWDeferredCaptureContainer.h"
#import "BWDeferredPipelineParameters.h"

@interface BWDeferredCaptureControllerInput : BWStillImageProcessorControllerInput {
    BWDeferredCaptureControllerConfiguration *_configuration;
    BWStillImageSettings *_settings;
    BOOL _proxyBufferReady;
}


@property (readonly, nonatomic) BWDeferredCaptureContainer *captureContainer; // ivar: _captureContainer
@property (readonly, nonatomic) int compressionProfile; // ivar: _compressionProfile
@property (readonly, nonatomic) BWDeferredPipelineParameters *pipelineParameters;
@property (nonatomic) int processingError; // ivar: _processingError


-(id)initWithSettings:(id)arg0 configuration:(id)arg1 sourceNodePixelBufferAttributes:(id)arg2 ;
-(void)_addDictionary:(id)arg0 tag:(id)arg1 ;
-(void)_addInference:(id)arg0 inferenceAttachmentKey:(id)arg1 portType:(id)arg2 ;
-(void)_addInferenceBuffer:(struct __CVBuffer *)arg0 inferenceAttachedMediaKey:(id)arg1 portType:(id)arg2 ;
-(void)addBuffer:(struct __CVBuffer *)arg0 bufferType:(NSUInteger)arg1 captureFrameFlags:(NSUInteger)arg2 metadata:(id)arg3 rawThumbnailsBuffer:(struct __CVBuffer *)arg4 rawThumbnailsMetadata:(id)arg5 portType:(id)arg6 ;
-(void)addDictionary:(id)arg0 tag:(id)arg1 ;
-(void)addPhotoDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)encounteredProcessingError:(int)arg0 ;
-(void)proxyBufferReady;


@end


#endif