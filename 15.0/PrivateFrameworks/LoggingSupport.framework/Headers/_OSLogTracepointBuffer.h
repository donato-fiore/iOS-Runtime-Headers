// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGTRACEPOINTBUFFER_H
#define _OSLOGTRACEPOINTBUFFER_H


#import <Foundation/Foundation.h>


@interface _OSLogTracepointBuffer : NSObject {
    *? _events;
    NSUInteger _cursor;
    NSUInteger _count;
    NSUInteger _size;
    BOOL _mutable;
}




-(BOOL)_isEmpty;
-(id)init;
-(void)beginInsertingTracepointsClippingFromTime:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateEventsFromTime:(NSUInteger)arg0 to:(NSUInteger)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3 ;
-(void)finishedInsertingTracepointsWithNextMajorTime:(NSUInteger)arg0 options:(unsigned int)arg1 ;
-(void)insertChunk:(struct tracev3_chunk_s *)arg0 timestamp:(NSUInteger)arg1 subchunk:(id)arg2 ;
-(void)insertNonsparsePoint:(NSUInteger)arg0 uuid:(unsigned char)arg1 ttl:(unsigned char)arg2 inMemory:(BOOL)arg3 ;
-(void)insertSimpleChunk:(struct tracev3_chunk_s *)arg0 subchunk:(id)arg1 ;
-(void)insertStatedumpChunk:(struct tracev3_chunk_s *)arg0 subchunk:(id)arg1 ;
-(void)insertTimesyncPoints:(struct _os_timesync_db_s *)arg0 forBoot:(unsigned char)arg1 oldestContinuousTime:(NSUInteger)arg2 ;
-(void)insertTracepoints:(struct tracev3_chunk_s *)arg0 subchunk:(id)arg1 options:(unsigned int)arg2 ;


@end


#endif