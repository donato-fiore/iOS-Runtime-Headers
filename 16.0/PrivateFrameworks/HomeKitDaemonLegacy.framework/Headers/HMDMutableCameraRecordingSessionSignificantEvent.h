// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMUTABLECAMERARECORDINGSESSIONSIGNIFICANTEVENT_H
#define HMDMUTABLECAMERARECORDINGSESSIONSIGNIFICANTEVENT_H

@class NSDate, NSSet, NSData, NSUUID;


#import "HMDCameraRecordingSessionSignificantEvent.h"

@interface HMDMutableCameraRecordingSessionSignificantEvent : HMDCameraRecordingSessionSignificantEvent

@property NSUInteger confidenceLevel;
@property (copy) NSDate *dateOfOccurrence;
@property (copy) NSSet *faceClassifications;
@property (retain) NSData *faceCropData;
@property (retain) NSData *heroFrameData;
@property NSUInteger reason;
@property (copy) NSUUID *sessionEntityUUID;
@property CGFloat timeOffsetWithinClip;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif