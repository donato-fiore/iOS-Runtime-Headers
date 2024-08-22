// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSNOTIFICATIONSOURCESETTINGSDESCRIPTION_H
#define UNSNOTIFICATIONSOURCESETTINGSDESCRIPTION_H


#import <Foundation/Foundation.h>


@interface UNSNotificationSourceSettingsDescription : NSObject

@property (nonatomic) BOOL alwaysShowPreviews; // ivar: _alwaysShowPreviews
@property (nonatomic) BOOL modalAlertStyle; // ivar: _modalAlertStyle
@property (nonatomic) BOOL providesAppNotificationSettings; // ivar: _providesAppNotificationSettings
@property (nonatomic) BOOL supportsAlerts; // ivar: _supportsAlerts
@property (nonatomic) BOOL supportsBadges; // ivar: _supportsBadges
@property (nonatomic) BOOL supportsCarPlay; // ivar: _supportsCarPlay
@property (nonatomic) BOOL supportsCriticalAlerts; // ivar: _supportsCriticalAlerts
@property (nonatomic) BOOL supportsLockScreen; // ivar: _supportsLockScreen
@property (nonatomic) BOOL supportsNotificationCenter; // ivar: _supportsNotificationCenter
@property (nonatomic) BOOL supportsSounds; // ivar: _supportsSounds
@property (nonatomic) BOOL supportsSpoken; // ivar: _supportsSpoken
@property (nonatomic) BOOL supportsTimeSensitive; // ivar: _supportsTimeSensitive


+(id)notificationSourceSettingsDescriptionFromDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif