// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPSERVICESTATUSSTATS_H
#define NSPSERVICESTATUSSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPServiceStatusStats : NSPProxyAnalytics

@property (nonatomic) NSUInteger serviceStatusActiveCount; // ivar: _serviceStatusActiveCount
@property (nonatomic) NSUInteger serviceStatusDisabledCount; // ivar: _serviceStatusDisabledCount
@property (nonatomic) NSUInteger serviceStatusFraudAlertCount; // ivar: _serviceStatusFraudAlertCount
@property (nonatomic) NSUInteger serviceStatusNetworkOutageCount; // ivar: _serviceStatusNetworkOutageCount
@property (nonatomic) NSUInteger serviceStatusOutageCount; // ivar: _serviceStatusOutageCount
@property (nonatomic) NSUInteger serviceStatusSubscriberUnsupportedRegionCount; // ivar: _serviceStatusSubscriberUnsupportedRegionCount
@property (nonatomic) NSUInteger serviceStatusSystemIncompatibleCount; // ivar: _serviceStatusSystemIncompatibleCount
@property (nonatomic) NSUInteger serviceStatusUnsupportedRegionCount; // ivar: _serviceStatusUnsupportedRegionCount
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType


-(id)analyticsDict;
-(id)eventName;


@end


#endif