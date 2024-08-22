// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMEROUTERCLIENT_H
#define HMEROUTERCLIENT_H

@class NSString;
@protocol HMECachedEventSource, HMELastEventStoreWriter, HMETopicRouterDelegate, HMESynchronousSubscriptionProviding, HMESubscriptionProviding, OS_os_log, HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, HMERouterClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMETopicRouter.h"

@interface HMERouterClient : NSObject <HMECachedEventSource, HMELastEventStoreWriter, HMETopicRouterDelegate, HMESynchronousSubscriptionProviding, HMESubscriptionProviding>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSObject<HMELastEventStoreWriteHandle> *eventStoreWriteHandle; // ivar: _eventStoreWriteHandle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCachedEventSourceCurrentProcess;
@property (weak) NSObject<HMERouterClientDelegate> *privateDelegate; // ivar: _privateDelegate
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly) HMETopicRouter *topicRouter; // ivar: _topicRouter


-(BOOL)handleChangeRegistrationsWithTopicFilterAdditions:(id)arg0 removals:(id)arg1 ;
-(id)dumpStateDescription;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 storeReadHandle:(id)arg1 logger:(id)arg2 ;
-(id)initWithQueue:(id)arg0 storeReadHandle:(id)arg1 storeWriteHandle:(id)arg2 logger:(id)arg3 ;
-(id)synchronousSubscriptionProvider;
-(void)changeRegistrationsForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)changeRegistrationsSyncForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg0 removals:(id)arg1 ;
-(void)processReceivedCachedEvents:(id)arg0 ;
-(void)processReceivedEvents:(id)arg0 ;
-(void)registerConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;
-(void)unregisterConsumer:(id)arg0 completion:(id)arg1 ;
-(void)unregisterConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;
-(void)unregisterConsumerSync:(id)arg0 completion:(id)arg1 ;


@end


#endif