// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLIENTCONNECTION_H
#define HMDCLIENTCONNECTION_H

@class HMFObject, NSMutableArray, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDClientConnection : HMFObject <HMFMessageReceiver>



@property (retain, nonatomic) NSMutableArray *commandsBeingExecuted; // ivar: _commandsBeingExecuted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithHomeManager:(id)arg0 queue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)_handleDaemonRequest:(id)arg0 ;
-(void)_handleIdmsAccountUsernameModified:(id)arg0 ;
-(void)_handleSiriCommand:(id)arg0 ;
-(void)_handleSiriIntentRequest:(id)arg0 ;
-(void)_handleSiriSyncDataRequest:(id)arg0 ;
-(void)_registerForMessages;
-(void)dealloc;


@end


#endif