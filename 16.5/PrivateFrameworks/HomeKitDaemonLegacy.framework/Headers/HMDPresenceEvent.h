// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRESENCEEVENT_H
#define HMDPRESENCEEVENT_H

@class HMPresenceEventActivation, NSString, NSSet, NSUUID, NSArray, NSDictionary;
@protocol NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, HMDTriggerEventProtocol, OS_dispatch_queue;


#import "HMDEvent.h"
#import "HMDEventTriggerExecutionSession.h"

@interface HMDPresenceEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, HMDTriggerEventProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HMPresenceEventActivation *activation; // ivar: _activation
@property (readonly, nonatomic) NSUInteger activationGranularity;
@property BOOL currentStatus; // ivar: _currentStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) HMDEventTriggerExecutionSession *executionSession; // ivar: _executionSession
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) NSString *presenceType; // ivar: _presenceType
@property (readonly) Class superclass;
@property (copy) NSArray *userUUIDs; // ivar: _userUUIDs
@property (copy) NSDictionary *users; // ivar: _users


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_activate:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)_evaluateWithHomePresence:(id)arg0 presenceType:(id)arg1 users:(id)arg2 ;
-(BOOL)compatibleWithUser:(id)arg0 ;
-(BOOL)evaluateWithHomePresence:(id)arg0 ;
-(BOOL)evaluateWithHomePresenceUpdate:(id)arg0 presenceType:(id)arg1 ;
-(BOOL)evaluateWithUserPresence:(id)arg0 presenceType:(id)arg1 ;
-(BOOL)isActive;
-(BOOL)isCompatibleWithEvent:(id)arg0 ;
-(id)analyticsPresenceEventData;
-(id)analyticsTriggerEventData;
-(id)createClientPayload;
-(id)createDaemonPayload;
-(id)createPayload;
-(id)createPresenceEventPayload:(BOOL)arg0 ;
-(id)emptyModelObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)thisUser;
-(void)_addUser:(id)arg0 ;
-(void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg0 ;
-(void)_handleHomePresenceUpdate:(id)arg0 ;
-(void)_handleUpdateRequest:(id)arg0 ;
-(void)_registerForMessages;
-(void)_removeAllUsers;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)_updateUsers:(id)arg0 home:(id)arg1 ;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)didEndExecutionSession:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleRemovalOfUser:(id)arg0 transaction:(id)arg1 ;


@end


#endif