// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSWFRPROCESSORCONTROLLER_H
#define BWSWFRPROCESSORCONTROLLER_H

@class NSString;
@protocol BWSWFRProcessorControllerInputUpdatesDelegate, CMISoftwareFlashRenderingProcessorDelegate, CMISoftwareFlashRenderingProcessor;


#import "BWStillImageProcessorController.h"

@interface BWSWFRProcessorController : BWStillImageProcessorController <BWSWFRProcessorControllerInputUpdatesDelegate, CMISoftwareFlashRenderingProcessorDelegate>

 {
    int _version;
    id<CMISoftwareFlashRenderingProcessor> *_processor;
    *opaqueCMFormatDescription _outputFormatDescription;
    *opaqueCMFormatDescription _demosaicedRawFormatDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int outputPixelFormat; // ivar: _outputPixelFormat
@property (readonly) Class superclass;


+(BOOL)usesCustomProcessingFlow;
-(id)initWithConfiguration:(id)arg0 ;
-(id)metalImageBufferProcessor;
-(id)processorNewInferences:(id)arg0 ;
-(id)requestForInput:(id)arg0 delegate:(id)arg1 errOut:(*int)arg2 ;
-(int)prepare;
-(int)process;
-(void)dealloc;
-(void)input:(id)arg0 addAmbientFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)input:(id)arg0 addFlashFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)inputAddFrameFailed:(id)arg0 ;
-(void)reset;


@end


#endif