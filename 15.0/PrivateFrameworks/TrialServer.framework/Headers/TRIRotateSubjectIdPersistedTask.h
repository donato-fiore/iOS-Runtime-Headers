// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIROTATESUBJECTIDPERSISTEDTASK_H
#define TRIROTATESUBJECTIDPERSISTEDTASK_H

@class TRIPBMessage, NSString, TRIPBTimestamp;



@interface TRIRotateSubjectIdPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) BOOL hasForceUpdate;
@property (nonatomic) BOOL hasNextRotationTimestamp;
@property (retain, nonatomic) TRIPBTimestamp *nextRotationTimestamp;


+(id)descriptor;


@end


#endif