// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMEDELEGATINGEVENTROUTER_H
#define HMEDELEGATINGEVENTROUTER_H

@class NSMutableArray, NSString;
@protocol HMETopicRouterDelegate, HMEEventConsumer, HMESubscriptionProviding, HMESynchronousSubscriptionProviding, OS_os_log, OS_dispatch_queue, HMEDelegatingEventRouterDataSource, HMELastEventStoreReadHandle;

#import <Foundation/Foundation.h>

#import "HMETopicRouter.h"

@interface HMEDelegatingEventRouter : NSObject <HMETopicRouterDelegate, HMEEventConsumer, HMESubscriptionProviding, HMESynchronousSubscriptionProviding>

 {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    HMETopicRouter *_topicRouter;
    NSMutableArray *_subRouters;
    id<HMEDelegatingEventRouterDataSource> *_dataSource;
    id<HMELastEventStoreReadHandle> *_eventStoreReadHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 logCategory:(char *)arg2 ;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 logger:(id)arg2 ;
-(void)changeRegistrationsForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)changeRegistrationsSyncForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg0 removals:(id)arg1 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)registerConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;
-(void)registerSubRouter:(id)arg0 ;
-(void)unregisterConsumer:(id)arg0 completion:(id)arg1 ;
-(void)unregisterConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;
-(void)unregisterConsumerSync:(id)arg0 completion:(id)arg1 ;
-(void)unregisterSubRouter:(id)arg0 ;


@end


#endif