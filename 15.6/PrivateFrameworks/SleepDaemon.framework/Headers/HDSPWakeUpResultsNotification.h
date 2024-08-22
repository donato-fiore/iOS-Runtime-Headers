// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATION_H
#define HDSPWAKEUPRESULTSNOTIFICATION_H

@class NSString, HKQuantity, NSDictionary;

#import <Foundation/Foundation.h>


@interface HDSPWakeUpResultsNotification : NSObject

@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, nonatomic) NSInteger endMorningIndex; // ivar: _endMorningIndex
@property (readonly, copy, nonatomic) HKQuantity *goalAchieved; // ivar: _goalAchieved
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSInteger notificationVariant; // ivar: _notificationVariant
@property (readonly, copy, nonatomic) NSString *userFirstName; // ivar: _userFirstName
@property (readonly, copy, nonatomic) NSDictionary *userInfo;


+(id)goalAchievedQuantityForCategory:(NSUInteger)arg0 userInfo:(id)arg1 ;
+(id)goalAchievedUserInfoKeyForCategory:(NSUInteger)arg0 ;
+(id)wakeUpResultsNotificationFromUserInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNotification:(id)arg0 ;
-(BOOL)isOneNight;
-(NSUInteger)hash;
-(id)initWithCategory:(NSUInteger)arg0 endMorningIndex:(NSInteger)arg1 goalAchieved:(id)arg2 notificationVariant:(NSInteger)arg3 userFirstName:(id)arg4 ;


@end


#endif