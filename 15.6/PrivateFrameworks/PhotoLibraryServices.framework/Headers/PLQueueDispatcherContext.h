// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLQUEUEDISPATCHERCONTEXT_H
#define PLQUEUEDISPATCHERCONTEXT_H

@class NSManagedObjectContext;


#import "_PLQueueDispatcherQueueTrackingStats.h"

@interface PLQueueDispatcherContext : NSManagedObjectContext {
    _PLQueueDispatcherQueueTrackingStats *_pl_stats;
}




-(id)initWithConcurrencyType:(NSUInteger)arg0 ;
-(id)pl_queueDispatcherTrackingStats;


@end


#endif