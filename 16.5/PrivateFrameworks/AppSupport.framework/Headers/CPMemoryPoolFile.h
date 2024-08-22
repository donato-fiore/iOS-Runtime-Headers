// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPMEMORYPOOLFILE_H
#define CPMEMORYPOOLFILE_H


#import <Foundation/Foundation.h>


@interface CPMemoryPoolFile : NSObject {
    _opaque_pthread_mutex_t _mutex;
    int _fd;
    char * _slots;
    NSUInteger _slotCount;
    NSUInteger _slotLength;
    *__CFBitVector _usedSlots;
    *__CFAllocator _deallocator;
}




-(id)initWithLabel:(char *)arg0 slotCount:(NSUInteger)arg1 slotLength:(NSUInteger)arg2 ;
-(id)nextSlotWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)returnSlot:(*void)arg0 ;


@end


#endif