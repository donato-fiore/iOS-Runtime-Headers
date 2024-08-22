// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8TSCHARTS28TSCHCHARTRADARAREALAYOUTITEM_H
#define _TTC8TSCHARTS28TSCHCHARTRADARAREALAYOUTITEM_H



#import "TSCH2DChartAbstractAreaLayoutItem.h"

@interface _TtC8TSCharts28TSCHChartRadarAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    ? valueAxisLayoutItem;
    ? categoryAxisLayoutItem;
    ? categoryAxisGridlineTickmarkLayoutItem;
    ? valueAxisGridlineTickmarkLayoutItem;
    ? gridLayoutItem;
    ? kTSCHMaxIterationsForBodyRectEstimation;
}


@property (nonatomic, readonly) CGRect titleFrame;


-(id)initWithParent:(id)arg0 ;
-(id)renderersWithRep:(id)arg0 ;
-(void)buildSubTree;
-(void)layoutInward;
-(void)layoutOutward;


@end


#endif