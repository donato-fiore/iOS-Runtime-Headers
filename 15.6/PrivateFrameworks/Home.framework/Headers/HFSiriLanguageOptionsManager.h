// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSIRILANGUAGEOPTIONSMANAGER_H
#define HFSIRILANGUAGEOPTIONSMANAGER_H

@class NSUUID, NSSet, NAFuture, NSString, HMHome, NSHashTable, HMAccessorySettingsController;
@protocol HFHomeKitAccessorySettingsDataSourceDelegate, HFAccessorySettingsManagerProtocol;

#import <Foundation/Foundation.h>

#import "HFSiriLanguageOption.h"

@interface HFSiriLanguageOptionsManager : NSObject <HFHomeKitAccessorySettingsDataSourceDelegate, HFAccessorySettingsManagerProtocol>



@property (retain, nonatomic) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (copy, nonatomic) NSSet *availableLanguageOptions; // ivar: _availableLanguageOptions
@property (retain, nonatomic) NAFuture *availableLanguagesFuture; // ivar: _availableLanguagesFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption; // ivar: _selectedLanguageOption
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (readonly) Class superclass;


-(id)_settingKeyPaths;
-(id)availableSiriLanguageOptions;
-(id)initWithSettingsController:(id)arg0 accessoryIdentifier:(id)arg1 home:(id)arg2 ;
-(id)initWithSettingsController:(id)arg0 sourceItem:(id)arg1 home:(id)arg2 ;
-(id)preferredOutputVoiceAccentOptionsForSelectedOption;
-(id)preferredOutputVoiceOptionsForSelectedOption;
-(id)preferredRecognitionLanguageOptionsForSelectedOption;
-(id)updateSelectedLanguageOption:(id)arg0 ;
-(id)updateSelectedLanguageOption:(id)arg0 accessoryIdentifier:(id)arg1 ;
-(void)_fetchAvailableLanguagesAndGenerateOptions;
-(void)_subscribeToSiriLanguageSettings;
-(void)_updateSettingsAndNotifyObservers:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg0 settings:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif