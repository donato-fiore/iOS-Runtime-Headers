// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSETTINGSCONTROLLER_H
#define HMDSETTINGSCONTROLLER_H

@class HMFObject, NSArray, NSString, NSMapTable;
@protocol HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol, HMDSettingsControllerDelegate, HMDSettingsControllerDependency, HMDSettingsMessageHandlerProtocol;


#import "HMDSettingGroup.h"

@interface HMDSettingsController : HMFObject <HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSArray *allObjectIdentifiers;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDSettingsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<HMDSettingsControllerDependency> *dependency; // ivar: _dependency
@property (readonly, copy) NSString *description;
@property (retain) NSMapTable *groupsMap; // ivar: _groupsMap
@property (readonly) NSUInteger hash;
@property BOOL isInitialized; // ivar: _isInitialized
@property (readonly) NSObject<HMDSettingsMessageHandlerProtocol> *messageHandler; // ivar: _messageHandler
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain) HMDSettingGroup *rootGroup; // ivar: _rootGroup
@property (retain) NSMapTable *settingsMap; // ivar: _settingsMap
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_flattenedSettingControllerRoot:(id)arg0 withCurrentPath:(id)arg1 andReturnDictionary:(id)arg2 ;
-(id)_keyPathsFromGroup:(id)arg0 currentPath:(id)arg1 ;
-(id)_keyPathsToModelInModelIDToModelLookup:(id)arg0 parentIDToModelIDsLookup:(id)arg1 currentID:(id)arg2 currentPath:(id)arg3 ;
-(id)initWithDependency:(id)arg0 delegate:(id)arg1 ;
-(id)keyPathsInExistingSettings;
-(id)keyPathsInModels:(id)arg0 ;
-(id)logIdentifier;
-(id)modelsToMakeSettings;
-(id)modelsToMigrateSettings;
-(id)settingForIdentifier:(id)arg0 ;
-(id)settingForKeyPath:(id)arg0 ;
-(id)settingGroupForIdentifier:(id)arg0 ;
-(id)settingValuesByKeyPathWithPrefix:(id)arg0 ;
-(void)_handleAddedConstraintModel:(id)arg0 shouldNotify:(BOOL)arg1 completion:(id)arg2 ;
-(void)_handleAddedGroupModel:(id)arg0 shouldNotify:(BOOL)arg1 completion:(id)arg2 ;
-(void)_handleAddedRootGroup:(id)arg0 ;
-(void)_handleAddedSettingModel:(id)arg0 shouldNotify:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateRootGroup:(id)arg0 ;
-(void)configure;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAddedConstraintModel:(id)arg0 completion:(id)arg1 ;
-(void)handleAddedConstraintModel:(id)arg0 shouldNotify:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleAddedGroupModel:(id)arg0 completion:(id)arg1 ;
-(void)handleAddedGroupModel:(id)arg0 shouldNotify:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleAddedSettingModel:(id)arg0 completion:(id)arg1 ;
-(void)handleAddedSettingModel:(id)arg0 shouldNotify:(BOOL)arg1 completion:(id)arg2 ;
-(void)loadWithModels:(id)arg0 ;
-(void)migrateSettingsWithCompletion:(id)arg0 ;
-(void)resetupMessageHandlersWithAddedGroups:(id)arg0 removedGroups:(id)arg1 addedSettings:(id)arg2 removedSettings:(id)arg3 ;
-(void)settingsHierarchyDidChange;
-(void)transactionSettingConstraintModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)transactionSettingConstraintModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)transactionSettingGroupModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)transactionSettingGroupModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)transactionSettingModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)transactionSettingModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)updateParentsInKeyPathToModel:(id)arg0 usingKeyPathToSetting:(id)arg1 ;
-(void)updateRootGroup:(id)arg0 ;
-(void)updateWithEncodedValue:(id)arg0 onSettingIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)updateWithValue:(id)arg0 onSetting:(id)arg1 completion:(id)arg2 ;
-(void)updateWithValue:(id)arg0 onSettingIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif