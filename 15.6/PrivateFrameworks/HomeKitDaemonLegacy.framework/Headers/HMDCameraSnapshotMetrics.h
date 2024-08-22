// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTMETRICS_H
#define HMDCAMERASNAPSHOTMETRICS_H

@class HMFObject, NSError;


#import "HMDCameraMetricsSnapshotLogEvent.h"

@interface HMDCameraSnapshotMetrics : HMFObject

@property (readonly, nonatomic) HMDCameraMetricsSnapshotLogEvent *cameraSnapshotMetricsLogEvent; // ivar: _cameraSnapshotMetricsLogEvent
@property (retain, nonatomic) NSError *error; // ivar: _error


-(id)initWithSessionID:(id)arg0 cameraAccessory:(id)arg1 isLocal:(BOOL)arg2 snapshotForNotification:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif