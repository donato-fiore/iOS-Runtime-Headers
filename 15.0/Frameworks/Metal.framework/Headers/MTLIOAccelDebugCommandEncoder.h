// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELDEBUGCOMMANDENCODER_H
#define MTLIOACCELDEBUGCOMMANDENCODER_H

@class MTLDebugCommandEncoder;


#import "MTLResourceList.h"

@interface MTLIOAccelDebugCommandEncoder : MTLDebugCommandEncoder {
    *void _kernelCommandBufferCurrent;
    *void _kernelCommandBufferEnd;
    *IOAccelResourceList _resourceList;
    MTLResourceList *_api_resourceList;
}




-(*void)reserveKernelCommandBufferSpace:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 ;
-(unsigned int)addDebugResourceListInfo:(struct IOAccelResourceInfo *)arg0 flag:(unsigned int)arg1 ;
-(void)IOLogBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)IOLogResource:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(void)addAPIResource:(id)arg0 ;
-(void)dealloc;
-(void)debugBytes:(char *)arg0 length:(NSUInteger)arg1 output_type:(unsigned int)arg2 ;
-(void)debugResourceBytes:(unsigned int)arg0 length:(NSUInteger)arg1 output_type:(unsigned int)arg2 ;
-(void)endEncoding;
-(void)kprintfBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)kprintfResource:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(void)restartDebugPass;


@end


#endif