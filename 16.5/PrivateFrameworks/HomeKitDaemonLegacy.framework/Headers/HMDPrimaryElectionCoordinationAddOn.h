// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRIMARYELECTIONCOORDINATIONADDON_H
#define HMDPRIMARYELECTIONCOORDINATIONADDON_H

@class HMFTimer, NSString, HMFFuture, NSSet, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMDLocalElectionMeshControllerDelegate, HMFTimerDelegate, HMDPrimaryResidentElectionAddOn, HMDLocalElectionMeshController, OS_dispatch_queue, HMFAsyncContext, HMDResidentDeviceManagerContext, HMDPrimaryElectionCoordinationAddOnDataSource, HMDPrimaryResidentElectionAddOnDelegate, HMDLocalElectionMeshNode;

#import <Foundation/Foundation.h>

#import "HMDPrimaryElectionFindPrimaryMeshOperation.h"
#import "HMDRemoteDeviceMonitor.h"
#import "__HMDPrimaryElectionCandidate.h"

@interface HMDPrimaryElectionCoordinationAddOn : NSObject <HMFLogging, HMFMessageReceiver, HMDLocalElectionMeshControllerDelegate, HMFTimerDelegate, HMDPrimaryResidentElectionAddOn>

 {
    id<HMDLocalElectionMeshController> *_meshController;
    NSObject<OS_dispatch_queue> *_queue;
    id<HMFAsyncContext> *_asyncContext;
}


@property (readonly, weak) NSObject<HMDResidentDeviceManagerContext> *context; // ivar: _context
@property (readonly) NSObject<HMDPrimaryElectionCoordinationAddOnDataSource> *dataSource; // ivar: _dataSource
@property (retain) HMFTimer *debounceTimer; // ivar: _debounceTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDPrimaryResidentElectionAddOnDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL electionGotAborted; // ivar: _electionGotAborted
@property (retain) HMFFuture *findPrimaryMeshFuture; // ivar: _findPrimaryMeshFuture
@property (retain) HMDPrimaryElectionFindPrimaryMeshOperation *findPrimaryMeshOperation; // ivar: _findPrimaryMeshOperation
@property (readonly) NSUInteger hash;
@property NSInteger inPessimisticSecondaryMesh; // ivar: _inPessimisticSecondaryMesh
@property (retain) NSSet *lastEvaluatedMeshNodes; // ivar: _lastEvaluatedMeshNodes
@property (retain) NSObject<HMDLocalElectionMeshNode> *lastKnownLeaderNode; // ivar: _lastKnownLeaderNode
@property (retain) HMFTimer *meshLeaderToPrimaryResidentPingResponseTimer; // ivar: _meshLeaderToPrimaryResidentPingResponseTimer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSUInteger messageTransportRestriction;
@property BOOL notifyNodesChanged; // ivar: _notifyNodesChanged
@property (retain) HMFTimer *pingTimer; // ivar: _pingTimer
@property (readonly) HMDRemoteDeviceMonitor *remoteDeviceMonitor; // ivar: _remoteDeviceMonitor
@property NSUInteger residentCountDuringLastElection; // ivar: _residentCountDuringLastElection
@property (retain) HMFTimer *secondaryMeshTimer; // ivar: _secondaryMeshTimer
@property (retain) __HMDPrimaryElectionCandidate *selectedPrimaryResidentCandidate; // ivar: _selectedPrimaryResidentCandidate
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)residentIsPartOfTheCurrentMesh:(id)arg0 ;
-(id)dumpState;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 meshController:(id)arg1 dataSource:(id)arg2 ;
-(id)logIdentifier;
-(id)primarySortComparatorForCurrentPrimary:(SEL)arg0 ;
-(void)_findPrimaryMeshWithContext:(id)arg0 otherResidents:(id)arg1 ;
-(void)_selectPrimaryResidentWithReason:(NSUInteger)arg0 ;
-(void)handleCurrentPrimaryNotification:(id)arg0 ;
-(void)handleCurrentPrimaryRequest:(id)arg0 ;
-(void)handleDeviceCapabilitiesRequest:(id)arg0 ;
-(void)handleMeshInformationRequest:(id)arg0 ;
-(void)meshController:(id)arg0 didReceivePingFromLeaderWithPrimaryResidentUUID:(id)arg1 ;
-(void)meshControllerDidElectLeader:(id)arg0 ;
-(void)meshControllerDidStartElection:(id)arg0 ;
-(void)meshControllerDidUpdatesNodes:(id)arg0 ;
-(void)performElection;
-(void)performElectionWithReason:(NSUInteger)arg0 ;
-(void)primaryResidentChanged:(id)arg0 previousResidentDevice:(id)arg1 ;
-(void)registerForMessages;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif