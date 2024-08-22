// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWOBJECTRINGBUFFERTHREADSAFE_H
#define BWOBJECTRINGBUFFERTHREADSAFE_H



#import "BWObjectRingBuffer.h"

@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {
    *OpaqueFigReentrantMutex _lock;
}




-(id)description;
-(id)firstObject;
-(id)initWithCapacity:(int)arg0 ;
-(id)lastObject;
-(struct ? )firstTime;
-(struct ? )lastTime;
-(void)appendObject:(id)arg0 forTime:(struct ? )arg1 ;
-(void)clear;
-(void)dealloc;
-(void)enumerateObjectsStartingAt:(struct ? )arg0 usingBlock:(id)arg1 ;
-(void)extractTimeRangeFrom:(struct ? )arg0 until:(struct ? )arg1 into:(id)arg2 times:(id)arg3 ;
-(void)flushEntriesEarlierThan:(struct ? )arg0 ;
-(void)reverseEnumerateObjectsStartingAt:(struct ? )arg0 usingBlock:(id)arg1 ;
-(void)setCapacity:(int)arg0 ;


@end


#endif