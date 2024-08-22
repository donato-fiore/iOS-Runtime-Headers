// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSESSIONSIGNIFICANTEVENT_H
#define HMDCAMERARECORDINGSESSIONSIGNIFICANTEVENT_H

@class HMFObject, NSUUID, NSDate, NSSet, NSData;
@protocol NSCopying, NSMutableCopying;



@interface HMDCameraRecordingSessionSignificantEvent : HMFObject <NSCopying, NSMutableCopying>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property NSUInteger confidenceLevel; // ivar: _confidenceLevel
@property (copy) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (copy) NSSet *faceClassifications; // ivar: _faceClassifications
@property (retain) NSData *faceCropData; // ivar: _faceCropData
@property (retain) NSData *heroFrameData; // ivar: _heroFrameData
@property NSUInteger reason; // ivar: _reason
@property (copy) NSUUID *sessionEntityUUID; // ivar: _sessionEntityUUID
@property CGFloat timeOffsetWithinClip; // ivar: _timeOffsetWithinClip


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif