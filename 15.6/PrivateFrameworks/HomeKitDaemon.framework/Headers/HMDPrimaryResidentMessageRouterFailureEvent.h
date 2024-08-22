// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPRIMARYRESIDENTMESSAGEROUTERFAILUREEVENT_H
#define HMDPRIMARYRESIDENTMESSAGEROUTERFAILUREEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) NSNumber *failureType; // ivar: _failureType
@property (readonly, copy) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)attributeDescriptions;
-(id)initWithMessageName:(id)arg0 failureType:(NSInteger)arg1 ;


@end


#endif