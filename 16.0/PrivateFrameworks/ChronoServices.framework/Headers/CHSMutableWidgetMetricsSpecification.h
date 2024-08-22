// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSMUTABLEWIDGETMETRICSSPECIFICATION_H
#define CHSMUTABLEWIDGETMETRICSSPECIFICATION_H

@class NSMutableDictionary;


#import "CHSWidgetMetricsSpecification.h"

@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification

@property (readonly, copy, nonatomic) NSMutableDictionary *alternatesByFamily;
@property (readonly, copy, nonatomic) NSMutableDictionary *metricsByFamily;


-(id)_initWithMetricsByFamily:(id)arg0 alternates:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setAlternateMetrics:(id)arg0 forFamily:(NSInteger)arg1 ;
-(void)setMetrics:(id)arg0 forFamily:(NSInteger)arg1 ;


@end


#endif