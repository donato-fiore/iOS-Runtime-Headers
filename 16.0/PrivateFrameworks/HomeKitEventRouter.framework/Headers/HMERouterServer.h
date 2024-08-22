// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMEROUTERSERVER_H
#define HMEROUTERSERVER_H

@class NSString, NSMapTable;
@protocol HMEEventConsumer, HMETopicRouterDelegate, HMELastEventStoreWriter, OS_os_log, HMELastEventStoreReadHandle, HMEEventForwarder, OS_dispatch_queue, HMESynchronousSubscriptionProviding;

#import <Foundation/Foundation.h>

#import "HMETopicRouter.h"

@interface HMERouterServer : NSObject <HMEEventConsumer, HMETopicRouterDelegate, HMELastEventStoreWriter>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMEEventForwarder> *localEventForwarder; // ivar: _localEventForwarder
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSObject<HMESynchronousSubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;
@property (readonly) HMETopicRouter *topicRouter; // ivar: _topicRouter
@property (readonly) NSMapTable *unregisterEvents; // ivar: _unregisterEvents


-(id)cachedEventsForExpandedTopics:(id)arg0 ;
-(id)dumpStateDescription;
-(id)expandedTopicsForTopics:(id)arg0 ;
-(id)initWithQueue:(id)arg0 provider:(id)arg1 registrationEventRouter:(id)arg2 ;
-(id)initWithQueue:(id)arg0 provider:(id)arg1 registrationEventRouter:(id)arg2 storeReadHandle:(id)arg3 logger:(id)arg4 ;
-(id)upstreamTopicsForTopic:(id)arg0 ;
-(void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg0 removals:(id)arg1 ;
-(void)didConnectConnection:(id)arg0 connectEvent:(id)arg1 unregisterEvent:(id)arg2 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)didRemoveConnection:(id)arg0 ;
-(void)handleCachedEvent:(id)arg0 topic:(id)arg1 ;
-(void)handleEvent:(id)arg0 topic:(id)arg1 ;


@end


#endif