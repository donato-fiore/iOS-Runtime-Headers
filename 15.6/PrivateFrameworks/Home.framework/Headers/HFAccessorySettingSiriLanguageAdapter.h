// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYSETTINGSIRILANGUAGEADAPTER_H
#define HFACCESSORYSETTINGSIRILANGUAGEADAPTER_H

@class NSSet, NSString, NAFuture, NSHashTable;
@protocol HFAccessorySettingAdapterDisplayArbitrating;


#import "HFAccessorySettingAdapter.h"
#import "HFSiriLanguageOption.h"

@interface HFAccessorySettingSiriLanguageAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>



@property (copy, nonatomic) NSSet *availableLanguageOptions; // ivar: _availableLanguageOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NAFuture *languageSettingFuture;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption; // ivar: _selectedLanguageOption
@property (readonly) Class superclass;


-(BOOL)shouldShowSettingsEntity:(id)arg0 ;
-(id)_beginMonitoringSettingsKeyPath:(id)arg0 ;
-(id)_reloadLanguagesFromHomeKitNotifyingObservers:(BOOL)arg0 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 mode:(NSUInteger)arg2 updateHandler:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 updateHandler:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg0 ;
-(id)preferredOutputVoiceOptionsForSelectedOption:(id)arg0 ;
-(id)preferredRecognitionLanguageOptionsForSelectedOption:(id)arg0 ;
-(id)updateAvailableLanguageOptions:(id)arg0 ;
-(id)updateSelectedLanguageOption:(id)arg0 ;
-(void)_dumpAvailableLanguageOptionsWithReason:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)homeKitSettingWasUpdated:(id)arg0 value:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif