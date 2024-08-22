// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTVALUEAXISLABELSLAYOUTITEM_H
#define TSCHCHARTVALUEAXISLABELSLAYOUTITEM_H



#import "TSCHChartAxisLabelsLayoutItem.h"

@interface TSCHChartValueAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem



-(CGFloat)unitSpaceValueForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(NSUInteger)numberOfLabelsForAxis:(id)arg0 ;
-(NSUInteger)selectionPathLabelIndexForIndex:(NSUInteger)arg0 axis:(id)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)labelStringForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(id)selectionPathLabelType;
-(struct CGPoint )axisAnchorForPosition:(int)arg0 degrees:(float)arg1 inLayoutSize:(struct CGSize )arg2 unrotatedSize:(struct CGSize )arg3 unitSpaceValue:(CGFloat)arg4 ;
-(struct CGPoint )labelAnchorForPosition:(int)arg0 degrees:(float)arg1 ;


@end


#endif