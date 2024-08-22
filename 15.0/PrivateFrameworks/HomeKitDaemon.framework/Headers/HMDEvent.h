// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVENT_H
#define HMDEVENT_H

@class HMFObject, NSString, NSSet, NSUUID, HMFMessageDispatcher;
@protocol NSSecureCoding, HMFDumpState, HMDHomeMessageReceiver, HMFLogging, HMDBackingStoreObjectProtocol, HMDEventDelegate, OS_dispatch_queue;


#import "HMDEventTrigger.h"
#import "HMDHome.h"

@interface HMDEvent : HMFObject <NSSecureCoding, HMFDumpState, HMDHomeMessageReceiver, HMFLogging, HMDBackingStoreObjectProtocol>



@property (nonatomic) NSUInteger activationType; // ivar: _activationType
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDEventDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEndEvent) BOOL endEvent; // ivar: _endEvent
@property (weak, nonatomic) HMDEventTrigger *eventTrigger; // ivar: _eventTrigger
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) NSString *logString; // ivar: _logString
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *triggerType; // ivar: _triggerType
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_activate:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)analyticsTriggerEventData;
-(id)createPayload;
-(id)dumpState;
-(id)emptyModelObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(id)logIdentifier;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(void)_handleUpdateRequest:(id)arg0 ;
-(void)_registerForMessages;
-(void)_setup;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)_updateTriggerType;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif