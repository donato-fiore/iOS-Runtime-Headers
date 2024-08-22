// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property NSUInteger coreUtilsDestinationCount; // ivar: _coreUtilsDestinationCount
@property NSUInteger coreUtilsLatency; // ivar: _coreUtilsLatency
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger numHomePodsWithDoorbellChimeEnabled; // ivar: _numHomePodsWithDoorbellChimeEnabled
@property (readonly) Class superclass;


-(id)init;


@end


#endif