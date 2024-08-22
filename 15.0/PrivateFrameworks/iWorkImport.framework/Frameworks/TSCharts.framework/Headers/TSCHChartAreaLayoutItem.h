// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAREALAYOUTITEM_H
#define TSCHCHARTAREALAYOUTITEM_H



#import "TSCH2DChartAbstractAreaLayoutItem.h"
#import "TSCHChartAxisLayoutItem.h"
#import "_TtC8TSCharts23TSCHChartGridLayoutItem.h"
#import "TSCHChartReferenceLineLabelsLayoutItem.h"

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    TSCHChartAxisLayoutItem *_topHorizontalAxis;
    TSCHChartAxisLayoutItem *_bottomHorizontalAxis;
    TSCHChartAxisLayoutItem *_leftVerticalAxis;
    TSCHChartAxisLayoutItem *_rightVerticalAxis;
    _TtC8TSCharts23TSCHChartGridLayoutItem *_gridLayoutItem;
    NSUInteger _relayoutDepth;
    BOOL _inOutwardLayout;
}


@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *rightRefLineLabels;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *topRefLineLabels;


-(CGFloat)p_dataSetNameLabelPadding;
-(Class)p_axisLayoutItemClassForAxisID:(id)arg0 ;
-(id)renderersWithRep:(id)arg0 ;
-(struct CGRect )i_currentBufferAreaUnitRect;
-(struct CGRect )titleFrame;
-(void)buildSubTree;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;
-(void)layoutInward;
-(void)layoutOutward;
-(void)p_arrangeSizedChildren;
-(void)p_updateMinHitSizes;


@end


#endif