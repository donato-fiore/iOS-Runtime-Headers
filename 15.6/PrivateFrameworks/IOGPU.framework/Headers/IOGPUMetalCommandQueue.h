// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOGPUMETALCOMMANDQUEUE_H
#define IOGPUMETALCOMMANDQUEUE_H

@class MTLCommandQueue;
@protocol MTLDevice;



@interface IOGPUMetalCommandQueue : MTLCommandQueue {
    *__IOGPUCommandQueue _commandQueue;
    NSUInteger _priority;
    NSUInteger _backgroundPriority;
}


@property (readonly) NSObject<MTLDevice> *device; // ivar: _device


-(BOOL)_setGPUPriority:(NSUInteger)arg0 backgroundPriority:(NSUInteger)arg1 ;
-(BOOL)setBackgroundGPUPriority:(NSUInteger)arg0 ;
-(BOOL)setBackgroundGPUPriority:(NSUInteger)arg0 offset:(unsigned short)arg1 ;
-(BOOL)setGPUPriority:(NSUInteger)arg0 ;
-(BOOL)setGPUPriority:(NSUInteger)arg0 offset:(unsigned short)arg1 ;
-(NSUInteger)getBackgroundGPUPriority;
-(NSUInteger)getGPUPriority;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(void)_submitCommandBuffers:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)setCompletionQueue:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)submitCommandBuffers:(*id)arg0 count:(NSUInteger)arg1 ;


@end


#endif