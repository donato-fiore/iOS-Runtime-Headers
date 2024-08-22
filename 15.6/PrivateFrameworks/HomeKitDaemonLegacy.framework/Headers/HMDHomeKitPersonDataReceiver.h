// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEKITPERSONDATARECEIVER_H
#define HMDHOMEKITPERSONDATARECEIVER_H

@class HMFObject, NSUUID, NSString, HMIHomePersonManager, HMFMessageDispatcher, HMIExternalPersonManager;
@protocol HMFLogging, HMFMessageReceiver, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDPersonDataReceiver, HMDPersonDataSource, OS_dispatch_queue;


#import "HMDActiveXPCClientConnectionsPeriodicTimer.h"

@interface HMDHomeKitPersonDataReceiver : HMFObject <HMFLogging, HMFMessageReceiver, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDPersonDataReceiver>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer; // ivar: _clientConnectionsTimer
@property (weak) NSObject<HMDPersonDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *fetchServerFactory; // ivar: _fetchServerFactory
@property (readonly) NSUInteger hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithUUID:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithUUID:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 clientConnectionsTimer:(id)arg3 ;
-(id)logIdentifier;
-(void)_notifySubscribersOfMessageWithName:(id)arg0 payload:(id)arg1 ;
-(void)clientConnectionsTimerDidFire:(id)arg0 ;
-(void)configureWithDataSource:(id)arg0 home:(id)arg1 ;
-(void)handleAddOrUpdateFaceCropsMessage:(id)arg0 ;
-(void)handleAddOrUpdateFaceprintsMessage:(id)arg0 ;
-(void)handleAddOrUpdatePersonsMessage:(id)arg0 ;
-(void)handleAssociateFaceCropsMessage:(id)arg0 ;
-(void)handleDisassociateFaceCropsMessage:(id)arg0 ;
-(void)handleFetchFaceCropsMessage:(id)arg0 ;
-(void)handleFetchFaceprintsMessage:(id)arg0 ;
-(void)handleFetchPersonFaceCropsMessage:(id)arg0 ;
-(void)handleFetchPersonsMessage:(id)arg0 ;
-(void)handleFetchUnassociatedFaceCropsMessage:(id)arg0 ;
-(void)handlePerformCloudPullMessage:(id)arg0 ;
-(void)handleRemoveFaceCropsMessage:(id)arg0 ;
-(void)handleRemoveFaceprintsMessage:(id)arg0 ;
-(void)handleRemovePersonsMessage:(id)arg0 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleSubscribeMessage:(id)arg0 ;
-(void)handleUnsubscribeMessage:(id)arg0 ;
-(void)handleUpdatedFaceprint:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedPerson:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg0 mirrorOutputFuture:(id)arg1 ;


@end


#endif