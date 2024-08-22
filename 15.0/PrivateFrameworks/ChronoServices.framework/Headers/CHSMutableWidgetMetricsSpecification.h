// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSMUTABLEWIDGETMETRICSSPECIFICATION_H
#define CHSMUTABLEWIDGETMETRICSSPECIFICATION_H

@class NSMutableDictionary;


#import "CHSWidgetMetricsSpecification.h"

@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification

@property (readonly, copy, nonatomic) NSMutableDictionary *metricsByFamily;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMetricsByFamily:(id)arg0 ;
-(void)setMetrics:(id)arg0 forFamily:(NSInteger)arg1 ;


@end


#endif