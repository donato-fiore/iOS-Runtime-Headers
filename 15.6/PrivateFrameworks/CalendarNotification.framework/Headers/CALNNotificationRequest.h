// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONREQUEST_H
#define CALNNOTIFICATIONREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CALNNotificationContent.h"

@interface CALNNotificationRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CALNNotificationContent *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg0 content:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 content:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif