// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDMANAGERMODELFAILUREEVENT_H
#define HMDCLOUDMANAGERMODELFAILUREEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCloudManagerModelFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, copy) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, copy) NSNumber *failureCode; // ivar: _failureCode
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *model; // ivar: _model
@property (readonly) Class superclass;


-(id)attributeDescriptions;
-(id)initWithModel:(id)arg0 failureCode:(NSUInteger)arg1 error:(id)arg2 ;


@end


#endif