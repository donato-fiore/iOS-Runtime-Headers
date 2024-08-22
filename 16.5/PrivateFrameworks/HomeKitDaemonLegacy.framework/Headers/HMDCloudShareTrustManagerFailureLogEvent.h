// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDSHARETRUSTMANAGERFAILURELOGEVENT_H
#define HMDCLOUDSHARETRUSTMANAGERFAILURELOGEVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDCloudShareTrustManagerLogEvent.h"

@interface HMDCloudShareTrustManagerFailureLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *trustManagerErrorCode; // ivar: _trustManagerErrorCode


-(id)initWithTrustManagerErrorCode:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif