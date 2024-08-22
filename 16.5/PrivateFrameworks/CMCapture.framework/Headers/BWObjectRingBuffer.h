// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWOBJECTRINGBUFFER_H
#define BWOBJECTRINGBUFFER_H


#import <Foundation/Foundation.h>


@interface BWObjectRingBuffer : NSObject {
    *id _objects;
    *? _times;
    int _oldest;
    BOOL _enforceAscending;
}


@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (nonatomic) int capacity; // ivar: _capacity
@property (readonly, nonatomic) int count; // ivar: _count
@property (nonatomic) BOOL enforceAscending;
@property (nonatomic) BOOL expectAscending; // ivar: _expectAscending


+(void)initialize;
-(id)description;
-(id)firstObject;
-(id)initWithCapacity:(int)arg0 ;
-(id)lastObject;
-(int)_findClosestOffsetToTimestamp:(struct ? )arg0 ;
-(struct ? )firstTime;
-(struct ? )lastTime;
-(void)_enumerateObjectsStartingAtOffset:(int)arg0 usingBlock:(id)arg1 ;
-(void)_forceAscendingTo:(BOOL)arg0 ;
-(void)_reverseEnumerateObjectsStartingAtOffset:(int)arg0 usingBlock:(id)arg1 ;
-(void)appendObject:(id)arg0 forTime:(struct ? )arg1 ;
-(void)clear;
-(void)dealloc;
-(void)enumerateObjectsStartingAt:(struct ? )arg0 usingBlock:(id)arg1 ;
-(void)extractTimeRangeFrom:(struct ? )arg0 until:(struct ? )arg1 into:(id)arg2 times:(id)arg3 ;
-(void)flushEntriesEarlierThan:(struct ? )arg0 ;
-(void)reverseEnumerateObjectsStartingAt:(struct ? )arg0 usingBlock:(id)arg1 ;


@end


#endif