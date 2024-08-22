// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPEVENTCACHE_H
#define PPEVENTCACHE_H

@class _PASLock, PPCalendarInternPool;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PPEventStorage.h"

@interface PPEventCache : NSObject {
    PPEventStorage *_storage;
    _PASLock *_data;
    PPCalendarInternPool *_calendarInternPool;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSUInteger _memoryPressureStatus;
}




-(id)cachedEventHighlightForEvent:(id)arg0 rankingOptions:(int)arg1 trialWrapper:(id)arg2 ;
-(id)initWithEventStorage:(id)arg0 ;
-(id)objectForRange:(struct _NSRange )arg0 ;
-(id)refreshCacheWithChanges:(id)arg0 ;
-(void)evictAllEventsNotInRange:(struct _NSRange )arg0 ;
-(void)removeAllObjects;
-(void)setEventHighlight:(id)arg0 ;
-(void)setExtraSecondsToBackfill:(NSUInteger)arg0 ;


@end


#endif