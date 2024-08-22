// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGUPLOADOPERATIONEVENT_H
#define HMDCAMERARECORDINGUPLOADOPERATIONEVENT_H

@class HMMLogEvent, NSUUID, NSString;
@protocol HMDAWDLogEvent;



@interface HMDCameraRecordingUploadOperationEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSUUID *clipModelID; // ivar: _clipModelID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didCausePreviousClipToFinalizeDueToDurationLimit; // ivar: _didCausePreviousClipToFinalizeDueToDurationLimit
@property (readonly) NSUInteger hash;
@property NSUInteger operationType; // ivar: _operationType
@property NSUInteger retryCount; // ivar: _retryCount
@property CGFloat runTime; // ivar: _runTime
@property (readonly) NSUInteger runTimeInMilliseconds;
@property (readonly) NSUInteger startTimestamp; // ivar: _startTimestamp
@property (readonly) Class superclass;
@property CGFloat totalClipDuration; // ivar: _totalClipDuration
@property (readonly) NSUInteger totalClipDurationMilliseconds;


+(int)awdOperationEnumFromCameraClipOperationType:(NSUInteger)arg0 ;
-(id)attributeDescriptions;
-(id)initWithClipModelID:(id)arg0 operation:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif