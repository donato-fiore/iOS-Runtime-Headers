// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMETOPICROUTER_H
#define HMETOPICROUTER_H

@class NSMapTable;
@protocol OS_os_log, HMETopicRouterDelegate;

#import <Foundation/Foundation.h>

#import "HMETrieNode.h"

@interface HMETopicRouter : NSObject {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, weak) NSObject<HMETopicRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMapTable *registrations; // ivar: _registrations
@property (readonly, nonatomic) HMETrieNode *rootNode; // ivar: _rootNode


-(id)allRegisteredTopicFilters;
-(id)consumersForTopic:(id)arg0 ;
-(id)dumpStateDescription;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 logCategory:(char *)arg1 ;
-(id)initWithDelegate:(id)arg0 logger:(id)arg1 ;
-(id)minimalSpanningTopicFilters;
-(void)changeRegistrationsForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 ;
-(void)registerConsumer:(id)arg0 topicFilters:(id)arg1 ;
-(void)unregisterConsumer:(id)arg0 ;
-(void)unregisterConsumer:(id)arg0 topicFilters:(id)arg1 ;


@end


#endif