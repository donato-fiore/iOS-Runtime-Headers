// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMESSAGEHANDLERFAILUREMETRICEVENT_H
#define HMDMESSAGEHANDLERFAILUREMETRICEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMessageHandlerFailureMetricEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *messageName; // ivar: _messageName
@property (readonly, copy) NSString *type; // ivar: _type


-(id)eventName;
-(id)initWithFailureType:(NSUInteger)arg0 messageName:(id)arg1 ;
-(id)serializedEvent;


@end


#endif