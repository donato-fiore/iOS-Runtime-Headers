// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPRIMARYRESIDENTMESSAGEROUTERFAILUREEVENT_H
#define HMDPRIMARYRESIDENTMESSAGEROUTERFAILUREEVENT_H

@class HMMLogEvent, NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *failureType; // ivar: _failureType
@property (readonly, copy) NSString *messageName; // ivar: _messageName


-(id)attributeDescriptions;
-(id)eventName;
-(id)initWithMessageName:(id)arg0 failureType:(NSInteger)arg1 ;
-(id)serializedEvent;


@end


#endif