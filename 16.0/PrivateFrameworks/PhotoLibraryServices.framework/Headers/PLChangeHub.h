// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCHANGEHUB_H
#define PLCHANGEHUB_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLChangeStore.h"

@interface PLChangeHub : NSObject {
    BOOL _didInitializeState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSObject<OS_dispatch_queue> *_eventsSerializationQueue;
    PLChangeStore *_changeStore;
}




+(NSUInteger)currentInMemoryEventIndex;
+(id)sharedChangeHub;
+(void)setCurrentInMemoryEventIndex:(NSUInteger)arg0 ;
-(NSUInteger)_inq_currentEventIndex;
-(id)init;
-(void)_inq_sendPendingEventsForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_onEventsQueueAsyncWithTransaction:(id)arg0 perform:(id)arg1 ;
-(void)_startListeningToMemoryPressureEvents;
-(void)clearChangeStore:(id)arg0 ;
// -(void)eventsSinceIndex:(NSUInteger)arg0 filteredBy:(id)arg1 onQueue:(unk)arg2 withBlock:(id)arg3  ;
-(void)fetchCurrentEventIndexWithCompletionHandler:(id)arg0 ;
-(void)sendPendingEventsForRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif