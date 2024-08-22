// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDSHARETRUSTMANAGERTRUSTACTIVITYLOGEVENT_H
#define HMDCLOUDSHARETRUSTMANAGERTRUSTACTIVITYLOGEVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDCloudShareTrustManagerLogEvent.h"

@interface HMDCloudShareTrustManagerTrustActivityLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *isPrimaryResident; // ivar: _isPrimaryResident
@property (readonly, copy) NSNumber *privilege; // ivar: _privilege
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *trustActivityType; // ivar: _trustActivityType


-(id)initWithTrustActivityType:(NSInteger)arg0 privilege:(NSUInteger)arg1 isPrimaryResident:(BOOL)arg2 ;


@end


#endif