// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYEVENTTOPIC_H
#define HMACCESSORYEVENTTOPIC_H


#import <Foundation/Foundation.h>


@interface HMAccessoryEventTopic : NSObject



+(NSUInteger)suffixIDFromTopicSuffix:(id)arg0 ;
+(id)filterTopicsReplacingWithIndex:(id)arg0 ;
+(id)topicFromSuffixID:(NSUInteger)arg0 homeUUID:(id)arg1 accessoryUUID:(id)arg2 ;
+(id)topicPrefixWithHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;


@end


#endif