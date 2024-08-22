// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFAPPBACKLIGHTPRIVACYSETTINGS_H
#define CSLPRFAPPBACKLIGHTPRIVACYSETTINGS_H

@class NSString;
@protocol CSLPRFPerApplicationSettings, CSLPRFAppBacklightPrivacyProperties, CSLPRFPerApplicationSettingsDelegate, CSLPRFApplication;

#import <Foundation/Foundation.h>


@interface CSLPRFAppBacklightPrivacySettings : NSObject <CSLPRFPerApplicationSettings, CSLPRFAppBacklightPrivacyProperties>

 {
    id<CSLPRFPerApplicationSettingsDelegate> *_delegate;
    BOOL _lock_privacyDuringAlwaysOnForApp;
    BOOL _lock_privacyDuringAlwaysOnForNotification;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSObject<CSLPRFApplication> *application; // ivar: _application
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCustomSetting;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isGlobalDefault; // ivar: _isGlobalDefault
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForApp;
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForNotification;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL watchAppSupportsAlwaysOnDisplay; // ivar: _watchAppSupportsAlwaysOnDisplay


+(Class)serializationClass;
+(NSUInteger)categoryForApplication:(id)arg0 ;
+(char *)notificationName;
+(id)globalDefaultIdentifer;
+(id)globalSettingsWithSerialization:(id)arg0 delegate:(id)arg1 ;
+(id)settingsForApplication:(id)arg0 withSerialization:(id)arg1 delegate:(id)arg2 ;
+(id)settingsKey;
+(id)sharedSettingsModel;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSettings:(id)arg0 ;
-(id)initForApplication:(id)arg0 isGlobalDefault:(BOOL)arg1 withSerialization:(id)arg2 delegate:(id)arg3 ;
-(id)privacyDuringAlwaysOnForAppWithIgnoredSpecifier:(id)arg0 ;
-(id)privacyDuringAlwaysOnForNotificationWithIgnoredSpecifier:(id)arg0 ;
-(id)resolvedSettingWithGlobalSettings:(id)arg0 ;
-(id)serialize;
-(void)updateSettingsWithBlock:(id)arg0 ;


@end


#endif