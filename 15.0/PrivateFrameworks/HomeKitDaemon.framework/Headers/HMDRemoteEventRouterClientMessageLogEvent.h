// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERCLIENTMESSAGELOGEVENT_H
#define HMDREMOTEEVENTROUTERCLIENTMESSAGELOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDRemoteEventRouterClientMessageLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSInteger messageType; // ivar: _messageType


+(BOOL)submitEventWithDurationInMilliseconds;
-(id)eventName;
-(id)initWithMessageType:(NSInteger)arg0 ;
-(id)serializedEvent;


@end


#endif