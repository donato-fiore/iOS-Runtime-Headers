// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYSETTINGSADAPTER_H
#define HMACCESSORYSETTINGSADAPTER_H

@class NSUUID, NSString, NSArray;
@protocol HMAccessorySettingsDataSourceDelegate, HMAccessorySettingsAdapterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "_HMContext.h"
#import "HMAccessorySettingsDataSource.h"
#import "HMAccessorySettings.h"
#import "HMAccessorySettingsController.h"
#import "HMLanguageValueListSetting.h"
#import "HMAccessorySettingGroup.h"
#import "HMLanguageSetting.h"

@interface HMAccessorySettingsAdapter : NSObject <HMAccessorySettingsDataSourceDelegate>



@property (readonly, weak) HMAccessory *accessory; // ivar: _accessory
@property (readonly) _HMContext *accessoryContext; // ivar: _accessoryContext
@property (readonly) HMAccessorySettingsDataSource *accessoryDataSource; // ivar: _accessoryDataSource
@property (readonly, copy, nonatomic) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain) HMAccessorySettings *accessorySettings; // ivar: _accessorySettings
@property (readonly) HMAccessorySettingsController *accessorySettingsController; // ivar: _accessorySettingsController
@property (retain) HMLanguageValueListSetting *availableLanguageSetting; // ivar: _availableLanguageSetting
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMAccessorySettingsAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (retain) HMAccessorySettingGroup *rootGroup; // ivar: _rootGroup
@property (retain) HMLanguageSetting *selectedLanguageSetting; // ivar: _selectedLanguageSetting
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
-(BOOL)transformSelectionToInteger:(id)arg0 integerValue:(*NSInteger)arg1 ;
-(BOOL)updateBooleanSettingWithKeyPath:(id)arg0 value:(BOOL)arg1 ;
-(BOOL)updateNumberSettingWithKeyPath:(id)arg0 value:(id)arg1 ;
-(BOOL)updateTapAssistanceSelectionSettingWithKeyPath:(id)arg0 value:(id)arg1 ;
-(id)_findSettingInGroupForKeyPath:(id)arg0 group:(id)arg1 ;
-(id)_transformAccessorySettingToLanguageSetting:(id)arg0 ;
-(id)accessoryNumberSettingWithKeyPath:(id)arg0 ;
-(id)accessorySettingWithKeyPath:(id)arg0 ;
-(id)appendKeyPath:(id)arg0 withNextKey:(id)arg1 ;
-(id)createKeyPathArrayWithKeyPath:(id)arg0 ;
-(id)createTapAssistanceSelectionSettingFromNumberConstraint:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 min:(id)arg3 max:(id)arg4 step:(id)arg5 ;
-(id)createTapAssistanceSelections;
-(id)findOrAddAccessorySettingGroupWithKeyPath:(id)arg0 ;
-(id)groupKeyArrayFromKeyPath:(id)arg0 ;
-(id)initWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 dataSource:(id)arg2 controller:(id)arg3 workQueue:(id)arg4 accessory:(id)arg5 context:(id)arg6 ;
-(id)languageSelectionItemFromValue:(id)arg0 ;
-(id)legacyLanguageSettingFromSelectedSetting:(id)arg0 selections:(id)arg1 ;
-(id)numberSettingValueWithKeyPath:(id)arg0 ;
-(id)settingKeyFromKeyPath:(id)arg0 ;
-(id)tapAssistanceSelectionSetting:(id)arg0 ;
-(id)tapAssistanceSelectionSettingValue:(id)arg0 ;
-(id)transformIntegerToSelection:(NSInteger)arg0 ;
-(void)accessorySettingsDataSource:(id)arg0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2 ;
-(void)configureWithCompletionHandler:(id)arg0 ;
-(void)createRootSettingGroup;
-(void)updateWithKeyPath:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif