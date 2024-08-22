// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSETTINGSCONTROLLER_H
#define HMDSETTINGSCONTROLLER_H

@class HMFObject, NSMapTable, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol, HMDSettingsMessageHandlerProtocol, HMDSettingsControllerDependency, HMDSettingsControllerDelegate;


#import "HMDSettingGroup.h"

@interface HMDSettingsController : HMFObject <HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol>

 {
    os_unfair_lock_s _lock;
    BOOL _isInitialized;
    id<HMDSettingsMessageHandlerProtocol> *_messageHandler;
    id<HMDSettingsControllerDependency> *_dependency;
    id<HMDSettingsControllerDelegate> *_delegate;
    HMDSettingGroup *_rootGroup;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
}


@property (readonly) NSArray *allObjectIdentifiers;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *userUUID; // ivar: _userUUID


+(id)logCategory;
-(id)_prunedSettingsGroupByRemovingKeyPathsFromGroup:(id)arg0 ;
-(id)initWithDependency:(id)arg0 delegate:(id)arg1 ;
-(id)logIdentifier;
-(id)migrateSettingsTransactionWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)modelsToMakeSettings;
-(id)modelsToMigrateSettings;
-(id)settingForKeyPath:(id)arg0 ;
-(id)settingValuesByKeyPathWithPrefix:(id)arg0 ;
-(void)configure;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadWithModels:(id)arg0 ;
-(void)transactionSettingConstraintModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)transactionSettingConstraintModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)transactionSettingGroupModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)transactionSettingGroupModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)transactionSettingModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)transactionSettingModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)updateRootGroup:(id)arg0 ;
-(void)updateWithEncodedValue:(id)arg0 onSettingKeyPath:(id)arg1 completion:(id)arg2 ;
-(void)updateWithValue:(id)arg0 onSetting:(id)arg1 completion:(id)arg2 ;


@end


#endif