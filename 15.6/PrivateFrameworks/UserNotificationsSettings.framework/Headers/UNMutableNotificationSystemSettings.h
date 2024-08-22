// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNMUTABLENOTIFICATIONSYSTEMSETTINGS_H
#define UNMUTABLENOTIFICATIONSYSTEMSETTINGS_H

@class NSArray;


#import "UNNotificationSystemSettings.h"

@interface UNMutableNotificationSystemSettings : UNNotificationSystemSettings

@property (nonatomic) NSInteger announcementCarPlaySetting;
@property (nonatomic) NSInteger announcementHeadphonesSetting;
@property (nonatomic) NSInteger announcementSetting;
@property (nonatomic) NSInteger scheduledDeliverySetting;
@property (nonatomic) NSInteger scheduledDeliveryShowNextSummarySetting;
@property (copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (nonatomic) NSInteger showPreviewsSetting;
@property (nonatomic) NSInteger spokenNotificationSetting;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif