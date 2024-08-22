// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGHEAP_H
#define MTLGPUDEBUGHEAP_H



#import "MTLToolsHeap.h"

@interface MTLGPUDebugHeap : MTLToolsHeap



-(id)initWithHeap:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;


@end


#endif