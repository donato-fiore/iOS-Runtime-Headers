// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPRIVACYMETRICSEVENT_H
#define SSPRIVACYMETRICSEVENT_H

@class NSString, NSNumber;


#import "SSMetricsMutableEvent.h"

@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent

@property (nonatomic) BOOL acknowledged;
@property (retain, nonatomic) NSString *acknowledgmentIdentifier;
@property (retain, nonatomic) NSNumber *acknowledgmentVersion;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL displayed;


-(id)init;


@end


#endif