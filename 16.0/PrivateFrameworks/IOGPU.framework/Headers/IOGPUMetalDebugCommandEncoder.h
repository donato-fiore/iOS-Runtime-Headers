// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOGPUMETALDEBUGCOMMANDENCODER_H
#define IOGPUMETALDEBUGCOMMANDENCODER_H

@class MTLDebugCommandEncoder, MTLResourceList;



@interface IOGPUMetalDebugCommandEncoder : MTLDebugCommandEncoder {
    *void _kernelCommandBufferCurrent;
    *void _kernelCommandBufferEnd;
    *IOGPUResourceList _resourceList;
    MTLResourceList *_api_resourceList;
}




-(*void)reserveKernelCommandBufferSpace:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 ;
-(unsigned int)addDebugResourceListInfo:(struct IOGPUResourceInfo *)arg0 flag:(unsigned int)arg1 ;
-(void)IOLogBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)addAPIResource:(id)arg0 ;
-(void)dealloc;
-(void)debugBytes:(char *)arg0 length:(NSUInteger)arg1 output_type:(unsigned int)arg2 ;
-(void)endEncoding;
-(void)kprintfBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)restartDebugPass;


@end


#endif