// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISACTIVITYMETRICSREQUEST_H
#define ACUISACTIVITYMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices22ActivityMetricsRequest.h"
#import "ACUISActivityItemMetricsRequest.h"
#import "ACUISSystemApertureMetricsRequest.h"

@interface ACUISActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding>

 {
    _TtC18ActivityUIServices22ActivityMetricsRequest *_metricsRequest;
}


@property (copy, nonatomic) ACUISActivityItemMetricsRequest *lockScreenMetrics;
@property (copy, nonatomic) ACUISSystemApertureMetricsRequest *systemApertureMetrics;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ACUISItemMetricsRequestFromRequest:(id)arg0 ;
-(id)_activityMetricsRequest;
-(id)_initWithMetricsRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLockScreenMetrics:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif