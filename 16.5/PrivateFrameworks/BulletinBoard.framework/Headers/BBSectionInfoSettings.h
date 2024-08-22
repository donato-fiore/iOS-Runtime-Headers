// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBSECTIONINFOSETTINGS_H
#define BBSECTIONINFOSETTINGS_H

@class NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBMuteAssertion.h"

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger alertType; // ivar: _alertType
@property (nonatomic) BOOL allowsNotifications;
@property (nonatomic) NSInteger announceSetting; // ivar: _announceSetting
@property (retain, nonatomic) NSDate *authorizationExpirationDate; // ivar: _authorizationExpirationDate
@property (nonatomic) NSInteger authorizationStatus; // ivar: _authorizationStatus
@property (nonatomic) NSInteger bulletinGroupingSetting; // ivar: _bulletinGroupingSetting
@property (nonatomic) NSInteger carPlaySetting; // ivar: _carPlaySetting
@property (nonatomic) NSInteger contentPreviewSetting; // ivar: _contentPreviewSetting
@property (nonatomic) NSInteger criticalAlertSetting; // ivar: _criticalAlertSetting
@property (nonatomic) NSInteger directMessagesSetting; // ivar: _directMessagesSetting
@property (readonly, nonatomic) BOOL isAuthorizedTemporarily;
@property (retain, nonatomic) NSDate *lastUserGrantedAuthorizationDate; // ivar: _lastUserGrantedAuthorizationDate
@property (nonatomic) NSInteger lockScreenSetting; // ivar: _lockScreenSetting
@property (retain, nonatomic) BBMuteAssertion *muteAssertion; // ivar: _muteAssertion
@property (nonatomic) NSInteger notificationCenterSetting; // ivar: _notificationCenterSetting
@property (nonatomic) NSUInteger pushSettings; // ivar: _pushSettings
@property (nonatomic) NSInteger scheduledDeliverySetting; // ivar: _scheduledDeliverySetting
@property (nonatomic) BOOL showsCustomSettingsLink; // ivar: _showsCustomSettingsLink
@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) BOOL showsOnExternalDevices; // ivar: _showsOnExternalDevices
@property (nonatomic) NSInteger spokenNotificationSetting;
@property (readonly, copy, nonatomic) NSDictionary *stateCapture;
@property (nonatomic) NSInteger timeSensitiveSetting; // ivar: _timeSensitiveSetting
@property (nonatomic, getter=hasUserConfiguredDirectMessagesSetting) BOOL userConfiguredDirectMessagesSetting; // ivar: _userConfiguredDirectMessagesSetting
@property (nonatomic, getter=hasUserConfiguredTimeSensitiveSetting) BOOL userConfiguredTimeSensitiveSetting; // ivar: _userConfiguredTimeSensitiveSetting


+(BOOL)supportsSecureCoding;
+(id)sectionInfoSettingsForManagedBundleID:(id)arg0 ;
-(BOOL)isBulletinMutedForThreadIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultsForSectionType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)muteSectionUntilDate:(id)arg0 ;
-(void)muteThreadIdentifier:(id)arg0 untilDate:(id)arg1 ;
-(void)unmuteSection;
-(void)unmuteThreadIdentifier:(id)arg0 ;


@end


#endif