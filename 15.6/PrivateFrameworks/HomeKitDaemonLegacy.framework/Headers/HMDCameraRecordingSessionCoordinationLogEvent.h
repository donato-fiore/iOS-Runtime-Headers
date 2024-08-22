// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSESSIONCOORDINATIONLOGEVENT_H
#define HMDCAMERARECORDINGSESSIONCOORDINATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCameraRecordingSessionCoordinationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property NSUInteger retryCount; // ivar: _retryCount
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (getter=isUsingRemoteDeviceAnalysisNode) BOOL usingRemoteDeviceAnalysisNode; // ivar: _usingRemoteDeviceAnalysisNode




@end


#endif