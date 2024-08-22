// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYMETRICSREQUEST_H
#define ACUISACTIVITYMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ACUISActivityItemMetricsRequest.h"
#import "_TtC18ActivityUIServices22ActivityMetricsRequest.h"

@interface ACUISActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) ACUISActivityItemMetricsRequest *lockScreenMetrics;
@property (copy, nonatomic) _TtC18ActivityUIServices22ActivityMetricsRequest *metricsRequest; // ivar: _metricsRequest


+(BOOL)supportsSecureCoding;
-(id)ACUISItemMetricsRequestFromRequest:(id)arg0 ;
-(id)_activityMetricsRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetricsRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif