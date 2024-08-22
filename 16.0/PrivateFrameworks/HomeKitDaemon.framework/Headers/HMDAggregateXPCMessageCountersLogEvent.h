// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAGGREGATEXPCMESSAGECOUNTERSLOGEVENT_H
#define HMDAGGREGATEXPCMESSAGECOUNTERSLOGEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAggregateXPCMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) NSString *peerInformation; // ivar: _peerInformation
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(id)xpcAcceptedCountersLogEventWithPeerInformation:(id)arg0 messageName:(id)arg1 count:(id)arg2 ;
+(id)xpcFilteredCountersLogEventWithPeerInformation:(id)arg0 messageName:(id)arg1 count:(id)arg2 ;
+(id)xpcSentCountersLogEventWithPeerInformation:(id)arg0 messageName:(id)arg1 count:(id)arg2 ;
-(id)initWithEventName:(id)arg0 peerInformation:(id)arg1 messageName:(id)arg2 count:(id)arg3 ;


@end


#endif