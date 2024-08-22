// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGINANISETTEDATAHANDLER_H
#define HMDREMOTELOGINANISETTEDATAHANDLER_H

@class HMFObject, NSString, NSSet, NSUUID, HMFMessageDispatcher, AKAnisetteProvisioningController;
@protocol HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDAppleMediaAccessory.h"

@interface HMDRemoteLoginAnisetteDataHandler : HMFObject <HMFLogging, HMDHomeMessageReceiver>



@property (readonly, weak) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, nonatomic) AKAnisetteProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(id)initWithUUID:(id)arg0 accessory:(id)arg1 ;
-(id)logIdentifier;
-(void)_handleEraseAnisetteDataRequestMessage:(id)arg0 ;
-(void)_handleFetchAnisetteDataRequestMessage:(id)arg0 ;
-(void)_handleLegacyAnisetteDataRequestMessage:(id)arg0 ;
-(void)_handleProvisionAnisetteDataRequestMessage:(id)arg0 ;
-(void)_handleSyncAnisetteDataRequestMessage:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)registerForMessages;


@end


#endif