// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGADAPTERMANAGER_H
#define HPSETTINGADAPTERMANAGER_H

@class HFAccessorySettingAdapter, HMAccessory, NSUUID, NSSet, NSUserDefaults, NSArray, HFAccessorySettingDefaultAdapterCollection, NSString, HMHomeManager, HFAccessorySettingMobileTimerAdapter, NSDictionary;
@protocol HFAccessorySettingSiriLanguageAdapterObserver, HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFMediaObjectObserver, HMAccessoryDelegate, HMMediaObjectDelegate, HMSettingsDelegate, HPSettingAdapterManagerDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "HPSettingListener.h"

@interface HPSettingAdapterManager : NSObject <HFAccessorySettingSiriLanguageAdapterObserver, HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFMediaObjectObserver, HMAccessoryDelegate, HMMediaObjectDelegate, HMSettingsDelegate>

 {
    HFAccessorySettingAdapter *_accessorySoloSettingAdapter;
    HFAccessorySettingAdapter *_accessoryGroupSettingAdapter;
    HMAccessory *_currentAccessory;
    NSUUID *_currentMediaSystemUUID;
    NSSet *_supportedSecureCodingSettingClasses;
    NSUserDefaults *_soundBoardPrefs;
    NSUserDefaults *_accessibilityDefaults;
    NSUserDefaults *_coreSpeechDefaults;
    BOOL _homeKitSetupComplete;
}


@property (retain, nonatomic) NSArray *accessorySoloDeviceSettings; // ivar: _accessorySoloDeviceSettings
@property (readonly, nonatomic) NSUUID *accessoryUniqueIdentifier;
@property (retain) HFAccessorySettingDefaultAdapterCollection *adapterCollection; // ivar: _adapterCollection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HPSettingAdapterManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (getter=isFirstTimeUpdate) BOOL firstTimeUpdate; // ivar: _firstTimeUpdate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMAccessory *hkCurrentAccessory;
@property (retain, nonatomic) HMHomeManager *hkHomeManager; // ivar: _hkHomeManager
@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier;
@property (retain) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter; // ivar: _mobileTimerAdapter
@property (retain, nonatomic) NSSet *settingAdapters; // ivar: _settingAdapters
@property (retain, nonatomic) HPSettingListener *settingListener; // ivar: _settingListener
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *updateAvailableLanguageOptionsSemaphore; // ivar: _updateAvailableLanguageOptionsSemaphore
@property (retain, nonatomic) NSDictionary *watchedSettings; // ivar: _watchedSettings


-(BOOL)_getVoiceOverSiriQuietRoomDisabled;
-(BOOL)_hasCurrentAccessory;
-(BOOL)_hasSettingAdapters;
-(BOOL)_isHomeKitReady:(id)arg0 ;
-(BOOL)_isVoiceInfo:(id)arg0 equalTo:(id)arg1 ;
-(BOOL)_updateSelectedLanguageOptionWithLanguageOptions:(id)arg0 siriLanguageAdapter:(id)arg1 ;
-(BOOL)currentAccessoryHasHome;
-(BOOL)hasCurrentAccessory;
-(BOOL)hasSiriLanguageAdapter;
-(BOOL)hasValidHome;
-(BOOL)isAccessory:(id)arg0 aMemberOfMediaSystem:(id)arg1 ;
-(BOOL)isAutomaticSoftwareUpdateEnabled;
-(BOOL)isHomeKitSetupComplete;
-(BOOL)isMediaPeerToPeerEnabled;
-(BOOL)isMyHome:(id)arg0 ;
-(NSUInteger)minimumMediaUserPrivilege;
-(id)_adapterSettingWatchFutureForKeyPath:(id)arg0 ;
-(id)_mediaSystemFromAccessory:(id)arg0 ;
-(id)_mediaSystemFromCurrentAccessory;
-(id)_mobileiPodDefaults;
-(id)_roomSuggestionNamesFromVendor;
-(id)currentAccessoryHome;
-(id)currentAccessoryHomeName;
-(id)currentAccessoryName;
-(id)currentAccessoryRoomName;
-(id)homeKitSettingForKeyPath:(id)arg0 forValue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_addObserverForVoiceOverStatusChange;
-(void)_createMobileTimerAdapterForCurrentAccessory:(id)arg0 ;
-(void)_fetchUserSettings;
-(void)_groupAdapterHomeKitSettingListenerWithMediaProfile:(id)arg0 settingsKeyPath:(id)arg1 deviceSettings:(id)arg2 ;
-(void)_handleCurrentAccessoryRemoved;
-(void)_removeObserversForDefaults;
-(void)_removeSettingListeners;
-(void)_resetAdapters;
-(void)_setupHomeAdapters;
-(void)_setupHomeAdaptersForHomeManager:(id)arg0 status:(NSUInteger)arg1 ;
-(void)_setupListenersAndLanguageOptions;
-(void)_setupMediaSystemSettingAdapterForCurrentAccessory;
-(void)_setupMobileTimerAdapterCollectionForCurrentAccessory;
-(void)_setupSettingListenerForCurrentAccessory;
-(void)_spatialAudioSurroundSetting:(BOOL)arg0 ;
-(void)_updateAvailableSiriLanguagesOptionsToHome:(id)arg0 completion:(id)arg1 ;
-(void)_updateDeviceName:(id)arg0 ;
-(void)_updateHomeKitSettings;
-(void)_updateSettings:(id)arg0 ;
-(void)accessory:(id)arg0 didAddProfile:(id)arg1 ;
-(void)accessoryDidUpdateName:(id)arg0 ;
-(void)accessoryDidUpdateServices:(id)arg0 ;
-(void)addSiriLanguageAdapterObserver;
-(void)fetchAvailableLanguageOption:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentHomeAttribute:(id)arg0 completion:(id)arg1 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didAddUser:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg1 ;
-(void)home:(id)arg0 didUpdateMediaPassword:(id)arg1 ;
-(void)home:(id)arg0 didUpdateMediaPeerToPeerEnabled:(BOOL)arg1 ;
-(void)home:(id)arg0 didUpdateMinimumMediaUserPrivilege:(NSInteger)arg1 ;
-(void)home:(id)arg0 didUpdateRoom:(id)arg1 forAccessory:(id)arg2 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateStatus:(NSUInteger)arg1 ;
-(void)homeManagerDidRemoveCurrentAccessory:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeSiriLanguageAdapterObserver;
-(void)settings:(id)arg0 didUpdateForIdentifier:(id)arg1 keyPath:(id)arg2 ;
-(void)settingsDidUpdate:(id)arg0 ;
-(void)setupHomeKitObserversAndAdapters;
-(void)siriLanguageAdapter:(id)arg0 selectedLanguageOptionDidChange:(id)arg1 ;
-(void)soloAdapterHomeKitSettingListenerWithMediaProfile:(id)arg0 settingsKeyPath:(id)arg1 deviceSettings:(id)arg2 ;
-(void)soloAdapterHomeKitSettingListenerWithsettingsKeyPath:(id)arg0 deviceSettings:(id)arg1 ;
-(void)updateDeviceName;
-(void)updateHomeSettingWithKeyPath:(id)arg0 value:(id)arg1 deviceSettings:(id)arg2 completion:(id)arg3 ;
-(void)updateSelectedSiriLanguageOption;


@end


#endif