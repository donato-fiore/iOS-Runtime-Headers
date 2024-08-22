// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGCLIPNOTIFICATIONEVENT_H
#define HMDCAMERARECORDINGCLIPNOTIFICATIONEVENT_H

@class NSString;
@protocol HMDAWDLogEvent;


#import "HMDCameraRecordingLogEvent.h"

@interface HMDCameraRecordingClipNotificationEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger recordingEventTriggers; // ivar: _recordingEventTriggers
@property (readonly) Class superclass;


-(id)attributeDescriptions;
-(id)initWithSessionID:(id)arg0 cameraID:(id)arg1 sequenceNumber:(NSUInteger)arg2 recordingEventTriggers:(NSUInteger)arg3 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif