// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYEVENTSGENERATED_H
#define HMDACCESSORYEVENTSGENERATED_H


#import <Foundation/Foundation.h>


@interface HMDAccessoryEventsGenerated : NSObject



+(BOOL)topicSuffix:(id)arg0 isPartOfIndex:(id)arg1 ;
+(id)accessoryIndexForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
+(id)allTopics;
+(id)appleMediaAccessoryTopicsForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
+(id)endpointAccessoryTopicsForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
+(id)forwardingTopicsForTopics:(id)arg0 residentAccessoryUUID:(id)arg1 homeUUID:(id)arg2 ;
+(id)homePodAccessoryTopicsForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
+(id)indexTopicForTopic:(id)arg0 ;
+(id)topicMap;
+(id)topicsRemovingAccessoryTopics:(id)arg0 accessoryUUID:(id)arg1 ;


@end


#endif