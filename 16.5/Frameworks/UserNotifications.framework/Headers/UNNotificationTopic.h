// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNNOTIFICATIONTOPIC_H
#define UNNOTIFICATIONTOPIC_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) NSString *sortIdentifier; // ivar: _sortIdentifier


+(BOOL)supportsSecureCoding;
+(id)topicWithIdentifier:(id)arg0 displayName:(id)arg1 priority:(NSUInteger)arg2 sortIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_description;
-(id)_initWithIdentifier:(id)arg0 displayName:(id)arg1 priority:(NSUInteger)arg2 sortIdentifier:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif