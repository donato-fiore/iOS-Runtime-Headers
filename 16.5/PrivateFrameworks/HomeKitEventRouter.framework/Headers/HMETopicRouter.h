// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMETOPICROUTER_H
#define HMETOPICROUTER_H

@class NSMutableSet, NSMapTable;
@protocol OS_os_log, HMETopicRouterDelegate;

#import <Foundation/Foundation.h>


@interface HMETopicRouter : NSObject {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, weak) NSObject<HMETopicRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMutableSet *registeredTopics; // ivar: _registeredTopics
@property (readonly, nonatomic) NSMapTable *registrations; // ivar: _registrations


+(id)forwardingTopicsForAdditions:(id)arg0 removals:(id)arg1 current:(id)arg2 indexProvider:(id)arg3 ;
-(id)allRegisteredTopicFilters;
-(id)consumersForTopic:(id)arg0 ;
-(id)dumpStateDescription;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 logCategory:(char *)arg1 ;
-(id)initWithDelegate:(id)arg0 logger:(id)arg1 ;
-(id)minimalSpanningTopicFilters;
-(id)topicsForConsumer:(id)arg0 ;
-(void)changeRegistrationsForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 ;
-(void)registerConsumer:(id)arg0 topicFilters:(id)arg1 ;
-(void)unregisterConsumer:(id)arg0 ;
-(void)unregisterConsumer:(id)arg0 topicFilters:(id)arg1 ;


@end


#endif