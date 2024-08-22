// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORRELATION_H
#define CORRELATION_H

@protocol MTLDevice, MTLCommandQueue, MTLLibrary, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface Correlation : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLLibrary> *_mtlLibrary;
    id<MTLComputePipelineState> *_correlationKernel;
    id<MTLComputePipelineState> *_correlationWithConcatKernel;
    id<MTLComputePipelineState> *_correlationSIMDKernel;
    id<MTLComputePipelineState> *_correlationWithConcatSIMDKernel;
    BOOL _interleaved;
}


@property (nonatomic) BOOL useSIMDShuffle; // ivar: _useSIMDShuffle


-(id)initWithDevice:(id)arg0 interleaved:(BOOL)arg1 ;
-(void)calcCorrelation:(id)arg0 with:(id)arg1 output:(id)arg2 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 first:(id)arg1 second:(id)arg2 destination:(id)arg3 ;
-(void)setupMetal;


@end


#endif