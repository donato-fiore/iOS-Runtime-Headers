// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVENTTRIGGERUSERCONFIRMATIONSESSION_H
#define HMDEVENTTRIGGERUSERCONFIRMATIONSESSION_H

@class NSMutableArray, NSString, NSSet, NSUUID;
@protocol HMFDumpState, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDEventTriggerSession.h"
#import "HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent.h"
#import "HMDEventTriggerExecutionSession.h"
#import "HMDEventTriggerDevice.h"
#import "HMDTriggerConfirmationTimer.h"

@interface HMDEventTriggerUserConfirmationSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver>



@property (retain, nonatomic) HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *analyticsEvent; // ivar: _analyticsEvent
@property (retain, nonatomic) NSMutableArray *analyticsSendEvents; // ivar: _analyticsSendEvents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HMDEventTriggerExecutionSession *executionSession; // ivar: _executionSession
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMDEventTriggerDevice *requestingDevice; // ivar: _requestingDevice
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDTriggerConfirmationTimer *userResponseTimer; // ivar: _userResponseTimer


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 eventTrigger:(id)arg1 workQueue:(id)arg2 msgDispatcher:(id)arg3 requestingDevice:(id)arg4 ;
-(void)_askForUserPermissionFromDevice:(id)arg0 executionSessionID:(id)arg1 ;
-(void)_createBulletinNotification;
-(void)_handleUserPermissionRemoteResponse:(id)arg0 ;
-(void)_handleUserPermissionRemoveDialogRequest:(id)arg0 ;
-(void)_registerForMessages;
-(void)_removeUserDialog:(id)arg0 ;
-(void)_sessionComplete;
-(void)_userResponse:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)askForUserPermission:(id)arg0 ;
-(void)createBulletinNotification;
-(void)dealloc;
-(void)timerDidFire:(id)arg0 ;
-(void)userDidConfirmExecute:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif