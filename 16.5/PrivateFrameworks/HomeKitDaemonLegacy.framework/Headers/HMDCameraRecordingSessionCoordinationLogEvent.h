// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGSESSIONCOORDINATIONLOGEVENT_H
#define HMDCAMERARECORDINGSESSIONCOORDINATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCameraRecordingSessionCoordinationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger retryCount; // ivar: _retryCount
@property (readonly) Class superclass;
@property (getter=isUsingRemoteDeviceAnalysisNode) BOOL usingRemoteDeviceAnalysisNode; // ivar: _usingRemoteDeviceAnalysisNode




@end


#endif