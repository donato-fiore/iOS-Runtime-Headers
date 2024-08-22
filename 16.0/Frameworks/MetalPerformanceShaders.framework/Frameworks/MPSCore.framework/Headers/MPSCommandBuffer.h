// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCOMMANDBUFFER_H
#define MPSCOMMANDBUFFER_H

@class NSString, NSError;
@protocol MTLCommandBuffer, MTLBuffer, MTLCommandQueue, MTLDevice, MPSHeapProvider, MTLLogContainer;

#import <Foundation/Foundation.h>

#import "MPSPredicate.h"

@interface MPSCommandBuffer : NSObject <MTLCommandBuffer>

 {
    id<MTLBuffer> *_currentDispatchBuffer;
    NSUInteger _offsetToCurrentFree;
    *void _mpsDevice;
}


@property (readonly) CGFloat GPUEndTime;
@property (readonly) CGFloat GPUStartTime;
@property (readonly, retain, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: _commandBuffer
@property (readonly) NSObject<MTLCommandQueue> *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSError *error;
@property (readonly) NSUInteger errorOptions;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MPSHeapProvider> *heapProvider;
@property (readonly) CGFloat kernelEndTime;
@property (readonly) CGFloat kernelStartTime;
@property (copy) NSString *label;
@property (readonly) NSObject<MTLLogContainer> *logs;
@property MPSCommandBufferDescriptor mpsCommandBufferDescriptor; // ivar: _mpsCommandBufferDescriptor
@property (retain, nonatomic) MPSPredicate *predicate; // ivar: _predicate
@property (readonly) BOOL retainedReferences;
@property (readonly, retain, nonatomic) NSObject<MTLCommandBuffer> *rootCommandBuffer;
@property (readonly) NSUInteger status;
@property (readonly) Class superclass;


+(id)commandBufferFromCommandQueue:(id)arg0 ;
+(id)commandBufferWithCommandBuffer:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)computeCommandEncoderWithDispatchType:(NSUInteger)arg0 ;
-(id)dispatchBufferWithOffset:(*NSUInteger)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 ;
-(void)commitAndContinue;
-(void)dealloc;
-(void)prefetchHeapForWorkloadSize:(NSUInteger)arg0 ;


@end


#endif