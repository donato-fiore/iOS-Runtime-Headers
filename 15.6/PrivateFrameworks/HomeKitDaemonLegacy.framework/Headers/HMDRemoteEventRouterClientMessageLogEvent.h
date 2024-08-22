// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEEVENTROUTERCLIENTMESSAGELOGEVENT_H
#define HMDREMOTEEVENTROUTERCLIENTMESSAGELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDRemoteEventRouterClientMessageLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(BOOL)submitEventWithDurationInMilliseconds;
-(id)initWithMessageType:(NSInteger)arg0 ;


@end


#endif