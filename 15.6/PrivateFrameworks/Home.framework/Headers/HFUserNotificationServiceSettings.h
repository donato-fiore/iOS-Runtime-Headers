// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFUSERNOTIFICATIONSERVICESETTINGS_H
#define HFUSERNOTIFICATIONSERVICESETTINGS_H

@class NSPredicate;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic, getter=areDoorbellNotificationsEnabled) BOOL doorbellNotificationsEnabled; // ivar: _doorbellNotificationsEnabled
@property (nonatomic, getter=areMotionNotificationsEnabled) BOOL motionNotificationsEnabled; // ivar: _motionNotificationsEnabled
@property (retain, nonatomic) NSPredicate *notificationCondition; // ivar: _notificationCondition
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (retain, nonatomic) NSPredicate *smartCameraNotificationCondition; // ivar: _smartCameraNotificationCondition
@property (nonatomic, getter=areSmartDetectionNotificationsEnabled) BOOL smartDetectionNotificationsEnabled; // ivar: _smartDetectionNotificationsEnabled


+(id)combinedConditionForBulletinBoardNotifications:(id)arg0 ;
-(id)applySettingsToBulletinBoardNotifications:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBulletinBoardNotifications:(id)arg0 ;
-(id)initWithNotificationsEnabled:(BOOL)arg0 condition:(id)arg1 smartCameraNotificationCondition:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif