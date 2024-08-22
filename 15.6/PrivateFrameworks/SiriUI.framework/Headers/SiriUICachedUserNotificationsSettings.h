// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICACHEDUSERNOTIFICATIONSSETTINGS_H
#define SIRIUICACHEDUSERNOTIFICATIONSSETTINGS_H

@class NSMapTable, NSMutableDictionary, UNNotificationSettingsCenter, NSString;
@protocol UNNotificationSettingsCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriUICachedUserNotificationsSettings : NSObject <UNNotificationSettingsCenterDelegate>

 {
    NSMapTable *_appObservers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appNotificationSettings;
    UNNotificationSettingsCenter *_notificationsSettingsCenter;
    NSInteger _announceCarPlaySetting;
}


@property (readonly, nonatomic) NSInteger announceCarPlaySetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_announceNotificationsEnabledForAppBundleId:(id)arg0 ;
-(BOOL)_announceNotificationsEnabledForAppBundleId:(id)arg0 fromSettingsCenter:(id)arg1 ;
-(BOOL)_currentlyObservingForAppBundleId:(id)arg0 ;
-(BOOL)_notificationBannersVisibleInCarPlayForAppBundleId:(id)arg0 ;
-(BOOL)_notificationBannersVisibleInCarPlayForAppBundleId:(id)arg0 fromSettingsCenter:(id)arg1 ;
-(BOOL)announceNotificationsEnabledForAppBundleId:(id)arg0 ;
-(BOOL)notificationBannersVisibleInCarPlayForAppBundleId:(id)arg0 ;
-(id)_appNotificationSettingsForAppBundleId:(id)arg0 ;
-(id)_appNotificationSettingsForAppBundleId:(id)arg0 fromSettingsCenter:(id)arg1 ;
-(id)init;
-(void)_addObserver:(id)arg0 forAppBundleId:(id)arg1 ;
-(void)_notifyAllObserversThatPreferencesDidChange;
-(void)_notifyAllObserversWithAppBundleIdThatPreferencesDidChange:(id)arg0 ;
-(void)_removeObserver:(id)arg0 forAppBundleId:(id)arg1 ;
-(void)_updateNotificationSettingsChangeForAppBundleId:(id)arg0 fromSettingsCenter:(id)arg1 notifyObservers:(BOOL)arg2 ;
-(void)_updateNotificationSystemSettingsChangeFromSettingsCenter:(id)arg0 notifyObservers:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 forAppBundleId:(id)arg1 ;
-(void)removeObserver:(id)arg0 forAppBundleId:(id)arg1 ;
-(void)userNotificationSettingsCenter:(id)arg0 didUpdateNotificationSourceIdentifiers:(id)arg1 ;
-(void)userNotificationSettingsCenter:(id)arg0 didUpdateNotificationSystemSettings:(id)arg1 ;


@end


#endif