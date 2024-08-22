// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFMUTABLEUSERNOTIFICATIONSERVICESETTINGS_H
#define HFMUTABLEUSERNOTIFICATIONSERVICESETTINGS_H

@class NSPredicate;


#import "HFUserNotificationServiceSettings.h"

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings

@property (nonatomic, getter=areDoorbellNotificationsEnabled) BOOL doorbellNotificationsEnabled;
@property (nonatomic, getter=areMotionNotificationsEnabled) BOOL motionNotificationsEnabled;
@property (retain, nonatomic) NSPredicate *notificationCondition;
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled;
@property (retain, nonatomic) NSPredicate *smartCameraNotificationCondition;
@property (nonatomic, getter=areSmartDetectionNotificationsEnabled) BOOL smartDetectionNotificationsEnabled;




@end


#endif