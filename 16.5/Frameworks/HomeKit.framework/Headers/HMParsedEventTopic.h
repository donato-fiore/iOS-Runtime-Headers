// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPARSEDEVENTTOPIC_H
#define HMPARSEDEVENTTOPIC_H

@class NSString, NSUUID;
@protocol HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedMediaSystemSettingEventTopic, HMParsedMediaGroupSettingEventTopic, HMParsedHomeEventTopic, HMParsedIndexHomeEventTopic, HMParsedIndexAccessoryEventTopic;

#import <Foundation/Foundation.h>


@interface HMParsedEventTopic : NSObject <HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedMediaSystemSettingEventTopic, HMParsedMediaGroupSettingEventTopic, HMParsedHomeEventTopic, HMParsedIndexHomeEventTopic, HMParsedIndexAccessoryEventTopic>



@property (readonly, nonatomic) NSUInteger accessoryEventTopicSuffixID;
@property (copy, nonatomic) NSString *accessorySettingKeyPath; // ivar: _accessorySettingKeyPath
@property (copy, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, nonatomic) NSUInteger homeEventTopicSuffixID;
@property (copy, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (nonatomic) BOOL isIndexTopic; // ivar: _isIndexTopic
@property (copy, nonatomic) NSString *mediaGroupSettingKeyPath; // ivar: _mediaGroupSettingKeyPath
@property (copy, nonatomic) NSUUID *mediaGroupUUID; // ivar: _mediaGroupUUID
@property (copy, nonatomic) NSString *mediaSystemSettingKeyPath; // ivar: _mediaSystemSettingKeyPath
@property (copy, nonatomic) NSUUID *mediaSystemUUID; // ivar: _mediaSystemUUID
@property (readonly, copy, nonatomic) NSString *originalTopic; // ivar: _originalTopic
@property (copy, nonatomic) NSString *topicSuffix; // ivar: _topicSuffix
@property (copy, nonatomic) NSUUID *userUUID; // ivar: _userUUID


-(id)asAccessorySettingTopic;
-(id)asAccessoryTopic;
-(id)asHomeEventTopic;
-(id)asIndexAccessoryTopic;
-(id)asIndexHomeTopic;
-(id)asMediaGroupSettingTopic;
-(id)asMediaSystemSettingTopic;
-(id)description;
-(id)initWithTopic:(id)arg0 ;


@end


#endif