// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNNOTIFICATIONRECORD_H
#define CALNNOTIFICATIONRECORD_H

@class NSDate, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CALNNotificationContent.h"

@interface CALNNotificationRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CALNNotificationContent *content; // ivar: _content
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL hasAlertContent;
@property (readonly, nonatomic) BOOL hasSound;
@property (readonly, nonatomic) BOOL shouldPlaySound; // ivar: _shouldPlaySound
@property (readonly, nonatomic) BOOL shouldPresentAlert; // ivar: _shouldPresentAlert
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 content:(id)arg2 ;
-(id)initWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 content:(id)arg2 date:(id)arg3 shouldPresentAlert:(BOOL)arg4 shouldPlaySound:(BOOL)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif