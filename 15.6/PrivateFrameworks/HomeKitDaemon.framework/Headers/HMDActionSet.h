// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACTIONSET_H
#define HMDACTIONSET_H

@class HMFObject, NSArray, NSDictionary, NSMutableArray, NSString, HMFMessage, NSDate, HMFTimer, NSSet, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol, OS_dispatch_queue;


#import "HMDApplicationData.h"
#import "HMDActionSetEvent.h"
#import "HMDHome.h"

@interface HMDActionSet : HMFObject <HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSArray *associatedAccessories;
@property (readonly, nonatomic) BOOL containsMediaPlaybackActions;
@property (readonly, nonatomic) BOOL containsShortcutActions;
@property (retain, nonatomic) NSMutableArray *currentActions; // ivar: _currentActions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDActionSetEvent *executionActionSetEvent; // ivar: _executionActionSetEvent
@property (retain, nonatomic) NSDictionary *executionInitialStates; // ivar: _executionInitialStates
@property (retain, nonatomic) HMFMessage *executionMessage; // ivar: _executionMessage
@property (retain, nonatomic) NSDate *executionStart; // ivar: _executionStart
@property (retain, nonatomic) HMFTimer *executionTimeout; // ivar: _executionTimeout
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) NSDate *lastExecutionDate; // ivar: _lastExecutionDate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (readonly, copy) NSUUID *spiClientIdentifier; // ivar: _spiClientIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (readonly, copy) NSString *urlString;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)isBuiltinActionSetType:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)allowedActionClasses;
+(id)logCategory;
-(BOOL)_fixupActions;
-(BOOL)_handleRenameActionSetTransaction:(id)arg0 message:(id)arg1 ;
-(BOOL)configure:(id)arg0 messageDispatcher:(id)arg1 queue:(id)arg2 ;
-(BOOL)containsSecureCharacteristic;
-(BOOL)containsUnsecuringAction;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(id)_addCharacteristicWriteActionModelWithUUID:(id)arg0 message:(id)arg1 ;
-(id)_addLightProfileNaturalLightingModelWithUUID:(id)arg0 message:(id)arg1 ;
-(id)_addMediaPlaybackActionModelWithUUID:(id)arg0 message:(id)arg1 ;
-(id)_createActionExecutionLogEvent:(id)arg0 ;
-(id)_generateOverallError:(id)arg0 forSource:(NSUInteger)arg1 ;
-(id)_getActionsForActionSetObject;
-(id)actionWithUUID:(id)arg0 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 type:(id)arg2 home:(id)arg3 queue:(id)arg4 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(void)__handleActionsUpdated;
-(void)_execute:(id)arg0 activity:(id)arg1 ;
-(void)_execute:(id)arg0 captureCurrentState:(BOOL)arg1 writeRequestTuples:(id)arg2 ;
-(void)_executeGenericActions:(id)arg0 source:(NSUInteger)arg1 clientName:(id)arg2 completionHandler:(id)arg3 ;
-(void)_executeMediaPlaybackActions:(id)arg0 source:(NSUInteger)arg1 clientName:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleAddActionRequest:(id)arg0 ;
-(void)_handleAddCharactersiticWriteActionTransaction:(id)arg0 message:(id)arg1 ;
-(void)_handleAddLightProfileNaturalLightingActionTransaction:(id)arg0 message:(id)arg1 ;
-(void)_handleAddMediaPlaybackActionTransaction:(id)arg0 message:(id)arg1 ;
-(void)_handleAddNewAction:(id)arg0 message:(id)arg1 ;
-(void)_handleAddShortcutActionTransaction:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveAction:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveActionRequest:(id)arg0 ;
-(void)_handleRemoveActionTransaction:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRenameRequest:(id)arg0 ;
-(void)_handleUpdateActionRequest:(id)arg0 ;
-(void)_handleUpdateAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_issueReadRequests;
-(void)_issueWriteRequests:(id)arg0 ;
-(void)_processActionSetModelUpdated:(id)arg0 message:(id)arg1 ;
-(void)_registerForMessages;
-(void)_removeAction:(id)arg0 message:(id)arg1 ;
-(void)_removeDonatedIntent;
-(void)_updateNaturalLightingAction:(id)arg0 forMessage:(id)arg1 ;
-(void)_updatePlaybackAction:(id)arg0 forMessage:(id)arg1 ;
-(void)_updateWriteAction:(id)arg0 forMessage:(id)arg1 ;
-(void)addAction:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)execute:(id)arg0 ;
-(void)executeWithTriggerSource:(id)arg0 captureCurrentState:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)handleExecutionCompletedWithOverallError:(id)arg0 response:(id)arg1 ;
-(void)invalidate;
-(void)isAccessValidForExecutionWithMessage:(id)arg0 completion:(id)arg1 ;
-(void)removeAccessory:(id)arg0 ;
-(void)removeAction:(id)arg0 ;
-(void)removeActionForCharacteristic:(id)arg0 ;
-(void)removeAllActions;
-(void)removeService:(id)arg0 ;
-(void)sendNotificationWithAction:(id)arg0 message:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif