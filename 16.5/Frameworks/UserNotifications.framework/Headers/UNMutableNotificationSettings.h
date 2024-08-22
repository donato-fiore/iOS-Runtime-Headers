// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNMUTABLENOTIFICATIONSETTINGS_H
#define UNMUTABLENOTIFICATIONSETTINGS_H



#import "UNNotificationSettings.h"

@interface UNMutableNotificationSettings : UNNotificationSettings

@property (nonatomic) NSInteger alertSetting;
@property (nonatomic) NSInteger alertStyle;
@property (nonatomic) NSInteger announcementSetting;
@property (nonatomic) NSInteger authorizationStatus;
@property (nonatomic) NSInteger badgeSetting;
@property (nonatomic) NSInteger carPlaySetting;
@property (nonatomic) NSInteger criticalAlertSetting;
@property (nonatomic) NSInteger directMessagesSetting;
@property (nonatomic) NSInteger groupingSetting;
@property (nonatomic) NSInteger lockScreenSetting;
@property (nonatomic) NSInteger notificationCenterSetting;
@property (nonatomic) BOOL providesAppNotificationSettings;
@property (nonatomic) NSInteger scheduledDeliverySetting;
@property (nonatomic) NSInteger showPreviewsSetting;
@property (nonatomic) NSInteger soundSetting;
@property (nonatomic) NSInteger timeSensitiveSetting;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif