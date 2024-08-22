// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLEGACYPRIMARYELECTIONLOGEVENT_H
#define HMDLEGACYPRIMARYELECTIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDLegacyPrimaryElectionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property NSUInteger availableResidentCount; // ivar: _availableResidentCount
@property (copy) NSString *criteria; // ivar: _criteria
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (copy) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSDictionary *serializedEvent;




@end


#endif