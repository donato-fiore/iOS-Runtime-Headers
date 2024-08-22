// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEEVENTSGENERATED_H
#define HMDHOMEEVENTSGENERATED_H


#import <Foundation/Foundation.h>


@interface HMDHomeEventsGenerated : NSObject



+(BOOL)isHomeInfoIndexTopic:(id)arg0 homeUUID:(id)arg1 ;
+(id)accessoryTopicsForAccessory:(id)arg0 homeUUID:(id)arg1 ;
+(id)allTopics;
+(id)clientIndexToHomeTopicsForHomeUUID:(id)arg0 ;
+(id)expandedTopicsWithTopics:(id)arg0 homeManager:(id)arg1 ;
+(id)forwardingTopicsWithTopics:(id)arg0 forHomeRouterWithUUID:(id)arg1 ;
+(id)homeInfoIndexForHomeUUID:(id)arg0 ;
+(id)indexTopicForTopicSuffix:(id)arg0 indexName:(id)arg1 ;
+(id)topicMap;
+(id)upstreamClientTopicForTopic:(id)arg0 ;
+(id)upstreamHomeAndAccessoryTopicsForTopic:(id)arg0 homeUUID:(id)arg1 accessoryUUID:(id)arg2 ;
+(id)upstreamHomeTopicForTopic:(id)arg0 homeUUID:(id)arg1 ;
+(id)upstreamTopicsForTopic:(id)arg0 ;


@end


#endif