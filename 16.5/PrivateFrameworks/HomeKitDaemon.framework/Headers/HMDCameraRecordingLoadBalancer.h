// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGLOADBALANCER_H
#define HMDCAMERARECORDINGLOADBALANCER_H

@class HMFObject, NSString, NSMutableDictionary, HMISystemResourceUsageMonitor;
@protocol HMFLogging, HMISystemResourceUsageMonitorDelegate;


#import "HMDHomeManager.h"

@interface HMDCameraRecordingLoadBalancer : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSMutableDictionary *decisionsByCameraUUIDByDeviceUUID; // ivar: _decisionsByCameraUUIDByDeviceUUID
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) NSMutableDictionary *lastDecisionByCameraUUID; // ivar: _lastDecisionByCameraUUID
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString; // ivar: _readyToRecordByCameraUUIDString
@property (readonly) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString; // ivar: _recordingSessionSummariesByCameraUUIDString
@property (readonly) Class superclass;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor; // ivar: _systemResourceUsageMonitor
@property NSUInteger totalNumberOfStreams; // ivar: _totalNumberOfStreams


+(id)logCategory;
-(BOOL)isReadyToRecordForCameraWithUUID:(id)arg0 ;
-(NSUInteger)_jobSlotsWithSystemResourceUsageLevel:(NSInteger)arg0 ;
-(NSUInteger)_partialJobSlotsWithSystemResourceUsageLevel:(NSInteger)arg0 ;
-(id)_loadBalancingDecisionForCamera:(id)arg0 deviceFilter:(id)arg1 ;
-(id)_loadBalancingDescriptionFromSortedNodes:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 resourceUsageMonitor:(id)arg1 ;
-(id)loadBalancingDecisionForCamera:(id)arg0 deviceFilter:(id)arg1 ;
-(void)_updateActiveRecordingSessionsMetric;
-(void)_updateReadyToRecordMetric;
-(void)handleRecordingSessionForwardingFailureForDecision:(id)arg0 ;
-(void)handleRecordingSessionForwardingSuccessForDecision:(id)arg0 ;
-(void)handleResidentMeshInitialized:(id)arg0 ;
-(void)recordingDidEndForCameraWithUUID:(id)arg0 ;
-(void)recordingDidStartForCameraWithUUID:(id)arg0 ;
-(void)removeDataForCameraWithUUID:(id)arg0 ;
-(void)setReadyToRecord:(BOOL)arg0 forCameraWithUUID:(id)arg1 ;
-(void)start;
-(void)systemResourceUsageDidChangeTo:(NSInteger)arg0 ;


@end


#endif