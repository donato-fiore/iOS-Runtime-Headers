// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATION_H
#define CALNNOTIFICATION_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CALNNotificationRequest.h"

@interface CALNNotification : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) CALNNotificationRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
+(id)notificationWithRequest:(id)arg0 date:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNotification:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 date:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif