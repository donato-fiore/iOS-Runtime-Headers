// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPERSONDATAMANAGER_H
#define HMDHOMEPERSONDATAMANAGER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDHomePersonManager.h"

@interface HMDHomePersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) HMDHomePersonManager *personManager; // ivar: _personManager
@property (copy) id *personManagerFactory; // ivar: _personManagerFactory
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 ;
-(id)logIdentifier;
-(id)updateSettingsModelWithSettings:(id)arg0 ;
-(void)configure;
-(void)configurePersonManager;
-(void)handleUpdateSettingsMessage:(id)arg0 ;
-(void)handleUpdatedSettingsModel:(id)arg0 previousSettingsModel:(id)arg1 message:(id)arg2 ;
-(void)removeCloudDataDueToHomeGraphObjectRemoval:(BOOL)arg0 ;
-(void)removeCloudDataDueToHomeRemoval;


@end


#endif