// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSNOTIFICATION_H
#define HKMEDICATIONSNOTIFICATION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKMedicationsNotification : NSObject

@property (readonly, nonatomic) NSString *argument; // ivar: _argument
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSString *scheduleItemIdentifier; // ivar: _scheduleItemIdentifier
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)allNotificationCategories;
+(id)notificationBeforeFirstUnlockWithScheduleItemIdentifier:(id)arg0 ;
+(id)notificationCategoryForString:(id)arg0 ;
+(id)notificationMissedWithScheduleItemIdentifier:(id)arg0 ;
+(id)notificationNotMissedWithScheduleItemIdentifier:(id)arg0 ;
-(id)init;


@end


#endif