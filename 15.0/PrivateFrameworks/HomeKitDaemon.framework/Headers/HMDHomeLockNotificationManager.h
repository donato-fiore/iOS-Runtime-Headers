// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMELOCKNOTIFICATIONMANAGER_H
#define HMDHOMELOCKNOTIFICATIONMANAGER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, HMFLogging, HMDHomeLockNotificationManagerDataSource, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDHomeLockNotificationManager : HMFObject <HMFMessageReceiver, HMFLogging>



@property (readonly) NSObject<HMDHomeLockNotificationManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasReachablePrimaryResidentSupportingLockNotificationContext;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)shouldResolveNotificationContextForCharacteristic:(id)arg0 ;
-(id)contextResolutionResultFromAccessCode:(id)arg0 ;
-(id)contextResolutionResultFromHAPContextId:(id)arg0 ;
-(id)contextResolutionResultFromNFCContextId:(id)arg0 ;
-(id)displayNameForNotificationContextResolutionResult:(id)arg0 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 dataSource:(id)arg2 ;
-(id)logIdentifier;
-(void)_resolveKeypadContextIdentifier:(id)arg0 accessoryUUID:(id)arg1 completion:(id)arg2 ;
-(void)_sendResolveLockNotificationContextIdentifierMessage:(id)arg0 accessoryUUID:(id)arg1 withCompletion:(id)arg2 ;
-(void)configureWithHome:(id)arg0 ;
-(void)handleResolveNotificationContextIdentifierMessage:(id)arg0 ;
-(void)resolveEncodedCharacteristicNotificationContext:(id)arg0 accessoryUUID:(id)arg1 completion:(id)arg2 ;
-(void)resolveKeypadContextIdentifier:(id)arg0 accessoryUUID:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif