// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDSHARETRUSTMANAGERFAILURELOGEVENT_H
#define HMDCLOUDSHARETRUSTMANAGERFAILURELOGEVENT_H

@class NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDCloudShareTrustManagerLogEvent.h"

@interface HMDCloudShareTrustManagerFailureLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *trustManagerErrorCode; // ivar: _trustManagerErrorCode


-(id)eventName;
-(id)initWithTrustManagerErrorCode:(NSInteger)arg0 error:(id)arg1 ;
-(id)serializedEvent;


@end


#endif