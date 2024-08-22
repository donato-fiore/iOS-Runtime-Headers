// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8TSCHARTS28TSCHCHARTPOLARGRIDLAYOUTITEM_H
#define _TTC8TSCHARTS28TSCHCHARTPOLARGRIDLAYOUTITEM_H

@class TtC8TSCharts23TSCHChartGridLayoutItem;
@protocol _TtP8TSCharts33TSCHChartGridLayoutItemBaseLayout_;



@interface _TtC8TSCharts28TSCHChartPolarGridLayoutItem : TtC8TSCharts23TSCHChartGridLayoutItem <_TtP8TSCharts33TSCHChartGridLayoutItemBaseLayout_>

 {
    ? baseLayoutRect;
}


@property (nonatomic, readonly) CGRect rootedBaseLayoutRect;


-(id)initWithParent:(id)arg0 ;
-(id)renderersWithRep:(id)arg0 ;
-(struct CGRect )calcDrawingRect;


@end


#endif