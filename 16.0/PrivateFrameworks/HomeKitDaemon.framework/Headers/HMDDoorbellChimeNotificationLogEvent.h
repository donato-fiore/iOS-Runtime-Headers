// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDOORBELLCHIMENOTIFICATIONLOGEVENT_H
#define HMDDOORBELLCHIMENOTIFICATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSError, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDDoorbellChimeNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (copy) NSError *coordinationError; // ivar: _coordinationError
@property NSUInteger coordinationLatency; // ivar: _coordinationLatency
@property NSUInteger coordinationMode; // ivar: _coordinationMode
@property BOOL coordinationPathTriggered; // ivar: _coordinationPathTriggered
@property NSUInteger coreUtilsDestinationCount; // ivar: _coreUtilsDestinationCount
@property NSUInteger coreUtilsLatency; // ivar: _coreUtilsLatency
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property NSUInteger numHomePodsWithDoorbellChimeEnabled; // ivar: _numHomePodsWithDoorbellChimeEnabled
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)init;


@end


#endif