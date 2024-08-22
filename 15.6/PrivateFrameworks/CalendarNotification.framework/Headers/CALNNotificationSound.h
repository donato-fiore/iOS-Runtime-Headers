// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONSOUND_H
#define CALNNOTIFICATIONSOUND_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *alertTopic; // ivar: _alertTopic
@property (readonly, nonatomic) NSInteger alertType; // ivar: _alertType


+(BOOL)supportsSecureCoding;
+(id)soundWithAlertType:(NSInteger)arg0 alertTopic:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSound:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAlertType:(NSInteger)arg0 alertTopic:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif