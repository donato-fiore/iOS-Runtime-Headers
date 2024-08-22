// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXBOOKENDMETRIC_H
#define AXBOOKENDMETRIC_H

@protocol NSSecureCoding;


#import "AXMetric.h"

@interface AXBookendMetric : AXMetric <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(void)endMeasurement;
-(void)startMeasurement;


@end


#endif