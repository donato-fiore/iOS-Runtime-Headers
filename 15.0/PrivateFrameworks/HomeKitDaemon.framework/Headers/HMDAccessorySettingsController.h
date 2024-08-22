// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETTINGSCONTROLLER_H
#define HMDACCESSORYSETTINGSCONTROLLER_H

@class HMFObject, NSMutableArray, HMFTimer, NSArray, NSString, NSMutableSet, NSOperationQueue, NSMapTable, NSUUID;
@protocol HMDLanguageValueListSettingDataProvider, HMFLogging, HMFTimerDelegate, HMDAccessorySettingsBackingStoreTransactionReceiverDelegate, HMDAccessorySettingsMessageController, NSSecureCoding, OS_os_log, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessorySettingsControllerDependencyFactory, HMMLogEventSubmitting, HMDAccessorySettingsMessageHandler, HMDBackingStoreObjectProtocol, OS_dispatch_queue;


#import "HMDAccessorySettingsController.h"
#import "HMDAccessorySettingGroup.h"

@interface HMDAccessorySettingsController : HMFObject <HMDLanguageValueListSettingDataProvider, HMFLogging, HMFTimerDelegate, HMDAccessorySettingsBackingStoreTransactionReceiverDelegate, HMDAccessorySettingsMessageController, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_os_log> *_logger;
}


@property (readonly) NSMutableArray *allChildrenIdentifiers; // ivar: _allChildrenIdentifiers
@property (retain) HMFTimer *auditSettingsTimer; // ivar: _auditSettingsTimer
@property (readonly, copy) NSArray *childrenIdentifiers;
@property (readonly) NSString *codingKey; // ivar: _codingKey
@property (retain, nonatomic) NSMutableSet *constraintItemsMarkedForRemoval; // ivar: _constraintItemsMarkedForRemoval
@property (retain, nonatomic) NSOperationQueue *constraintModifyOperationQueue; // ivar: _constraintModifyOperationQueue
@property (readonly, weak) NSObject<HMDAccessorySettingsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDAccessorySettingsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly) NSMutableSet *dependantControllers; // ivar: _dependantControllers
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didInitiateSettingsCreationForOlderSoftwareCounterpart; // ivar: _didInitiateSettingsCreationForOlderSoftwareCounterpart
@property (readonly) NSObject<HMDAccessorySettingsControllerDependencyFactory> *factory; // ivar: _factory
@property (retain) HMFTimer *fixupSettingsTimer; // ivar: _fixupSettingsTimer
@property (retain) NSMapTable *groupsMap; // ivar: _groupsMap
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property BOOL isMigrationOwner; // ivar: _isMigrationOwner
@property BOOL isSettingOwner; // ivar: _isSettingOwner
@property (retain, nonatomic) HMFTimer *languageChangeDebounceTimer; // ivar: _languageChangeDebounceTimer
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) NSObject<HMDAccessorySettingsMessageHandler> *messageHandler; // ivar: _messageHandler
@property (weak) HMDAccessorySettingsController *ownerController; // ivar: _ownerController
@property (readonly) NSUUID *parentUUID; // ivar: _parentUUID
@property (retain) HMDAccessorySettingGroup *rootGroup; // ivar: _rootGroup
@property (retain) NSMapTable *settingsMap; // ivar: _settingsMap
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSObject<HMDBackingStoreObjectProtocol> *transactionReceiver; // ivar: _transactionReceiver
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)hasDependants;
-(BOOL)haveGroupWithUUID:(id)arg0 ;
-(BOOL)isProxy;
-(id)_keyPathsForSettings;
-(id)groupForKeyPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 dataSource:(id)arg2 parentUUID:(id)arg3 codingKey:(id)arg4 logEventSubmitter:(id)arg5 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 dataSource:(id)arg2 parentUUID:(id)arg3 codingKey:(id)arg4 logEventSubmitter:(id)arg5 settingOwner:(BOOL)arg6 migrationOwner:(BOOL)arg7 factory:(id)arg8 ;
-(id)languageValueList;
-(id)logIdentifier;
-(id)mergeWithSettingsMetadata:(id)arg0 ;
-(id)modelObjectsForSettings;
-(id)settingForKeyPath:(id)arg0 ;
-(void)_cacheConstraintAdditions:(id)arg0 removals:(id)arg1 setting:(id)arg2 ;
-(void)_createSettings;
-(void)_didAddGroup:(id)arg0 ;
-(void)_didAddSetting:(id)arg0 ;
-(void)_didRemoveGroup:(id)arg0 ;
-(void)_didRemoveSetting:(id)arg0 ;
-(void)_migrateSettingsWithCompletion:(id)arg0 ;
-(void)_onMessageUpdateValue:(id)arg0 settingKeyPath:(id)arg1 senderVersion:(id)arg2 senderProductClass:(NSInteger)arg3 completion:(id)arg4 ;
-(void)_performDependantFixup;
-(void)_performSettingsAudit;
-(void)_reevaluateDependantSettings;
-(void)_removeDependant:(id)arg0 ;
-(void)_replaceConstraintsOnMessageToChildWithAdditions:(id)arg0 removedChildConstraints:(id)arg1 settingKeyPath:(id)arg2 senderProductClass:(NSInteger)arg3 completion:(id)arg4 ;
-(void)_replaceConstraintsOnSetting:(id)arg0 additions:(id)arg1 removals:(id)arg2 completion:(id)arg3 ;
-(void)_scheduleAuditWithReason:(NSUInteger)arg0 ;
-(void)_updateValue:(id)arg0 forSetting:(id)arg1 senderVersion:(id)arg2 senderProductClass:(NSInteger)arg3 completion:(id)arg4 ;
-(void)addDependant:(id)arg0 ;
-(void)addedSettingModel:(id)arg0 completion:(id)arg1 ;
-(void)auditOnFirstFetch;
-(void)configureIsSettingOwner:(BOOL)arg0 home:(id)arg1 ;
-(void)configureIsSettingOwner:(BOOL)arg0 migrationOwner:(BOOL)arg1 home:(id)arg2 ;
-(void)decodeWithCoder:(id)arg0 ;
-(void)didBecomeIndependantOwner;
-(void)didChangeDependantSettings:(id)arg0 ownerSettingsKeyPaths:(id)arg1 ;
-(void)didChangeSetting:(id)arg0 ;
-(void)didDetectCounterpartUsesSoftwareVersionBasedMigrationOwner;
-(void)didUpdateSettingConstraints:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleLanguageChangeTimerFired;
-(void)handleRemovedGroupModel:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovedSettingConstraintModel:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovedSettingModel:(id)arg0 completion:(id)arg1 ;
-(void)handleUpdatedGroupModel:(id)arg0 completion:(id)arg1 ;
-(void)handleUpdatedSettingConstraintModel:(id)arg0 completion:(id)arg1 ;
-(void)handleUpdatedSettingModel:(id)arg0 completion:(id)arg1 ;
-(void)onMessageAddConstraint:(id)arg0 settingIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)onMessageRemoveConstraint:(id)arg0 settingIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)onMessageReplaceConstraintsWithAdditions:(id)arg0 constraintIdsToRemove:(id)arg1 settingIdentifier:(id)arg2 senderProductClass:(NSInteger)arg3 completion:(id)arg4 ;
-(void)onMessageUpdateConstraints:(id)arg0 settingIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)onMessageUpdateValue:(id)arg0 settingIdentifier:(id)arg1 senderVersion:(id)arg2 senderProductClass:(NSInteger)arg3 completion:(id)arg4 ;
-(void)owner:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)removeAllDependants;
-(void)removeDependant:(id)arg0 ;
-(void)scheduleAuditWithReason:(NSUInteger)arg0 from:(id)arg1 ;
-(void)scheduleDependantFixup;
-(void)settingsHierarchyDidChange;
-(void)timerDidFire:(id)arg0 ;
-(void)updateSettingOwner:(BOOL)arg0 ;
-(void)updatedSetting:(id)arg0 model:(id)arg1 completion:(id)arg2 ;


@end


#endif