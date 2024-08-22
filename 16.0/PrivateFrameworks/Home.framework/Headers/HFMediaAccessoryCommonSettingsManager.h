// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIAACCESSORYCOMMONSETTINGSMANAGER_H
#define HFMEDIAACCESSORYCOMMONSETTINGSMANAGER_H

@class HMImmutableSetting, NSString, HMHome, HMHomeManager, NSHashTable, HMAccessorySettingsController;
@protocol HFHomeKitAccessorySettingsDataSourceDelegate, HFMediaProfileContainer;

#import <Foundation/Foundation.h>


@interface HFMediaAccessoryCommonSettingsManager : NSObject <HFHomeKitAccessorySettingsDataSourceDelegate>



@property (retain, nonatomic) HMImmutableSetting *airPlayEnabledSetting; // ivar: _airPlayEnabledSetting
@property (retain, nonatomic) id *airPlayEnabledSettingCachedValue; // ivar: _airPlayEnabledSettingCachedValue
@property (retain, nonatomic) HMImmutableSetting *announceEnabledSetting; // ivar: _announceEnabledSetting
@property (retain, nonatomic) id *announceEnabledSettingCachedValue; // ivar: _announceEnabledSettingCachedValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMImmutableSetting *doorbellChimeEnabledSetting; // ivar: _doorbellChimeEnabledSetting
@property (retain, nonatomic) id *doorbellChimeEnabledSettingCachedValue; // ivar: _doorbellChimeEnabledSettingCachedValue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMImmutableSetting *heySiriSetting; // ivar: _heySiriSetting
@property (retain, nonatomic) id *heySiriSettingCachedValue; // ivar: _heySiriSettingCachedValue
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (readonly) Class superclass;
@property (retain, nonatomic) HMImmutableSetting *tapToAccessSiriSetting; // ivar: _tapToAccessSiriSetting
@property (retain, nonatomic) id *tapToAccessSiriSettingCachedValue; // ivar: _tapToAccessSiriSettingCachedValue


-(id)_settingForKeyPath:(id)arg0 ;
-(id)_settingKeyPaths;
-(id)initWithMediaProfileContainer:(id)arg0 home:(id)arg1 ;
-(id)settingValueForKeyPath:(id)arg0 ;
-(id)updateAccessorySettingWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPath:(id)arg2 rawSettingValue:(id)arg3 ;
-(void)_subscribeToAccessorySettings;
-(void)_updateCachedValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)_updateSettings:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg0 settings:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateSettingValue:(id)arg0 forKeyPath:(id)arg1 accessoryIdentifier:(id)arg2 ;


@end


#endif