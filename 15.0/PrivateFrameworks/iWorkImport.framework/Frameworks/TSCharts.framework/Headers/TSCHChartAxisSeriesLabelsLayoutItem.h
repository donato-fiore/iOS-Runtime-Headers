// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXISSERIESLABELSLAYOUTITEM_H
#define TSCHCHARTAXISSERIESLABELSLAYOUTITEM_H



#import "TSCHChartCategoryAxisLabelsLayoutItem.h"

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem



-(BOOL)showLabelsForAxis:(id)arg0 ;
-(CGFloat)unitSpaceValueForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(NSUInteger)numberOfLabelsForAxis:(id)arg0 ;
-(NSUInteger)selectionPathLabelIndexForIndex:(NSUInteger)arg0 axis:(id)arg1 ;
-(NSUInteger)strideInLayoutSize:(struct CGSize )arg0 ;
-(id)initWithParent:(id)arg0 ;
-(id)labelStringForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(id)selectionPathLabelType;
-(struct CGSize )calcMinSize;


@end


#endif