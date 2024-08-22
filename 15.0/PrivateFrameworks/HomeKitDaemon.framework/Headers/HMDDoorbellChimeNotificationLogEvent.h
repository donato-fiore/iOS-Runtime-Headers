// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDOORBELLCHIMENOTIFICATIONLOGEVENT_H
#define HMDDOORBELLCHIMENOTIFICATIONLOGEVENT_H

@class HMMLogEvent, NSError;



@interface HMDDoorbellChimeNotificationLogEvent : HMMLogEvent

@property (copy) NSError *coordinationError; // ivar: _coordinationError
@property NSUInteger coordinationLatency; // ivar: _coordinationLatency
@property NSUInteger coordinationMode; // ivar: _coordinationMode
@property BOOL coordinationPathTriggered; // ivar: _coordinationPathTriggered
@property NSUInteger coreUtilsDestinationCount; // ivar: _coreUtilsDestinationCount
@property NSUInteger coreUtilsLatency; // ivar: _coreUtilsLatency
@property NSUInteger numHomePodsWithDoorbellChimeEnabled; // ivar: _numHomePodsWithDoorbellChimeEnabled


-(id)eventName;
-(id)init;
-(id)serializedEvent;


@end


#endif