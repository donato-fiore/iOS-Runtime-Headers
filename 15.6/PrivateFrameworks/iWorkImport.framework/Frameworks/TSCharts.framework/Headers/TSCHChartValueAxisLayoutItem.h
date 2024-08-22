// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTVALUEAXISLAYOUTITEM_H
#define TSCHCHARTVALUEAXISLAYOUTITEM_H



#import "TSCHChartAxisLayoutItem.h"
#import "TSCHChartValueAxisLabelsLayoutItem.h"

@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem

@property (retain, nonatomic) TSCHChartValueAxisLabelsLayoutItem *axisValueLabelsLayoutItem; // ivar: _axisValueLabelsLayoutItem


-(id)renderersWithRep:(id)arg0 ;
-(struct CGRect )protected_layoutSpaceRectForAllLabels;
-(void)buildSubTree;
-(void)p_layoutLabelsNow;


@end


#endif