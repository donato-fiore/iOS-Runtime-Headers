// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASTREAMMETRICS_H
#define HMDCAMERASTREAMMETRICS_H

@class HMFObject, NSError;


#import "HMDCameraMetricsStreamLogEvent.h"

@interface HMDCameraStreamMetrics : HMFObject

@property (readonly, nonatomic) HMDCameraMetricsStreamLogEvent *cameraStreamMetricsLogEvent; // ivar: _cameraStreamMetricsLogEvent
@property (retain, nonatomic) NSError *error; // ivar: _error


-(id)initWithSessionID:(id)arg0 cameraAccessory:(id)arg1 isLocal:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif