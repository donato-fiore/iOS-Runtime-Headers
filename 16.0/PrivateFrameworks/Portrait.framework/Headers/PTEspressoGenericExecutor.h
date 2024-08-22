// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTESPRESSOGENERICEXECUTOR_H
#define PTESPRESSOGENERICEXECUTOR_H

@class NSMutableDictionary, NSMutableArray, NSURL, NSString;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PTEspressoGenericExecutor : NSObject {
    *void _ctx;
    *void _plan;
    ? _net;
    NSMutableDictionary *_inputsMap;
    NSMutableDictionary *_outputsMap;
    NSMutableArray *_inputConversion;
    NSMutableArray *_tensorSwap;
    NSObject<OS_dispatch_queue> *_espressoCallbackQueue;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_unInterleaveTexture;
    NSURL *_url;
    NSString *_networkVersion;
}




+(NSUInteger)getEspressoMetalDeviceId:(id)arg0 ;
-(id)getInputResourceWithName:(id)arg0 ;
-(id)getOutputResourceWithName:(id)arg0 ;
-(id)getResourceWithName:(id)arg0 fromMap:(id)arg1 ;
-(id)initPipelineState:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 ;
-(id)initWithUrl:(id)arg0 inputNames:(id)arg1 outputNames:(id)arg2 tensorSwapNames:(id)arg3 device:(id)arg4 library:(id)arg5 pipelineLibrary:(id)arg6 commandQueue:(id)arg7 reshape:(struct ? *)arg8 configuration:(id)arg9 ;
-(id)networkVersion;
-(id)texture2DArrayToTexture2D:(id)arg0 ;
-(short)bindBuffers:(id)arg0 toMap:(id)arg1 withMode:(int)arg2 ;
-(short)bindTensorSwaps:(id)arg0 ;
-(unsigned int)bindInputResourceWithName:(id)arg0 to:(struct __CVBuffer *)arg1 ;
-(unsigned int)convertBindInput;
-(unsigned int)execute;
-(unsigned int)executeAsync;
-(unsigned int)executeAsync:(id)arg0 ;
-(unsigned int)tensorSwap:(int)arg0 ;
-(void)dealloc;
-(void)unInterleaveTexture:(id)arg0 input:(id)arg1 output:(id)arg2 ;


@end


#endif