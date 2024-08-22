// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNNOTIFICATIONSETTINGS_H
#define UNNOTIFICATIONSETTINGS_H

@protocol NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationSettings : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger alertSetting; // ivar: _alertSetting
@property (readonly, nonatomic) NSInteger alertStyle; // ivar: _alertStyle
@property (readonly, nonatomic) NSInteger announcementSetting; // ivar: _announcementSetting
@property (readonly, nonatomic) NSInteger authorizationStatus; // ivar: _authorizationStatus
@property (readonly, nonatomic) NSInteger badgeSetting; // ivar: _badgeSetting
@property (readonly, nonatomic) NSInteger carPlaySetting; // ivar: _carPlaySetting
@property (readonly, nonatomic) NSInteger criticalAlertSetting; // ivar: _criticalAlertSetting
@property (readonly, nonatomic) NSInteger directMessagesSetting; // ivar: _directMessagesSetting
@property (readonly, nonatomic) NSInteger groupingSetting; // ivar: _groupingSetting
@property (readonly, nonatomic) NSInteger lockScreenSetting; // ivar: _lockScreenSetting
@property (readonly, nonatomic) NSInteger notificationCenterSetting; // ivar: _notificationCenterSetting
@property (readonly, nonatomic) BOOL providesAppNotificationSettings; // ivar: _providesAppNotificationSettings
@property (readonly, nonatomic) NSInteger scheduledDeliverySetting; // ivar: _scheduledDeliverySetting
@property (readonly, nonatomic) NSInteger showPreviewsSetting; // ivar: _showPreviewsSetting
@property (readonly, nonatomic) NSInteger soundSetting; // ivar: _soundSetting
@property (readonly, nonatomic) NSInteger timeSensitiveSetting; // ivar: _timeSensitiveSetting


+(BOOL)supportsSecureCoding;
+(id)emptySettings;
+(id)settingsWithAuthorizationStatus:(NSInteger)arg0 soundSetting:(NSInteger)arg1 badgeSetting:(NSInteger)arg2 alertSetting:(NSInteger)arg3 notificationCenterSetting:(NSInteger)arg4 lockScreenSetting:(NSInteger)arg5 carPlaySetting:(NSInteger)arg6 announcementSetting:(NSInteger)arg7 criticalAlertSetting:(NSInteger)arg8 alertStyle:(NSInteger)arg9 showPreviewsSetting:(NSInteger)arg10 groupingSetting:(NSInteger)arg11 providesAppNotificationSettings:(BOOL)arg12 ;
+(id)settingsWithAuthorizationStatus:(NSInteger)arg0 soundSetting:(NSInteger)arg1 badgeSetting:(NSInteger)arg2 alertSetting:(NSInteger)arg3 notificationCenterSetting:(NSInteger)arg4 lockScreenSetting:(NSInteger)arg5 carPlaySetting:(NSInteger)arg6 announcementSetting:(NSInteger)arg7 criticalAlertSetting:(NSInteger)arg8 timeSensitiveSetting:(NSInteger)arg9 alertStyle:(NSInteger)arg10 showPreviewsSetting:(NSInteger)arg11 groupingSetting:(NSInteger)arg12 providesAppNotificationSettings:(BOOL)arg13 ;
+(id)settingsWithAuthorizationStatus:(NSInteger)arg0 soundSetting:(NSInteger)arg1 badgeSetting:(NSInteger)arg2 alertSetting:(NSInteger)arg3 notificationCenterSetting:(NSInteger)arg4 lockScreenSetting:(NSInteger)arg5 carPlaySetting:(NSInteger)arg6 announcementSetting:(NSInteger)arg7 criticalAlertSetting:(NSInteger)arg8 timeSensitiveSetting:(NSInteger)arg9 scheduledDeliverySetting:(NSInteger)arg10 alertStyle:(NSInteger)arg11 showPreviewsSetting:(NSInteger)arg12 groupingSetting:(NSInteger)arg13 providesAppNotificationSettings:(BOOL)arg14 ;
+(id)settingsWithAuthorizationStatus:(NSInteger)arg0 soundSetting:(NSInteger)arg1 badgeSetting:(NSInteger)arg2 alertSetting:(NSInteger)arg3 notificationCenterSetting:(NSInteger)arg4 lockScreenSetting:(NSInteger)arg5 carPlaySetting:(NSInteger)arg6 announcementSetting:(NSInteger)arg7 criticalAlertSetting:(NSInteger)arg8 timeSensitiveSetting:(NSInteger)arg9 scheduledDeliverySetting:(NSInteger)arg10 directMessagesSetting:(NSInteger)arg11 alertStyle:(NSInteger)arg12 showPreviewsSetting:(NSInteger)arg13 groupingSetting:(NSInteger)arg14 providesAppNotificationSettings:(BOOL)arg15 ;
+(id)settingsWithAuthorizationStatus:(NSInteger)arg0 soundSetting:(NSInteger)arg1 badgeSetting:(NSInteger)arg2 alertSetting:(NSInteger)arg3 notificationCenterSetting:(NSInteger)arg4 lockScreenSetting:(NSInteger)arg5 carPlaySetting:(NSInteger)arg6 spokenSetting:(NSInteger)arg7 criticalAlertSetting:(NSInteger)arg8 alertStyle:(NSInteger)arg9 showPreviewsSetting:(NSInteger)arg10 providesAppNotificationSettings:(BOOL)arg11 ;
-(BOOL)hasEnabledAlertSettings;
-(BOOL)hasEnabledSettings;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAuthorizationStatus:(NSInteger)arg0 soundSetting:(NSInteger)arg1 badgeSetting:(NSInteger)arg2 alertSetting:(NSInteger)arg3 notificationCenterSetting:(NSInteger)arg4 lockScreenSetting:(NSInteger)arg5 carPlaySetting:(NSInteger)arg6 announcementSetting:(NSInteger)arg7 criticalAlertSetting:(NSInteger)arg8 timeSensitiveSetting:(NSInteger)arg9 scheduledDeliverySetting:(NSInteger)arg10 directMessagesSetting:(NSInteger)arg11 alertStyle:(NSInteger)arg12 showPreviewsSetting:(NSInteger)arg13 groupingSetting:(NSInteger)arg14 providesAppNotificationSettings:(BOOL)arg15 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif