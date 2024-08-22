// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTELOGINHANDLER_H
#define HMDREMOTELOGINHANDLER_H

@class HMFObject, ACAccountStore, NSString, ACAccount, NSSet, NSUUID, HMFMessageDispatcher, HMFStagedValue;
@protocol HMFStagedValueDelegate, HMDHomeMessageReceiver, HMFLogging, NSSecureCoding, HMEEventForwarder, HMELastEventStoreReadHandle, OS_dispatch_queue;


#import "HMDAppleMediaAccessory.h"
#import "HMDRemoteLoginAnisetteDataHandler.h"
#import "HMDRemoteLoginInitiator.h"
#import "HMDRemoteLoginReceiver.h"

@interface HMDRemoteLoginHandler : HMFObject <HMFStagedValueDelegate, HMDHomeMessageReceiver, HMFLogging, NSSecureCoding>



@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) HMDRemoteLoginAnisetteDataHandler *anisetteDataHandler; // ivar: _anisetteDataHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<HMEEventForwarder> *eventForwarder; // ivar: _eventForwarder
@property (retain) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDRemoteLoginInitiator *initiator; // ivar: _initiator
@property (retain, nonatomic) ACAccount *loggedInAccount; // ivar: _loggedInAccount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, nonatomic) HMDRemoteLoginReceiver *receiver; // ivar: _receiver
@property (readonly) HMFStagedValue *stagedLoggedInAccount; // ivar: _stagedLoggedInAccount
@property (readonly) Class superclass;
@property (readonly) BOOL targetSupportsAccounts; // ivar: _targetSupportsAccounts
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)remoteMessages;
-(id)accountInfoForAccount:(id)arg0 ;
-(id)accountInfoFromLastEvent;
-(id)eventSource;
-(id)eventTopicForAccountInfo;
-(id)initWithAccessory:(id)arg0 loggedInAccountData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 accessory:(id)arg1 loggedInAccount:(id)arg2 ;
-(id)initWithUUID:(id)arg0 accessory:(id)arg1 loggedInAccount:(id)arg2 accountStore:(id)arg3 targetSupportsAccounts:(BOOL)arg4 ;
-(id)logIdentifier;
-(void)_handleUpdateLoggedInAccountMessage:(id)arg0 ;
-(void)_postAccountInfoFromAccountStore;
-(void)_postUpdatedAccountInfo:(id)arg0 ;
-(void)_registerForUsernameUpdates;
-(void)_updateLoggedInAccount:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 eventStoreReadHandle:(id)arg2 eventForwarder:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccountUsernameUpdatedOnCurrentDevice:(id)arg0 ;
-(void)registerForMessages;
-(void)stageLoggedInAccount:(id)arg0 ;
-(void)stagedValue:(id)arg0 didExpireValue:(id)arg1 ;
-(void)updateFrameworkWithReason:(id)arg0 ;


@end


#endif