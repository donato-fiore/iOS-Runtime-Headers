// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNNOTIFICATIONTOPICSETTINGS_H
#define UNNOTIFICATIONTOPICSETTINGS_H

@class UNNotificationTopic, UNNotificationSettings;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) UNNotificationTopic *topic; // ivar: _topic
@property (readonly, copy, nonatomic) UNNotificationSettings *topicSettings; // ivar: _topicSettings


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopic:(id)arg0 settings:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif