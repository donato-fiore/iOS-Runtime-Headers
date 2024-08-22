// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTUSERNOTIFICATIONSETTINGS_H
#define PKACCOUNTUSERNOTIFICATIONSETTINGS_H

@class NSDecimalNumber;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountUserNotificationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (retain, nonatomic) NSDecimalNumber *monthlySpendNotificationThreshold; // ivar: _monthlySpendNotificationThreshold
@property (retain, nonatomic) NSDecimalNumber *transactionNotificationThreshold; // ivar: _transactionNotificationThreshold
@property (nonatomic) BOOL transactionNotificationsEnabled; // ivar: _transactionNotificationsEnabled


+(BOOL)supportsSecureCoding;
+(id)defaultNotificationSettings;
-(BOOL)_isEqualToAccountUserNotificationSettings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountUserNotificationSettings:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif