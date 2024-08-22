// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGLOADBALANCERDECISION_H
#define HMDCAMERARECORDINGLOADBALANCERDECISION_H

@class HMFObject, NSUUID, NSDate;


#import "HMDCameraRecordingAnalysisNode.h"

@interface HMDCameraRecordingLoadBalancerDecision : HMFObject

@property (readonly) HMDCameraRecordingAnalysisNode *analysisNode; // ivar: _analysisNode
@property (readonly) NSUUID *cameraUUID; // ivar: _cameraUUID
@property (readonly) NSDate *decisionDate; // ivar: _decisionDate
@property (readonly) NSUUID *deviceUUID;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly) int numberOfAvailableDevices; // ivar: _numberOfAvailableDevices


-(id)initWithCameraUUID:(id)arg0 numberOfAvailableDevices:(int)arg1 analysisNode:(id)arg2 decisionDate:(id)arg3 ;
-(id)shortDescription;


@end


#endif