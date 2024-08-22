// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDSHARETRUSTMANAGERFAILURELOGEVENT_H
#define HMDCLOUDSHARETRUSTMANAGERFAILURELOGEVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDCloudShareTrustManagerLogEvent.h"

@interface HMDCloudShareTrustManagerFailureLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, copy) NSNumber *trustManagerErrorCode; // ivar: _trustManagerErrorCode


-(id)initWithTrustManagerErrorCode:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif