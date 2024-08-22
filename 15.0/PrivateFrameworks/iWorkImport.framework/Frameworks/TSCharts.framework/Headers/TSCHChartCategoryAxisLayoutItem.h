// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTCATEGORYAXISLAYOUTITEM_H
#define TSCHCHARTCATEGORYAXISLAYOUTITEM_H



#import "TSCHChartAxisLayoutItem.h"
#import "TSCHChartCategoryAxisLabelsLayoutItem.h"
#import "TSCHChartAxisSeriesLabelsLayoutItem.h"

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem

@property (readonly, nonatomic) TSCHChartCategoryAxisLabelsLayoutItem *axisCategoryLabelsLayoutItem; // ivar: _categoryLabels
@property (readonly, nonatomic) TSCHChartAxisSeriesLabelsLayoutItem *axisSeriesLabelsLayoutItem; // ivar: _seriesLabels


-(id)protected_layoutSpaceHalosForAllLabels;
-(id)protected_layoutSpaceKnobsForAllLabels;
-(id)renderersWithRep:(id)arg0 ;
-(struct CGRect )protected_layoutSpaceRectForAllLabels;
-(void)buildSubTree;
-(void)p_layoutLabelsNow;


@end


#endif