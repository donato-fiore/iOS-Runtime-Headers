// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGIOSCRATCHBUFFERALLOCATOR_H
#define MTLDEBUGIOSCRATCHBUFFERALLOCATOR_H



#import "MTLToolsIOScratchBufferAllocator.h"

@interface MTLDebugIOScratchBufferAllocator : MTLToolsIOScratchBufferAllocator



-(id)allocateScratchBufferWithMinimumSize:(NSUInteger)arg0 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)newScratchBufferWithMinimumSize:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif