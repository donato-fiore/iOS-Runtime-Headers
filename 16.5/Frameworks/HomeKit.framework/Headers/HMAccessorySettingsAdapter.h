// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTINGSADAPTER_H
#define HMACCESSORYSETTINGSADAPTER_H

@class NSString, NSUUID, NSArray;
@protocol HMAccessorySettingsDataSourceDelegate, HMAccessorySettingsAdapterDelegate, HMAccessorySettingsContainerInternal, HMControllable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMAccessorySettingsDataSource.h"
#import "HMAccessorySettings.h"
#import "HMAccessorySettingsController.h"
#import "HMLanguageValueListSetting.h"
#import "HMAccessorySettingGroup.h"
#import "HMLanguageSetting.h"

@interface HMAccessorySettingsAdapter : NSObject <HMAccessorySettingsDataSourceDelegate>



@property (readonly) _HMContext *accessoryContext; // ivar: _accessoryContext
@property (readonly) HMAccessorySettingsDataSource *accessoryDataSource; // ivar: _accessoryDataSource
@property (retain) HMAccessorySettings *accessorySettings; // ivar: _accessorySettings
@property (readonly) HMAccessorySettingsController *accessorySettingsController; // ivar: _accessorySettingsController
@property (retain) HMLanguageValueListSetting *availableLanguageSetting; // ivar: _availableLanguageSetting
@property (readonly, nonatomic) NSInteger containerType; // ivar: _containerType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMAccessorySettingsAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL didReceiveFirstUpdateEvent; // ivar: _didReceiveFirstUpdateEvent
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (retain) HMAccessorySettingGroup *rootGroup; // ivar: _rootGroup
@property (retain) HMLanguageSetting *selectedLanguageSetting; // ivar: _selectedLanguageSetting
@property (readonly, weak) NSObject<HMAccessorySettingsContainerInternal> *settingsContainer; // ivar: _settingsContainer
@property (readonly, copy, nonatomic) NSUUID *settingsContainerIdentifier; // ivar: _settingsContainerIdentifier
@property (readonly, weak) NSObject<HMControllable> *settingsControl; // ivar: _settingsControl
@property BOOL settingsReflected; // ivar: _settingsReflected
@property (readonly) Class superclass;
@property (retain) NSArray *tapAssistanceSelections; // ivar: _tapAssistanceSelections
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)defaultSettingsContainsKeyPath:(id)arg0 ;
+(BOOL)isKeyPathForBooleanSettingType:(id)arg0 ;
+(BOOL)isKeyPathForConstrainedNumberSettingType:(id)arg0 ;
+(BOOL)isKeyPathForTapAssistanceSelectionSettingType:(id)arg0 ;
+(NSInteger)itemIndexWithTapAssistanceSelectionItem:(id)arg0 ;
+(float)constraintSettingScaleFactor;
+(id)availableLanguagesKeyPath;
+(id)defaultSettings;
+(id)defaultSettingsAllKeyPaths;
+(id)defaultSettingsConstraintsForKeyPath:(id)arg0 ;
+(id)languageKeyPaths;
+(id)logCategory;
+(id)scaleDownNumberSettingValue:(id)arg0 ;
+(id)scaleUpNumberSettingValue:(id)arg0 ;
+(id)tapAssistanceSelectionItemWithIndex:(NSInteger)arg0 ;
+(id)tapAssistanceSelectionTitles;
-(BOOL)_addOrUpdateLanguageSetting:(id)arg0 availableLanguagesSetting:(id)arg1 ;
-(BOOL)_handleLanguageSettingUpdate:(id)arg0 ;
-(BOOL)booleanSettingValueWithKeyPath:(id)arg0 ;
-(BOOL)isValidSelectionItemNumberConstraintValue:(id)arg0 min:(id)arg1 max:(id)arg2 step:(id)arg3 ;
-(BOOL)settingReflected:(id)arg0 ;
-(BOOL)transformSelectionToInteger:(id)arg0 integerValue:(*NSInteger)arg1 ;
-(BOOL)updateBooleanSettingWithKeyPath:(id)arg0 value:(BOOL)arg1 ;
-(BOOL)updateNumberSettingWithKeyPath:(id)arg0 value:(id)arg1 ;
-(BOOL)updateTapAssistanceSelectionSettingWithKeyPath:(id)arg0 value:(id)arg1 ;
-(id)_findSettingInGroupForKeyPath:(id)arg0 group:(id)arg1 ;
-(id)_transformAccessorySettingToLanguageSetting:(id)arg0 ;
-(id)accessoryLanguageSetting;
-(id)accessoryNumberSettingWithKeyPath:(id)arg0 ;
-(id)accessorySettingWithKeyPath:(id)arg0 ;
-(id)appendKeyPath:(id)arg0 withNextKey:(id)arg1 ;
-(id)createKeyPathArrayWithKeyPath:(id)arg0 ;
-(id)createTapAssistanceSelectionSettingFromNumberConstraint:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 min:(id)arg3 max:(id)arg4 step:(id)arg5 ;
-(id)createTapAssistanceSelections;
-(id)findOrAddAccessorySettingGroupWithKeyPath:(id)arg0 ;
-(id)groupKeyArrayFromKeyPath:(id)arg0 ;
-(id)initWithHomeIdentifier:(id)arg0 dataSource:(id)arg1 controller:(id)arg2 workQueue:(id)arg3 settingsContainer:(id)arg4 containerIdentifier:(id)arg5 containerType:(NSInteger)arg6 settingsControl:(id)arg7 context:(id)arg8 ;
-(id)languageSelectionItemFromValue:(id)arg0 ;
-(id)legacyLanguageSettingFromSelectedSetting:(id)arg0 selections:(id)arg1 settingsReflected:(BOOL)arg2 ;
-(id)logIdentifier;
-(id)numberSettingValueWithKeyPath:(id)arg0 ;
-(id)settingKeyFromKeyPath:(id)arg0 ;
-(id)tapAssistanceSelectionSetting:(id)arg0 ;
-(id)tapAssistanceSelectionSettingValue:(id)arg0 ;
-(id)transformIntegerToSelection:(NSInteger)arg0 ;
-(void)_configureForAccessoryWithCompletionHandler:(id)arg0 ;
-(void)_configureForMediaSystemWithCompletionHandler:(id)arg0 ;
-(void)accessorySettingsDataSource:(id)arg0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2 ;
-(void)configureWithCompletionHandler:(id)arg0 ;
-(void)createRootSettingGroup;
-(void)unconfigure;
-(void)updateSettingsReflected:(BOOL)arg0 ;
-(void)updateWithKeyPath:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif