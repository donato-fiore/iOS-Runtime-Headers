// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMMEMORYMAPPING_H
#define BMMEMORYMAPPING_H


#import <Foundation/Foundation.h>

#import "BMSharedMemory.h"

@interface BMMemoryMapping : NSObject {
    int _protection;
    int _advice;
    BMSharedMemory *_sharedMemory;
    uint8_t _currentWriteOffset;
    *void _start;
    NSUInteger _size;
    NSInteger _offset;
    *void _mappedAddress;
    NSUInteger _pageAlignedSize;
    NSUInteger _offsetSpace;
}


@property (readonly) NSUInteger currentWriteOffset;
@property (readonly) char * end;
@property (readonly) NSUInteger freeSpace;
@property (readonly) NSInteger offset;
@property (readonly) NSUInteger size;
@property (readonly) *void start;
@property (readonly) NSUInteger used;
@property (readonly, getter=isWritable) BOOL writable;


+(id)new;
-(*void)currentPosition;
// -(BOOL)atomicUpdateOffset:(NSUInteger)arg0 withValue:(unk)arg1 shouldReplace:(NSUInteger)arg2  ;
-(BOOL)canAtomicallyAccessOffset:(NSUInteger)arg0 ;
-(BOOL)isValidReadFromOffset:(NSUInteger)arg0 withLength:(NSUInteger)arg1 ;
-(BOOL)mapWithFileHandle:(id)arg0 fileSize:(NSUInteger)arg1 ;
-(BOOL)mapWithSharedMemory:(id)arg0 ;
-(id)dataAtOffset:(NSUInteger)arg0 withLength:(NSUInteger)arg1 makeCopy:(BOOL)arg2 ;
-(id)init;
-(id)initWithSize:(NSUInteger)arg0 protection:(int)arg1 advice:(int)arg2 offset:(NSInteger)arg3 ;
-(unsigned char)atomicReadAtOffset:(NSUInteger)arg0 value:(*unk)arg1 ;
-(unsigned char)atomicWriteBytes:(NSUInteger)arg0 toOffset:(NSUInteger)arg1 expected:(*NSUInteger)arg2 ;
-(void)dealloc;
-(void)sync;
-(void)unmap;
-(void)updateToMaxOfCurrentWriteOffsetAnd:(NSUInteger)arg0 ;
-(void)writeBytes:(*void)arg0 toOffset:(NSUInteger)arg1 length:(NSUInteger)arg2 ;


@end


#endif