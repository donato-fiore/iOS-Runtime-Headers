// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWRENDERLISTPROCESSOR_H
#define BWRENDERLISTPROCESSOR_H

@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"

@interface BWRenderListProcessor : NSObject {
    NSObject<OS_dispatch_queue> *_configurationMutexQueue;
    BOOL _configurationQueueAlwaysEmitsOriginalResult;
    NSObject<OS_dispatch_group> *_renderingGroup;
    *opaqueCMFormatDescription _mostRecentFormatDescription;
}


@property (nonatomic) BOOL alwaysEmitsOriginalResult;
@property (readonly, nonatomic) BWPixelBufferPool *renderingPool; // ivar: _renderingPool


+(void)initialize;
-(id)initWithRenderingPool:(id)arg0 ;
-(void)_continueRenderingUsingRenderList:(id)arg0 result:(NSUInteger)arg1 resultError:(id)arg2 fromRendererNode:(struct BWRenderListRendererNode *)arg3 parameterNode:(struct BWRenderListParameterNode *)arg4 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg5 inputPixelBuffer:(struct __CVBuffer *)arg6 finalResultHandler:(id)arg7 ;
-(void)_emitProcessedSampleBufferFromRenderList:(id)arg0 result:(NSUInteger)arg1 resultError:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 finalResultHandler:(id)arg5 ;
-(void)_finishRenderingUsingRenderList:(id)arg0 result:(NSUInteger)arg1 resultError:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 finalResultHandler:(id)arg5 ;
-(void)_processRenderList:(id)arg0 parameterListProvider:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resultHandler:(id)arg4 ;
-(void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingRenderList:(id)arg1 ;
-(void)dealloc;
-(void)processRenderList:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 resultHandler:(id)arg3 ;
-(void)processRenderList:(id)arg0 withParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resultHandler:(id)arg4 ;
-(void)waitForAllProcessingToComplete;


@end


#endif