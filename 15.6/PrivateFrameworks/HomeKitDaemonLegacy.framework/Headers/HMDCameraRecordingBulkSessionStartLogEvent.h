// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGBULKSESSIONSTARTLOGEVENT_H
#define HMDCAMERARECORDINGBULKSESSIONSTARTLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCameraRecordingBulkSessionStartLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithAccessoryIdentifier:(id)arg0 ;


@end


#endif