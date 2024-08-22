// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMPARSEDEVENTTOPIC_H
#define HMPARSEDEVENTTOPIC_H

@class NSString, NSUUID;
@protocol HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedHomeEventTopic;

#import <Foundation/Foundation.h>


@interface HMParsedEventTopic : NSObject <HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedHomeEventTopic>



@property (readonly, nonatomic) NSUInteger accessoryEventTopicSuffixID;
@property (copy, nonatomic) NSString *accessorySettingKeyPath; // ivar: _accessorySettingKeyPath
@property (copy, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, nonatomic) NSUInteger homeEventTopicSuffixID;
@property (copy, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, copy, nonatomic) NSString *originalTopic; // ivar: _originalTopic
@property (copy, nonatomic) NSString *topicSuffix; // ivar: _topicSuffix
@property (copy, nonatomic) NSUUID *userUUID; // ivar: _userUUID


-(id)asAccessorySettingTopic;
-(id)asAccessoryTopic;
-(id)asHomeEventTopic;
-(id)description;
-(id)initWithTopic:(id)arg0 ;


@end


#endif