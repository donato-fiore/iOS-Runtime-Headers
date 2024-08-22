// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPERSONRESIDENTSYNCMANAGER_H
#define HMDPERSONRESIDENTSYNCMANAGER_H

@class HMFObject, NSUUID, NSString, HMFMessageDispatcher;
@protocol HMFLogging, HMFMessageReceiver, HMDPersonDataSource, OS_dispatch_queue;


#import "HMDResidentSyncManager.h"

@interface HMDPersonResidentSyncManager : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (weak) NSObject<HMDPersonDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMDResidentSyncManager *residentSyncManager; // ivar: _residentSyncManager
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)addOrUpdatePersons:(id)arg0 ;
-(id)initWithUUID:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 residentSyncManager:(id)arg3 ;
-(id)logIdentifier;
-(id)removeAllAssociatedData;
-(id)removePersonsWithUUIDs:(id)arg0 ;
-(void)configureWithHome:(id)arg0 dataSource:(id)arg1 ;
-(void)handleAddOrUpdatePersonsMessage:(id)arg0 ;
-(void)handleRemoveAllAssociatedDataMessage:(id)arg0 ;
-(void)handleRemovePersonsMessage:(id)arg0 ;


@end


#endif