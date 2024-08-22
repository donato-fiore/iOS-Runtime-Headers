// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOGPUMETALPARALLELRENDERCOMMANDENCODER_H
#define IOGPUMETALPARALLELRENDERCOMMANDENCODER_H

@class MTLParallelRenderCommandEncoder;



@interface IOGPUMetalParallelRenderCommandEncoder : MTLParallelRenderCommandEncoder



-(BOOL)isMemorylessRender;
-(NSUInteger)getType;
-(id)initWithCommandBuffer:(id)arg0 renderPassDescriptor:(id)arg1 ;
-(void)endEncoding;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setLabel:(id)arg0 ;


@end


#endif