// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGLOADBALANCERDECISION_H
#define HMDCAMERARECORDINGLOADBALANCERDECISION_H

@class HMFObject, NSUUID, NSDate;


#import "HMDCameraRecordingAnalysisNode.h"

@interface HMDCameraRecordingLoadBalancerDecision : HMFObject

@property (readonly) HMDCameraRecordingAnalysisNode *analysisNode; // ivar: _analysisNode
@property (readonly, copy) NSUUID *cameraUUID; // ivar: _cameraUUID
@property (readonly, copy) NSDate *decisionDate; // ivar: _decisionDate
@property (readonly, copy) NSUUID *deviceUUID;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSInteger numberOfAvailableDevices; // ivar: _numberOfAvailableDevices
@property (readonly) NSInteger remainingNumberOfJobSlots; // ivar: _remainingNumberOfJobSlots
@property (readonly) NSInteger totalNumberOfJobSlots; // ivar: _totalNumberOfJobSlots


-(id)attributeDescriptions;
-(id)initWithCameraUUID:(id)arg0 numberOfAvailableDevices:(NSInteger)arg1 totalNumberOfJobSlots:(NSInteger)arg2 remainingNumberOfJobSlots:(NSInteger)arg3 analysisNode:(id)arg4 decisionDate:(id)arg5 ;


@end


#endif