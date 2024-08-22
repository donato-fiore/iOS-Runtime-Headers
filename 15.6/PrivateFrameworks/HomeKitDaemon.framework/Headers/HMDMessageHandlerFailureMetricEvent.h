// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMESSAGEHANDLERFAILUREMETRICEVENT_H
#define HMDMESSAGEHANDLERFAILUREMETRICEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMessageHandlerFailureMetricEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, copy) NSString *type; // ivar: _type


-(id)initWithFailureType:(NSUInteger)arg0 messageName:(id)arg1 ;


@end


#endif