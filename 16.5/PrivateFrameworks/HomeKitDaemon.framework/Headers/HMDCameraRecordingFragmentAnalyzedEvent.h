// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGFRAGMENTANALYZEDEVENT_H
#define HMDCAMERARECORDINGFRAGMENTANALYZEDEVENT_H

@class NSUUID, NSString;
@protocol HMDAWDLogEvent;


#import "HMDCameraRecordingLogEvent.h"

@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent>



@property NSInteger analysisResultCode; // ivar: _analysisResultCode
@property (retain) NSUUID *clipModelID; // ivar: _clipModelID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property int recordingReason; // ivar: _recordingReason
@property (readonly) Class superclass;


-(id)attributeDescriptions;
-(id)initWithSessionID:(id)arg0 cameraID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif