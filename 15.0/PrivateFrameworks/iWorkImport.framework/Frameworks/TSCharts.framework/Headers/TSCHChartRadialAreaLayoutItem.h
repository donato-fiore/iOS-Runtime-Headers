// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTRADIALAREALAYOUTITEM_H
#define TSCHCHARTRADIALAREALAYOUTITEM_H



#import "TSCH2DChartAbstractAreaLayoutItem.h"
#import "_TtC8TSCharts23TSCHChartGridLayoutItem.h"

@interface TSCHChartRadialAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem

@property (retain, nonatomic) _TtC8TSCharts23TSCHChartGridLayoutItem *gridLayoutItem; // ivar: _gridLayoutItem


-(Class)bodyLayoutItemClass;
-(id)renderersWithRep:(id)arg0 ;
-(id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
-(struct CGRect )titleFrame;
-(void)buildSubTree;
-(void)layoutInward;
-(void)layoutOutward;


@end


#endif