// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGCHUNKMEMORY_H
#define _OSLOGCHUNKMEMORY_H

@class OSLogChunkStore;



@interface _OSLogChunkMemory : OSLogChunkStore {
    id *_deallocator;
}




-(id)initWithBytes:(*void)arg0 size:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(void)dealloc;


@end


#endif