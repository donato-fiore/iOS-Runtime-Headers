// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTELOGINHANDLER_H
#define HMDREMOTELOGINHANDLER_H

@class HMFObject, NSString, ACAccount, NSSet, NSUUID, HMFMessageDispatcher;
@protocol HMDHomeMessageReceiver, HMFLogging, NSSecureCoding, OS_dispatch_queue;


#import "HMDAppleMediaAccessory.h"
#import "HMDRemoteLoginAnisetteDataHandler.h"
#import "HMDRemoteLoginInitiator.h"
#import "HMDRemoteLoginReceiver.h"

@interface HMDRemoteLoginHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, NSSecureCoding>



@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMDRemoteLoginAnisetteDataHandler *anisetteDataHandler; // ivar: _anisetteDataHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDRemoteLoginInitiator *initiator; // ivar: _initiator
@property (retain, nonatomic) ACAccount *loggedInAccount; // ivar: _loggedInAccount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, nonatomic) HMDRemoteLoginReceiver *receiver; // ivar: _receiver
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)remoteMessages;
-(id)initWithAccessory:(id)arg0 loggedInAccountData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)__handleUpdateLoggedInAccount:(id)arg0 ;
-(void)_handleRemoteLoginAccount:(id)arg0 message:(id)arg1 ;
-(void)_initialize;
-(void)_registerForUsernameUpdates;
-(void)_sendAccountUpdateNotification:(id)arg0 ;
-(void)_updateLoggedInAccount:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccountUsernameUpdatedOnCurrentDevice:(id)arg0 ;
-(void)registerForMessages;


@end


#endif