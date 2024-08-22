// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERSERVERMESSAGELOGEVENT_H
#define HMDREMOTEEVENTROUTERSERVERMESSAGELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDRemoteEventRouterServerMessageLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) NSInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(BOOL)submitEventWithDurationInMilliseconds;
-(id)initWithMessageType:(NSInteger)arg0 ;


@end


#endif