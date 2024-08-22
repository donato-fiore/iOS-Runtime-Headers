// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSOFTISPPROCESSORCONTROLLER_H
#define BWSOFTISPPROCESSORCONTROLLER_H

@class SoftISPProcessor, SoftISPPrepareDescriptor, NSDictionary, NSMutableDictionary, NSString;
@protocol BWSoftISPProcessorControllerInputUpdatesDelegate, SoftISPProcessorDelegate;


#import "BWStillImageProcessorController.h"

@interface BWSoftISPProcessorController : BWStillImageProcessorController <BWSoftISPProcessorControllerInputUpdatesDelegate, SoftISPProcessorDelegate>

 {
    SoftISPProcessor *_processor;
    SoftISPPrepareDescriptor *_prepareDescriptor;
    NSDictionary *_sensorIDByPortType;
    *opaqueCMFormatDescription _inputFormatDescription;
    *opaqueCMFormatDescription _outputFormatDescription;
    *opaqueCMFormatDescription _lscFormatDescription;
    NSMutableDictionary *_digitalFlashAWBMetadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)usesCustomProcessingFlow;
-(id)externalMemoryDescriptor;
-(id)initWithConfiguration:(id)arg0 ;
-(id)metalImageBufferProcessor;
-(id)requestForInput:(id)arg0 delegate:(id)arg1 errOut:(*int)arg2 ;
-(int)prepare;
-(int)process;
-(struct __CVBuffer *)newOutputAuxiliaryPixelBufferForUniqueID:(NSUInteger)arg0 pixelFormat:(unsigned int)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(struct __CVBuffer *)newOutputPixelBufferForUniqueID:(NSUInteger)arg0 pixelFormat:(unsigned int)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(unsigned int)auxiliaryPixelFormatForInput:(id)arg0 ;
-(unsigned int)outputPixelFormatForCaptureType:(int)arg0 captureFlags:(NSUInteger)arg1 processingMode:(int)arg2 ;
-(unsigned int)outputPixelFormatForCaptureType:(int)arg0 captureFlags:(NSUInteger)arg1 processingMode:(int)arg2 isQuadra:(BOOL)arg3 ;
-(unsigned int)outputPixelFormatForCaptureType:(int)arg0 processingMode:(int)arg1 ;
-(unsigned int)outputPixelFormatForInput:(id)arg0 ;
-(void)dealloc;
-(void)input:(id)arg0 addFrame:(struct opaqueCMSampleBuffer *)arg1 processingMode:(int)arg2 ;
-(void)notifyProcessInputFrameForUniqueID:(NSUInteger)arg0 ;
-(void)outputFrameCompleted:(id)arg0 ;
-(void)outputFrameEnqueueFailure:(id)arg0 ;
-(void)outputFrameEnqueued:(id)arg0 ;
-(void)outputFrameGPUFailure:(id)arg0 ;
-(void)reset;


@end


#endif