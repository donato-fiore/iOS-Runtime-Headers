// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTMESH_H
#define HMDRESIDENTMESH_H

@class HMFObject, NSString, HMFTimer, NSMutableDictionary, NSUUID, NSSet, NSMutableArray;
@protocol HMFLogging, HMFMessageReceiver, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDHomeManager.h"
#import "HMDMessageDispatcher.h"
#import "HMDResidentMeshMeshStorage.h"

@interface HMDResidentMesh : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate>



@property NSUInteger broadcastRate; // ivar: _broadcastRate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFTimer *devicesChangedTimer; // ivar: _devicesChangedTimer
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMFTimer *linkQualityMonitorTimer; // ivar: _linkQualityMonitorTimer
@property (readonly, nonatomic) NSMutableDictionary *loadMetrics; // ivar: _loadMetrics
@property (weak, nonatomic) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) NSSet *primaryResidentForHomes; // ivar: _primaryResidentForHomes
@property (retain, nonatomic) NSMutableArray *reachableAccessories; // ivar: _reachableAccessories
@property (weak, nonatomic) HMDResidentMeshMeshStorage *resident; // ivar: _resident
@property (retain, nonatomic) NSMutableArray *residents; // ivar: _residents
@property (nonatomic) NSInteger startupTickCount; // ivar: _startupTickCount
@property (readonly, nonatomic) HMFTimer *startupTimer; // ivar: _startupTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_checkReachabilityWithTimerActivation:(BOOL)arg0 ;
-(id)_addMeshStorageResidentDevice:(id)arg0 ;
-(id)_addResidentStorageResidentDevice:(id)arg0 ;
-(id)_dumpState;
-(id)_meshStorageForDeviceIdentifier:(id)arg0 ;
-(id)_meshStorageForResidentDevice:(id)arg0 ;
-(id)_residentMapForAccessories:(id)arg0 ;
-(id)_residentStorageForResidentDevice:(id)arg0 ;
-(id)balancedResidentMapForAccessories:(id)arg0 ;
-(id)bestResidentDeviceForAccessory:(id)arg0 ;
-(id)cameraRecordingAnalysisNodesForCameraAccessory:(id)arg0 ;
-(id)deviceForAccessory:(id)arg0 residentOrder:(NSUInteger)arg1 reachableResidents:(*NSUInteger)arg2 ;
-(id)dumpState;
-(id)initWithHomeManager:(id)arg0 residentEnabled:(BOOL)arg1 ;
-(id)messageDestination;
-(void)__accessoryDidUpdateSuspendedState:(id)arg0 ;
-(void)__accessoryIsNotReachable:(id)arg0 ;
-(void)__accessoryIsReachable:(id)arg0 ;
-(void)__deviceIsNotReachable:(id)arg0 ;
-(void)__deviceIsReachable:(id)arg0 ;
-(void)__deviceResidentChanged:(id)arg0 ;
-(void)__rebuildResidents:(id)arg0 ;
-(void)__residentDeviceAddedOrUpdatedNotification:(id)arg0 ;
-(void)__residentDeviceRemovedNotification:(id)arg0 ;
-(void)_addConnectivityFromDeviceToAccessory:(id)arg0 activateTimer:(BOOL)arg1 ;
-(void)_buildResidentsWithElection:(id)arg0 device:(id)arg1 ;
-(void)_deviceIsNotReachable:(id)arg0 ;
-(void)_dumpDebug;
-(void)_flushWorkQueue;
-(void)_handleAddUpdateOrReachabilityChangeForDevice:(id)arg0 ;
-(void)_handleMeshUpdateMessage:(id)arg0 ;
-(void)_handleMeshUpdateRequestMessage:(id)arg0 ;
-(void)_removeConnectivityFromDeviceToAccessory:(id)arg0 activateTimer:(BOOL)arg1 ;
-(void)_sendMessage:(id)arg0 payload:(id)arg1 target:(id)arg2 force:(BOOL)arg3 responseHandler:(id)arg4 ;
-(void)_updateAccessoryLinkQuality;
-(void)dealloc;
-(void)dumpDebug;
-(void)setMetricForCurrentDevice:(id)arg0 withValue:(id)arg1 isUrgent:(BOOL)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif