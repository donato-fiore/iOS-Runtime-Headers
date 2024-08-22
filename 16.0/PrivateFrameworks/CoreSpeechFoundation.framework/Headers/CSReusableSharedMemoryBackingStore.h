// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREUSABLESHAREDMEMORYBACKINGSTORE_H
#define CSREUSABLESHAREDMEMORYBACKINGSTORE_H



#import "CSReusableBufferBackingStore.h"

@interface CSReusableSharedMemoryBackingStore : CSReusableBufferBackingStore



-(id)initWithBuffer:(*void)arg0 bufferSize:(NSUInteger)arg1 deallocator:(id)arg2 ;


@end


#endif