// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9TEACHARTS30LINESERIESACCESSIBILITYELEMENT_H
#define _TTC9TEACHARTS30LINESERIESACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, AXChartDescriptor;
@protocol AXChart;



@interface _TtC9TeaCharts30LineSeriesAccessibilityElement : UIAccessibilityElement <AXChart>

 {
    ? series;
    ? chartModel;
    ? interactor;
    ? dataElements;
    ? xAxisDateFormatter;
}


@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
@property (nonatomic) CGRect accessibilityFrame;


-(id)init;
-(id)initWithAccessibilityContainer:(id)arg0 ;
-(id)tc_accessibilityDataSeriesValueDescriptionForPosition:(CGFloat)arg0 axis:(NSInteger)arg1 ;


@end


#endif