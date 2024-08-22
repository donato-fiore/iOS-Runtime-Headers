// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSPUBLICEVENTCACHE_H
#define CLSPUBLICEVENTCACHE_H



#import "CLSDBCache.h"

@interface CLSPublicEventCache : CLSDBCache



-(BOOL)hasTimeLocationTuple:(id)arg0 ;
-(BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)arg0 forTimeLocationTuples:(id)arg1 ;
-(NSUInteger)numberOftimeLocationTuplesForTimeLocationTuple:(id)arg0 ;
-(id)dataModelName;
-(id)init;
-(id)predicateForTimeLocationTuple:(id)arg0 ;
-(id)publicEventFromManagedObject:(id)arg0 ;
-(id)publicEventsForMuid:(NSUInteger)arg0 ;
-(id)publicEventsForTimeLocationTuple:(id)arg0 ;
-(void)_updateManagedEvent:(id)arg0 withEvent:(id)arg1 inContext:(id)arg2 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(CGFloat)arg0 ;


@end


#endif