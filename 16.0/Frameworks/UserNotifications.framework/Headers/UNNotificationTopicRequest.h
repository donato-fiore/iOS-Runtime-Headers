// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNNOTIFICATIONTOPICREQUEST_H
#define UNNOTIFICATIONTOPICREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNNotificationTopic.h"

@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger enabledOptions; // ivar: _enabledOptions
@property (readonly, nonatomic) NSUInteger options;
@property (readonly, nonatomic) NSUInteger supportedOptions; // ivar: _supportedOptions
@property (readonly, copy, nonatomic) UNNotificationTopic *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
+(id)topicRequestWithIdentifier:(id)arg0 displayName:(id)arg1 options:(NSUInteger)arg2 ;
+(id)topicRequestWithIdentifier:(id)arg0 displayName:(id)arg1 priority:(NSUInteger)arg2 sortIdentifier:(id)arg3 options:(NSUInteger)arg4 ;
+(id)topicRequestWithIdentifier:(id)arg0 displayName:(id)arg1 priority:(NSUInteger)arg2 sortIdentifier:(id)arg3 supportedOptions:(NSUInteger)arg4 enabledOptions:(NSUInteger)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_description;
-(id)_initWithIdentifier:(id)arg0 displayName:(id)arg1 priority:(NSUInteger)arg2 sortIdentifier:(id)arg3 supportedOptions:(NSUInteger)arg4 enabledOptions:(NSUInteger)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif