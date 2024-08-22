// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDEVENTTRIGGER_H
#define HMDEVENTTRIGGER_H

@class NSArray, NSMutableArray, NSString, NSPredicate;
@protocol HMDEventDelegate, HMFLogging;


#import "HMDTrigger.h"
#import "HMDEventTriggerExecutionSession.h"
#import "HMDPredicateUtilities.h"
#import "HMDEventTriggerUserConfirmationSession.h"

@interface HMDEventTrigger : HMDTrigger <HMDEventDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (nonatomic) NSUInteger activationState; // ivar: _activationState
@property (nonatomic) NSUInteger activationType; // ivar: _activationType
@property (readonly, nonatomic) NSArray *calendarEvents;
@property (readonly, nonatomic) NSArray *charThresholdEvents;
@property (readonly, nonatomic) NSArray *characteristicBaseEvents;
@property (readonly, nonatomic) NSArray *characteristicEvents;
@property (readonly, nonatomic) BOOL computedActive;
@property (readonly, nonatomic) BOOL containsRecurrences;
@property (retain, nonatomic) NSMutableArray *currentEvents; // ivar: _currentEvents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *durationEvents;
@property (readonly, nonatomic) NSArray *endEvents;
@property (retain, nonatomic) NSPredicate *evaluationCondition; // ivar: _evaluationCondition
@property (readonly, nonatomic) NSArray *events;
@property (nonatomic) BOOL executeOnce; // ivar: _executeOnce
@property (retain, nonatomic) HMDEventTriggerExecutionSession *executionSession; // ivar: _executionSession
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *locationEvents;
@property (nonatomic) BOOL migratedEventsToRecords; // ivar: _migratedEventsToRecords
@property (retain, nonatomic) HMDPredicateUtilities *predicateUtilities; // ivar: _predicateUtilities
@property (readonly, nonatomic) NSArray *presenceEvents;
@property (readonly, nonatomic) NSArray *recurrences; // ivar: _recurrences
@property (readonly, nonatomic) NSArray *significantTimeEvents;
@property (readonly) Class superclass;
@property (readonly) NSArray *timeEvents;
@property (readonly, nonatomic) NSArray *triggerEvents;
@property (retain, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // ivar: _userConfirmationSession


+(BOOL)__validateRecurrences:(id)arg0 ;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_checkAddEventModel:(id)arg0 message:(id)arg1 ;
-(BOOL)_isTriggerFiredNotificationEntitled;
-(BOOL)addEventsFromMessage:(id)arg0 ;
-(BOOL)checkSharedEventTriggerActivationResidentRequirement:(id)arg0 ;
-(BOOL)compatible:(id)arg0 user:(id)arg1 ;
-(BOOL)isAuthorizedForLocation;
-(BOOL)isEventTriggerOnLocalDeviceForAccessory:(id)arg0 ;
-(BOOL)isEventTriggerOnRemoteGatewayForAccessory:(id)arg0 ;
-(BOOL)isOwnerOfHome;
-(BOOL)isThisDeviceDesignatedFMFDevice;
-(BOOL)requiresDataVersion4;
-(BOOL)shouldActivateOnLocalDevice;
-(BOOL)shouldEncodeLastFireDate:(id)arg0 ;
-(NSUInteger)triggerType;
-(id)_updateEventsOnEventTrigger:(id)arg0 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)createEventModel:(id)arg0 endEvent:(BOOL)arg1 message:(id)arg2 checkForSupport:(BOOL)arg3 error:(*id)arg4 ;
-(id)didOccurEvent:(id)arg0 causingDevice:(id)arg1 ;
-(id)dumpState;
-(id)emptyModelObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 message:(id)arg2 ;
-(id)messageReceiverChildren;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(void)_activateEvents:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_addEventToEventTrigger:(id)arg0 ;
-(void)_computeActivation;
-(void)_evaluationConditionUpdated:(id)arg0 message:(id)arg1 ;
-(void)_eventTriggerRecurrencesUpdated:(id)arg0 message:(id)arg1 ;
-(void)_executeOnceUpdated:(id)arg0 message:(id)arg1 ;
-(void)_handleAddEventModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddEventToEventTrigger:(id)arg0 ;
-(void)_handleCharacteristicRemove:(id)arg0 eventsToRemove:(id)arg1 ;
-(void)_handleEventTriggerUpdate:(id)arg0 message:(id)arg1 ;
-(void)_handleLocationAuthorizationChangedNotification:(id)arg0 ;
-(void)_handleRemoveEventModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveEventsFromEventTrigger:(id)arg0 ;
-(void)_handleRemoveEventsFromEventTrigger:(id)arg0 relay:(BOOL)arg1 ;
-(void)_handleUpdateEventTriggerCondition:(id)arg0 ;
-(void)_handleUpdateEventTriggerExecuteOnce:(id)arg0 ;
-(void)_handleUpdateEventTriggerRecurrences:(id)arg0 ;
-(void)_handleUpdateEventsOnEventTrigger:(id)arg0 ;
-(void)_handleUpdateOwningDevice:(id)arg0 ;
-(void)_handleUserPermissionRequest:(id)arg0 ;
-(void)_migrateEventsToRecords;
-(void)_reevaluateIfRelaunchRequired;
-(void)_registerForMessages;
-(void)_removeEvents:(id)arg0 ;
-(void)_removeEventsFromEventTrigger:(id)arg0 ;
-(void)_resetExecutionState;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)_updateCondition:(id)arg0 ;
-(void)_updateEventTriggerCondition:(id)arg0 ;
-(void)_updateEventTriggerExecuteOnce:(id)arg0 ;
-(void)_updateEventTriggerRecurrences:(id)arg0 ;
-(void)_updateOwningDevice:(id)arg0 ;
-(void)_userDidConfirmExecute:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)addEvent:(id)arg0 ;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executionComplete:(id)arg0 error:(id)arg1 ;
-(void)fixupForReplacementAccessory:(id)arg0 ;
-(void)invalidate;
-(void)processEventRecords:(id)arg0 message:(id)arg1 ;
-(void)removeAccessory:(id)arg0 ;
-(void)removeCharacteristic:(id)arg0 ;
-(void)removeEvent:(id)arg0 ;
-(void)removeService:(id)arg0 ;
-(void)removeUser:(id)arg0 ;
-(void)resetExecutionState;
-(void)sendTriggerFiredNotification:(id)arg0 ;
-(void)takeOverOwnershipOfTrigger;
-(void)timerFired:(id)arg0 ;
-(void)userDidConfirmExecute:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif