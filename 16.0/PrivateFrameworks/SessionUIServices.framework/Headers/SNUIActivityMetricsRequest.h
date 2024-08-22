// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUIACTIVITYMETRICSREQUEST_H
#define SNUIACTIVITYMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SNUIActivityItemMetricsRequest.h"
#import "_TtC17SessionUIServices22ActivityMetricsRequest.h"

@interface SNUIActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) SNUIActivityItemMetricsRequest *lockScreenMetrics;
@property (copy, nonatomic) _TtC17SessionUIServices22ActivityMetricsRequest *metricsRequest; // ivar: _metricsRequest


+(BOOL)supportsSecureCoding;
-(id)_activityMetricsRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetricsRequest:(id)arg0 ;
-(id)snuiItemMetricsRequestFromRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif