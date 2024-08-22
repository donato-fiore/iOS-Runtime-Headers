// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMNOTIFICATIONSDECLARATION_NOTIFICATIONSETTINGSITEM_H
#define CEMSYSTEMNOTIFICATIONSDECLARATION_NOTIFICATIONSETTINGSITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemNotificationsDeclaration_NotificationSettingsItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAlertType; // ivar: _payloadAlertType
@property (copy, nonatomic) NSNumber *payloadBadgesEnabled; // ivar: _payloadBadgesEnabled
@property (copy, nonatomic) NSString *payloadBundleIdentifier; // ivar: _payloadBundleIdentifier
@property (copy, nonatomic) NSNumber *payloadCriticalAlertEnabled; // ivar: _payloadCriticalAlertEnabled
@property (copy, nonatomic) NSNumber *payloadEmergencyEnabled; // ivar: _payloadEmergencyEnabled
@property (copy, nonatomic) NSNumber *payloadGroupingType; // ivar: _payloadGroupingType
@property (copy, nonatomic) NSNumber *payloadNotificationsEnabled; // ivar: _payloadNotificationsEnabled
@property (copy, nonatomic) NSNumber *payloadShowInCarPlay; // ivar: _payloadShowInCarPlay
@property (copy, nonatomic) NSNumber *payloadShowInLockScreen; // ivar: _payloadShowInLockScreen
@property (copy, nonatomic) NSNumber *payloadShowInNotificationCenter; // ivar: _payloadShowInNotificationCenter
@property (copy, nonatomic) NSNumber *payloadSoundsEnabled; // ivar: _payloadSoundsEnabled


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg0 ;
+(id)buildWithBundleIdentifier:(id)arg0 withNotificationsEnabled:(id)arg1 withShowInNotificationCenter:(id)arg2 withShowInLockScreen:(id)arg3 withAlertType:(id)arg4 withBadgesEnabled:(id)arg5 withSoundsEnabled:(id)arg6 withShowInCarPlay:(id)arg7 withEmergencyEnabled:(id)arg8 withCriticalAlertEnabled:(id)arg9 withGroupingType:(id)arg10 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif