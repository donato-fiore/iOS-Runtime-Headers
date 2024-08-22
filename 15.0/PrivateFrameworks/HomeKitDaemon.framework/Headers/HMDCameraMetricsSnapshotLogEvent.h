// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERAMETRICSSNAPSHOTLOGEVENT_H
#define HMDCAMERAMETRICSSNAPSHOTLOGEVENT_H

@class NSString, NSNumber;
@protocol HMDAWDLogEvent;


#import "HMDCameraMetricsLogEvent.h"

@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *referenceTimestamp; // ivar: _referenceTimestamp
@property (readonly, nonatomic) BOOL snapshotForNotification; // ivar: _snapshotForNotification
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 cameraAccessory:(id)arg1 isLocal:(BOOL)arg2 snapshotForNotification:(BOOL)arg3 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;
-(unsigned int)timeSinceReference:(id)arg0 ;
-(void)addIDSSession:(id)arg0 ;
-(void)addIDSTransfer:(id)arg0 ;
-(void)addSnapshotMessaging:(id)arg0 ;


@end


#endif