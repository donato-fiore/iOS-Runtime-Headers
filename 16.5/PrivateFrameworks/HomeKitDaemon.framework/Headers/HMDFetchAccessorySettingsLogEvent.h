// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDFETCHACCESSORYSETTINGSLOGEVENT_H
#define HMDFETCHACCESSORYSETTINGSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSArray;
@protocol HMMCoreAnalyticsLogging;



@interface HMDFetchAccessorySettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *failedKeyPaths; // ivar: _failedKeyPaths
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *keyPaths; // ivar: _keyPaths
@property (readonly, copy, nonatomic) NSString *requestingClientName; // ivar: _requestingClientName
@property (nonatomic) NSUInteger responseTimeStamp; // ivar: _responseTimeStamp
@property (readonly, nonatomic) NSUInteger startTimeStamp; // ivar: _startTimeStamp
@property (copy, nonatomic) NSArray *succeededKeyPaths; // ivar: _succeededKeyPaths
@property (readonly) Class superclass;


-(id)initWithKeyPaths:(id)arg0 startTime:(NSUInteger)arg1 requestingClientName:(id)arg2 error:(id)arg3 ;


@end


#endif