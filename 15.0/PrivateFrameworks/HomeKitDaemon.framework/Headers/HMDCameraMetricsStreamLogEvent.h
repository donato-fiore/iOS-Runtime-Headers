// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERAMETRICSSTREAMLOGEVENT_H
#define HMDCAMERAMETRICSSTREAMLOGEVENT_H

@class NSString, NSNumber;
@protocol HMDAWDLogEvent;


#import "HMDCameraMetricsLogEvent.h"

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *referenceTimestamp; // ivar: _referenceTimestamp
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 cameraAccessory:(id)arg1 isLocal:(BOOL)arg2 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;
-(unsigned int)timeSinceReference:(id)arg0 ;
-(void)addIDSConnectionSetup:(id)arg0 ;
-(void)addIDSSession:(id)arg0 ;
-(void)addInitialConfiguration:(id)arg0 ;
-(void)addReconfiguration:(id)arg0 ;
-(void)addStreamMessaging:(id)arg0 ;


@end


#endif