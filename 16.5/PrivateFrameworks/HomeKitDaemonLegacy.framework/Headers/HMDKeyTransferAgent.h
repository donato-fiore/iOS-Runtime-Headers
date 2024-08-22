// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDKEYTRANSFERAGENT_H
#define HMDKEYTRANSFERAGENT_H

@class HMFObject, NSString, HMFMessageDestination, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy) HMFMessageDestination *messageDestination;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) NSString *progressState; // ivar: _progressState
@property (readonly) NSUInteger residentProvisioningStatus; // ivar: _residentProvisioningStatus
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 ;
-(void)beginPairingWithCompletionHandler:(id)arg0 ;
-(void)resetConfig;


@end


#endif