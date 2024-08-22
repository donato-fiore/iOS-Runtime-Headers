// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOORDINATIONLOCALELECTIONMESHCONTROLLER_H
#define HMDCOORDINATIONLOCALELECTIONMESHCONTROLLER_H

@class COMeshController, NSString, NSArray;
@protocol HMDCoordinationAddOnImplDelegate, HMFLogging, HMDLocalElectionMeshController, HMDLocalElectionMeshControllerDelegate, HMDLocalElectionMeshNode;



@interface HMDCoordinationLocalElectionMeshController : COMeshController <HMDCoordinationAddOnImplDelegate, HMFLogging, HMDLocalElectionMeshController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDLocalElectionMeshControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isLeader;
@property (readonly) BOOL isProcessing;
@property (readonly) NSObject<HMDLocalElectionMeshNode> *leaderNode;
@property (readonly) NSArray *meshNodes;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 ;
-(id)logIdentifier;
-(id)meshNodeFor:(id)arg0 ;
-(void)_setupMessageRegistrations;
-(void)meshControllerDidElectLeader;
-(void)meshControllerDidStartElection;
-(void)meshControllerDidUpdatesNodes;
-(void)sendPingCommandToLeaderWithCompletion:(id)arg0 ;
-(void)sendPingNotificationToFollowers;
-(void)sendPingRequestToNode:(id)arg0 withCompletion:(id)arg1 ;
-(void)startMeshWithName:(id)arg0 ;
-(void)stop;


@end


#endif