// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSOFTWAREUPDATEAPPLYEVENT_H
#define HMDACCESSORYSOFTWAREUPDATEAPPLYEVENT_H

@class HMMLogEvent, NSString, HMFSoftwareVersion;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessoryMetricVendorDetails.h"

@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSUInteger advertisedDuration; // ivar: _advertisedDuration
@property (readonly) HMDAccessoryMetricVendorDetails *metricVendorDetails; // ivar: _metricVendorDetails
@property (readonly) HMFSoftwareVersion *stagedVersion; // ivar: _stagedVersion
@property (readonly) NSInteger status; // ivar: _status
@property (readonly) NSUInteger totalAllowedDuration; // ivar: _totalAllowedDuration


+(id)eventWithMetricVendorDetails:(id)arg0 stagedVersion:(id)arg1 advertisedDuration:(NSUInteger)arg2 totalAllowedDuration:(NSUInteger)arg3 status:(NSInteger)arg4 ;
-(id)eventName;
-(id)initWithDetails:(id)arg0 stagedVersion:(id)arg1 advertisedDuration:(NSUInteger)arg2 totalAllowedDuration:(NSUInteger)arg3 status:(NSInteger)arg4 ;
-(id)serializedEvent;


@end


#endif