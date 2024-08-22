// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMEMEMORYEVENTBUS_H
#define HMEMEMORYEVENTBUS_H

@class NSString;
@protocol HMETopicRouterDelegate, HMELastEventStoreWriter, HMEEventForwarder, HMESubscriptionProviding, HMEEventConsumer, OS_os_log, HMEMemoryEventBusDelegate, HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMETopicRouter.h"

@interface HMEMemoryEventBus : NSObject <HMETopicRouterDelegate, HMELastEventStoreWriter, HMEEventForwarder, HMESubscriptionProviding, HMEEventConsumer>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMEMemoryEventBusDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSObject<HMELastEventStoreWriteHandle> *eventStoreWriteHandle; // ivar: _eventStoreWriteHandle
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly) HMETopicRouter *topicRouter; // ivar: _topicRouter


-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 storeReadHandle:(id)arg1 storeWriteHandle:(id)arg2 logCategory:(char *)arg3 ;
-(void)changeRegistrationsForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg0 removals:(id)arg1 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)forwardEvent:(id)arg0 topic:(id)arg1 completion:(id)arg2 ;
-(void)registerConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;
-(void)unregisterConsumer:(id)arg0 completion:(id)arg1 ;
-(void)unregisterConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;


@end


#endif