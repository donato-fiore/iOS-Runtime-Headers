// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAGGREGATEXPCMESSAGECOUNTERSLOGEVENT_H
#define HMDAGGREGATEXPCMESSAGECOUNTERSLOGEVENT_H

@class HMMLogEvent, NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAggregateXPCMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, nonatomic) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) NSString *peerInformation; // ivar: _peerInformation
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)aggregateXPCCountersLogEventWithType:(id)arg0 peerInformation:(id)arg1 messageName:(id)arg2 count:(id)arg3 ;
-(id)__initWithType:(id)arg0 peerInformation:(id)arg1 messageName:(id)arg2 count:(id)arg3 ;
-(id)eventName;
-(id)init;
-(id)serializedEvent;


@end


#endif