// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNNOTIFICATION_H
#define UNNOTIFICATION_H

@class NSDate, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNNotificationRequest.h"

@interface UNNotification : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSArray *intentIdentifiers; // ivar: _intentIdentifiers
@property (readonly, copy, nonatomic) UNNotificationRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier


+(BOOL)supportsSecureCoding;
+(id)notificationWithRequest:(id)arg0 date:(id)arg1 ;
+(id)notificationWithRequest:(id)arg0 date:(id)arg1 sourceIdentifier:(id)arg2 intentIdentifiers:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 date:(id)arg1 sourceIdentifier:(id)arg2 intentIdentifiers:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif