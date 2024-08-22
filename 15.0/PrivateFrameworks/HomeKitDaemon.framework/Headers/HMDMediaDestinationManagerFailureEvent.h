// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIADESTINATIONMANAGERFAILUREEVENT_H
#define HMDMEDIADESTINATIONMANAGERFAILUREEVENT_H

@class HMMLogEvent, NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMediaDestinationManagerFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, copy) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, copy) NSNumber *failureCode; // ivar: _failureCode


-(id)attributeDescriptions;
-(id)eventName;
-(id)initWithFailureCode:(NSUInteger)arg0 error:(id)arg1 ;
-(id)serializedEvent;


@end


#endif