// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVENTROUTERSENDREMOTEEVENTLOGEVENT_H
#define HMDEVENTROUTERSENDREMOTEEVENTLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDEventRouterSendRemoteEventLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger destinationDeviceType; // ivar: _destinationDeviceType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCachedEvent; // ivar: _isCachedEvent
@property (readonly, nonatomic) NSUInteger responseMessageType; // ivar: _responseMessageType
@property (readonly, nonatomic) NSUInteger sourceDeviceType; // ivar: _sourceDeviceType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


-(id)initWithTopic:(id)arg0 sourceDeviceType:(NSUInteger)arg1 destinationDeviceType:(NSUInteger)arg2 isCachedEvent:(BOOL)arg3 responseMessageType:(NSUInteger)arg4 ;


@end


#endif