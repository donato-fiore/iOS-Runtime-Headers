// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTAXISLINELAYOUTITEM_H
#define TSCHCHARTAXISLINELAYOUTITEM_H



#import "TSCHChartLayoutItem.h"

@interface TSCHChartAxisLineLayoutItem : TSCHChartLayoutItem



-(CGFloat)p_strokeWidth;
-(id)initWithParent:(id)arg0 ;
-(id)p_axis;
-(id)p_axisLayoutItemParent;
-(struct CGAffineTransform )transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1 ;
-(struct CGRect )calcDrawingRect;
-(struct CGSize )calcMinSize;


@end


#endif