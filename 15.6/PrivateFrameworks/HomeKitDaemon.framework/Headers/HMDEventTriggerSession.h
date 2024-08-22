// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDEVENTTRIGGERSESSION_H
#define HMDEVENTTRIGGERSESSION_H

@class HMFObject, NSString, NSUUID, NSSet, HMFMessageDispatcher;
@protocol HMFDumpState, HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDDevice.h"
#import "HMDEventTrigger.h"

@interface HMDEventTriggerSession : HMFObject <HMFDumpState, HMFLogging, HMDHomeMessageReceiver>



@property (readonly, nonatomic) HMDDevice *currentDevice; // ivar: _currentDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HMDEventTrigger *eventTrigger; // ivar: _eventTrigger
@property (readonly, nonatomic) NSUUID *eventTriggerUUID; // ivar: _eventTriggerUUID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logString; // ivar: _logString
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(BOOL)sendMessage:(id)arg0 payload:(id)arg1 device:(id)arg2 responseHandler:(id)arg3 ;
-(BOOL)sendMessage:(id)arg0 payload:(id)arg1 device:(id)arg2 target:(id)arg3 responseHandler:(id)arg4 ;
-(BOOL)sendResidentMessage:(id)arg0 payload:(id)arg1 responseHandler:(id)arg2 ;
-(id)dumpState;
-(id)initWithSessionID:(id)arg0 eventTrigger:(id)arg1 workQueue:(id)arg2 msgDispatcher:(id)arg3 ;
-(id)logIdentifier;
-(void)_registerForMessages;
-(void)dealloc;


@end


#endif