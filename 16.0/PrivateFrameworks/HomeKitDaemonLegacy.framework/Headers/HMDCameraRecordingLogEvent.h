// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGLOGEVENT_H
#define HMDCAMERARECORDINGLOGEVENT_H

@class HMMLogEvent, NSUUID;



@interface HMDCameraRecordingLogEvent : HMMLogEvent

@property (readonly, copy) NSUUID *cameraID; // ivar: _cameraID
@property (readonly) NSUInteger endTimestamp;
@property (readonly, copy) NSUUID *ephemeralCameraID;
@property NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (readonly, copy) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) NSUInteger startTimestamp;


-(id)attributeDescriptions;
-(id)initWithSessionID:(id)arg0 cameraID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;


@end


#endif