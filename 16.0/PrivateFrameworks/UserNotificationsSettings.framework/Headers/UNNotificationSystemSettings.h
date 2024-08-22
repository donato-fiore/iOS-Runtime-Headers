// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNNOTIFICATIONSYSTEMSETTINGS_H
#define UNNOTIFICATIONSYSTEMSETTINGS_H

@class NSArray;
@protocol NSCopying, NSSecureCoding, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface UNNotificationSystemSettings : NSObject <NSCopying, NSSecureCoding, NSMutableCopying>



@property (readonly, nonatomic) NSInteger announcementCarPlaySetting; // ivar: _announcementCarPlaySetting
@property (readonly, nonatomic) NSInteger announcementHeadphonesSetting; // ivar: _announcementHeadphonesSetting
@property (readonly, nonatomic) NSInteger announcementSetting; // ivar: _announcementSetting
@property (readonly, nonatomic) NSUInteger modifiedSettings; // ivar: _modifiedSettings
@property (readonly, nonatomic) NSInteger notificationListDisplayStyleSetting; // ivar: _notificationListDisplayStyleSetting
@property (readonly, nonatomic) NSInteger scheduledDeliverySetting; // ivar: _scheduledDeliverySetting
@property (readonly, nonatomic) NSInteger scheduledDeliveryShowNextSummarySetting; // ivar: _scheduledDeliveryShowNextSummarySetting
@property (readonly, copy, nonatomic) NSArray *scheduledDeliveryTimes; // ivar: _scheduledDeliveryTimes
@property (readonly, nonatomic) NSInteger showPreviewsSetting; // ivar: _showPreviewsSetting
@property (readonly, nonatomic) NSInteger spokenNotificationSetting;


+(BOOL)supportsSecureCoding;
-(id)_stringForNotificationListDisplayStyleSetting:(NSInteger)arg0 ;
-(id)_stringForScheduledDeliveryTimes:(id)arg0 ;
-(id)_stringforAnnouncementCarPlaySetting:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShowPreviewsSetting:(NSInteger)arg0 announcementSetting:(NSInteger)arg1 announcementHeadphonesSetting:(NSInteger)arg2 announcementCarPlaySetting:(NSInteger)arg3 scheduledDeliverySetting:(NSInteger)arg4 scheduledDeliveryTimes:(id)arg5 scheduledDeliveryShowNextSummarySetting:(NSInteger)arg6 notificationListDisplayStyleSetting:(NSInteger)arg7 ;
-(id)initWithShowPreviewsSetting:(NSInteger)arg0 announcementSetting:(NSInteger)arg1 announcementHeadphonesSetting:(NSInteger)arg2 announcementCarPlaySetting:(NSInteger)arg3 scheduledDeliverySetting:(NSInteger)arg4 scheduledDeliveryTimes:(id)arg5 scheduledDeliveryShowNextSummarySetting:(NSInteger)arg6 notificationListDisplayStyleSetting:(NSInteger)arg7 modifiedSettings:(NSUInteger)arg8 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif