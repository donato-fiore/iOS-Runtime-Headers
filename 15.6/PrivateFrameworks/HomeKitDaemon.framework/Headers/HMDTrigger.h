// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTRIGGER_H
#define HMDTRIGGER_H

@class HMFObject, NSDictionary, NSMutableDictionary, NSMutableArray, NSArray, NSString, NSUUID, NSSet, NSDate, HMFMessageDispatcher;
@protocol HMDBulletinIdentifiers, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMFLogging, HMDDevicePreferenceDataSource, HMDBackingStoreObjectProtocol, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDUser.h"
#import "HMDTriggerPolicy.h"

@interface HMDTrigger : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMFLogging, HMDDevicePreferenceDataSource, HMDBackingStoreObjectProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSDictionary *actionContext;
@property (retain, nonatomic) NSMutableDictionary *actionSetMappings; // ivar: _actionSetMappings
@property (retain, nonatomic) NSMutableArray *actionSetUUIDs; // ivar: _actionSetUUIDs
@property (readonly, copy) NSArray *actionSets;
@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSDictionary *bulletinContext;
@property (readonly, nonatomic, getter=isConfigured) BOOL configured;
@property (retain, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSDate *mostRecentFireDate; // ivar: _mostRecentFireDate
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isOwnedByThisDevice) BOOL ownedByThisDevice;
@property (retain, nonatomic) HMDUser *owner; // ivar: _owner
@property (retain, nonatomic) HMDTriggerPolicy *policy; // ivar: _policy
@property (readonly, nonatomic) BOOL requiresDataVersion4;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger triggerType; // ivar: _triggerType
@property (readonly, copy) NSString *urlString;
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_isTriggerFiredNotificationEntitled;
-(BOOL)compatible:(id)arg0 user:(id)arg1 ;
-(BOOL)hasNoActions;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(BOOL)modelContainsTriggerFired:(id)arg0 ;
-(BOOL)shouldActivateOnLocalDevice;
-(BOOL)shouldEncodeLastFireDate:(id)arg0 ;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(id)actionSetForKey:(id)arg0 ;
-(id)actionSetMapKeys;
-(id)attributeDescriptions;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)canRenameTriggerWithNewName:(id)arg0 configuredName:(id)arg1 error:(*id)arg2 ;
-(id)dumpState;
-(id)emptyModelObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 ;
-(id)logIdentifier;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(id)arg1 ;
-(id)updateEventTriggerMessage:(int)arg0 message:(id)arg1 relay:(BOOL)arg2 ;
-(void)_actionSetsUpdated:(id)arg0 message:(id)arg1 ;
-(void)_activate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_activateTriggerRequest:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_addActionSet:(id)arg0 ;
-(void)_checkForNoActions;
-(void)_executeActionSets:(id)arg0 captureCurrentState:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_executeActionSetsWithCompletionHandler:(id)arg0 ;
-(void)_fillBaseObjectChangeModel:(id)arg0 ;
-(void)_forceEvaluate;
-(void)_handleActivateTriggerRequest:(id)arg0 ;
-(void)_handleAddActionSetRequest:(id)arg0 ;
-(void)_handleAddTriggerOwnedActionSetRequest:(id)arg0 ;
-(void)_handleRemoveActionSetRequest:(id)arg0 postUpdate:(BOOL)arg1 ;
-(void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg0 postUpdate:(BOOL)arg1 ;
-(void)_handleRemoveTriggerPolicyRequest:(id)arg0 ;
-(void)_handleRenameRequest:(id)arg0 ;
-(void)_handleTriggerUpdate:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateActionSetRequest:(id)arg0 ;
-(void)_handleUpdateTriggerPolicyRequest:(id)arg0 ;
-(void)_recentFireDateUpdated:(id)arg0 ;
-(void)_registerForMessages;
-(void)_renameRequest:(id)arg0 ;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)_updateActionSetRequest:(id)arg0 postUpdate:(BOOL)arg1 ;
-(void)activateAfterResidentChangeWithCompletion:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 queue:(id)arg2 ;
-(void)confirmResident;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeCompleteWithError:(id)arg0 ;
-(void)fixupForReplacementAccessory:(id)arg0 ;
-(void)invalidate;
-(void)markChangedForMessage:(id)arg0 ;
-(void)markChangedForMessage:(id)arg0 triggerModel:(id)arg1 ;
-(void)reEvaluate:(NSUInteger)arg0 ;
-(void)removeAccessory:(id)arg0 ;
-(void)removeActionSet:(id)arg0 postUpdate:(BOOL)arg1 ;
-(void)removeActionSetForKey:(id)arg0 ;
-(void)removeAllActionSets;
-(void)removeCharacteristic:(id)arg0 ;
-(void)removeService:(id)arg0 ;
-(void)sendTriggerFiredNotification:(id)arg0 ;
-(void)setActionSetForKey:(id)arg0 value:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 message:(id)arg1 ;
-(void)timerFired:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)triggerFired;
-(void)userDidConfirmExecute:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif