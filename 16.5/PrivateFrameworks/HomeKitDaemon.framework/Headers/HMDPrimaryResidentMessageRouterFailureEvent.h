// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRIMARYRESIDENTMESSAGEROUTERFAILUREEVENT_H
#define HMDPRIMARYRESIDENTMESSAGEROUTERFAILUREEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *failureType; // ivar: _failureType
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *messageName; // ivar: _messageName
@property (readonly) Class superclass;


-(id)attributeDescriptions;
-(id)initWithMessageName:(id)arg0 failureType:(NSInteger)arg1 ;


@end


#endif