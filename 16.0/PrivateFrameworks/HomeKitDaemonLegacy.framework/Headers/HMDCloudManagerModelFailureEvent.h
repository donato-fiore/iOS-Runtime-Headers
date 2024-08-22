// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDMANAGERMODELFAILUREEVENT_H
#define HMDCLOUDMANAGERMODELFAILUREEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCloudManagerModelFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, copy) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) NSNumber *failureCode; // ivar: _failureCode
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)attributeDescriptions;
-(id)initWithModel:(id)arg0 failureCode:(NSUInteger)arg1 error:(id)arg2 ;


@end


#endif