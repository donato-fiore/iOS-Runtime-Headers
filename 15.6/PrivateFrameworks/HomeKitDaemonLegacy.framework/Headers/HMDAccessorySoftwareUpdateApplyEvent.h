// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYSOFTWAREUPDATEAPPLYEVENT_H
#define HMDACCESSORYSOFTWAREUPDATEAPPLYEVENT_H

@class HMMLogEvent, NSString, NSDictionary, HMFSoftwareVersion;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessoryMetricVendorDetails.h"

@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSUInteger advertisedDuration; // ivar: _advertisedDuration
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) HMDAccessoryMetricVendorDetails *metricVendorDetails; // ivar: _metricVendorDetails
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly) HMFSoftwareVersion *stagedVersion; // ivar: _stagedVersion
@property (readonly) NSInteger status; // ivar: _status
@property (readonly) NSUInteger totalAllowedDuration; // ivar: _totalAllowedDuration


+(id)eventWithMetricVendorDetails:(id)arg0 stagedVersion:(id)arg1 advertisedDuration:(NSUInteger)arg2 totalAllowedDuration:(NSUInteger)arg3 status:(NSInteger)arg4 ;
-(id)initWithDetails:(id)arg0 stagedVersion:(id)arg1 advertisedDuration:(NSUInteger)arg2 totalAllowedDuration:(NSUInteger)arg3 status:(NSInteger)arg4 ;


@end


#endif