// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSOFTWAREUPDATEAPPLYEVENT_H
#define HMDACCESSORYSOFTWAREUPDATEAPPLYEVENT_H

@class HMMLogEvent, NSString, NSDictionary, HMFSoftwareVersion;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessoryMetricVendorDetails.h"

@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSUInteger advertisedDuration; // ivar: _advertisedDuration
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDAccessoryMetricVendorDetails *metricVendorDetails; // ivar: _metricVendorDetails
@property (readonly, nonatomic) HMFSoftwareVersion *stagedVersion; // ivar: _stagedVersion
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalAllowedDuration; // ivar: _totalAllowedDuration


+(id)eventWithMetricVendorDetails:(id)arg0 stagedVersion:(id)arg1 advertisedDuration:(NSUInteger)arg2 totalAllowedDuration:(NSUInteger)arg3 status:(NSInteger)arg4 ;
-(id)initWithDetails:(id)arg0 stagedVersion:(id)arg1 advertisedDuration:(NSUInteger)arg2 totalAllowedDuration:(NSUInteger)arg3 status:(NSInteger)arg4 ;


@end


#endif