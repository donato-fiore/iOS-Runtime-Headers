// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMUTABLEACCOUNTUSERNOTIFICATIONSETTINGS_H
#define PKMUTABLEACCOUNTUSERNOTIFICATIONSETTINGS_H

@class NSDecimalNumber;


#import "PKAccountUserNotificationSettings.h"

@interface PKMutableAccountUserNotificationSettings : PKAccountUserNotificationSettings

@property (retain, nonatomic) NSDecimalNumber *monthlySpendNotificationThreshold;
@property (retain, nonatomic) NSDecimalNumber *transactionNotificationThreshold;
@property (nonatomic) BOOL transactionNotificationsEnabled;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif