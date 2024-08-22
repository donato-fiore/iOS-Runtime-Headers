// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGSMANAGER_H
#define HPSETTINGSMANAGER_H

@class NSUserDefaults, NSString, NSMutableArray, HPSettingAdapterManager, AFSettingsConnection;
@protocol HPSettingAdapterManagerDelegate, HPSHomeInterface, HPMediaRestrictionsSettingsManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HPSettingsDefaults.h"
#import "HPAccessibilitySettingsManager.h"
#import "HPSHomeAccessorySettingsListener.h"
#import "HPLocationServicesSettingsManager.h"
#import "HPMediaRestrictionsSettingsManager.h"
#import "HPSServer.h"

@interface HPSettingsManager : NSObject <HPSettingAdapterManagerDelegate, HPSHomeInterface, HPMediaRestrictionsSettingsManagerDelegate>

 {
    NSUserDefaults *_accessibilityDefaults;
    HPSettingsDefaults *_defaultsManager;
    os_unfair_lock_s _clientInfoStateLock;
}


@property (retain, nonatomic) HPAccessibilitySettingsManager *accessibilitySettingsManager; // ivar: _accessibilitySettingsManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *afSettingsConnectionQueue; // ivar: _afSettingsConnectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFirstTimeUpdate) BOOL firstTimeUpdate; // ivar: _firstTimeUpdate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HPSHomeAccessorySettingsListener *homeAccessorysettingsListener; // ivar: _homeAccessorysettingsListener
@property (copy, nonatomic) NSMutableArray *hpSettingsClientInfo; // ivar: _hpSettingsClientInfo
@property (retain, nonatomic) HPLocationServicesSettingsManager *locationServicesSettingsManager; // ivar: _locationServicesSettingsManager
@property (retain, nonatomic) HPMediaRestrictionsSettingsManager *mediaRestrictionsSettingsManager; // ivar: _mediaRestrictionsSettingsManager
@property (readonly, nonatomic) BOOL onlyUseMobileTimerAdapterForLeader;
@property (retain, nonatomic) HPSServer *serverConnection; // ivar: _serverConnection
@property (retain, nonatomic) HPSettingAdapterManager *settingAdapterManager; // ivar: _settingAdapterManager
@property (retain) AFSettingsConnection *settingsConnection; // ivar: _settingsConnection
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)_airplayDefaults;
-(id)_getHomeKitSettingForKeyPath:(id)arg0 ;
-(id)accessoryIdentifier;
-(id)homeIdentifier;
-(id)init;
-(void)_enableHKAirplayAccessControlSetting;
-(void)_handleDeviceAttributeChanged:(id)arg0 withContext:(id)arg1 ;
-(void)_handleHomeKitSettingChangeForKeyPath:(id)arg0 withNewValue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleHomeSettingChangeForKeyPath:(id)arg0 withNewValue:(id)arg1 ;
-(void)_homeKitAccessorySettingForKeyPath:(id)arg0 settingValue:(id)arg1 completion:(id)arg2 ;
-(void)_homeKitCachedSettings:(id)arg0 ;
-(void)_notifyLocaleChange:(id)arg0 ;
-(void)_notifySettingChangedObservers:(id)arg0 settingValueFromHome:(id)arg1 settingValue:(id)arg2 completion:(id)arg3 ;
-(void)_setBufferedSurroundSwitch:(BOOL)arg0 ;
-(void)_setSoundWhenUsingSiri:(BOOL)arg0 ;
-(void)_setupListenerForSiriLanguageAndVoiceChanges;
-(void)_setupSettingListenerForCurrentAccessory;
-(void)_setupSiriLanguageAndVoiceOptions;
-(void)_setupVoiceServicesObserver;
-(void)_updateSystemIfLocaleChanged;
-(void)accessorySettingKeyPathValueForHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 settingKeyPath:(id)arg2 completionHandler:(id)arg3 ;
-(void)accessorySettingValueForKeyPathInternal:(id)arg0 completionHandler:(id)arg1 ;
-(void)addClientInfo:(id)arg0 ;
-(void)assistantPrefsChanged:(id)arg0 ;
-(void)cacheHomeKitSettingForKeyPath:(id)arg0 withNewValue:(id)arg1 ;
-(void)createHomeProxyObject;
-(void)dealloc;
-(void)enableHKAirplayAccessControlSetting;
-(void)getAirPlaySettings:(id)arg0 ;
-(void)getAllHomeKitSettingsKeyPath:(id)arg0 ;
-(void)getCurrentHomeAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeAccessoryAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeKitCachedSettings:(id)arg0 ;
-(void)getHomeKitSettingForKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)homeKitAccessorySettingForKeyPath:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)homeKitCachedSettingsInternal:(id)arg0 ;
-(void)homeKitSettingKeyPathValueForAccessoryIdentifier:(id)arg0 homeIdentifier:(id)arg1 settingKeyPath:(id)arg2 value:(id)arg3 completionHandler:(id)arg4 ;
-(void)homeKitSettingValueForKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)homeKitSettingValueForKeyPathInternal:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)homeKitStatusChanged;
-(void)isAutomaticSoftwareUpdateEnabled:(id)arg0 ;
-(void)isHomeKitSyncComplete:(id)arg0 ;
-(void)isValidHome:(id)arg0 ;
-(void)mediaRestrictionsSettingsManager:(id)arg0 homeKitSettingForKeyPath:(id)arg1 newValue:(id)arg2 completion:(id)arg3 ;
-(void)removeClientInfo:(id)arg0 ;
-(void)retryNotificationSend:(id)arg0 context:(id)arg1 ;
-(void)retryNotifyingSettingChangeObservers:(id)arg0 updatedValue:(id)arg1 ;
-(void)setHomeKitSettingForKeyPath:(id)arg0 newValue:(id)arg1 completion:(id)arg2 ;
-(void)settingAdapterManager:(id)arg0 handleDeviceAttributeChanged:(id)arg1 withContext:(id)arg2 ;
-(void)settingAdapterManager:(id)arg0 handleSettingChangeForKeyPath:(id)arg1 withNewValue:(id)arg2 ;
-(void)settingAdapterManager:(id)arg0 losslessAudioValueEnabled:(BOOL)arg1 ;
-(void)settingAdapterManager:(id)arg0 setHomeKitSettingForKeyPath:(id)arg1 newValue:(id)arg2 completion:(id)arg3 ;
-(void)settingAdapterManager:(id)arg0 siriLanguageOptionDidChangeOutputLanguage:(id)arg1 recognitionLanguage:(id)arg2 gender:(NSInteger)arg3 name:(id)arg4 ;
-(void)settingAdapterManagerDidChangeSystemLocale:(id)arg0 ;
-(void)settingAdapterManagerSetupListenerDidChangeSiriLanguageAndVoiceOptions:(id)arg0 ;
-(void)setupHomeKit;
-(void)setupSiriLanguageAndVoiceOptions;
-(void)startConnection;
-(void)voiceServicesMobileAssetInstallAvailable;
-(void)voiceServicesUpdateAvailable;


@end


#endif