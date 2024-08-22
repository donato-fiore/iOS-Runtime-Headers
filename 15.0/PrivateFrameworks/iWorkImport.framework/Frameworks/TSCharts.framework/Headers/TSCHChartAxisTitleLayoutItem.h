// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXISTITLELAYOUTITEM_H
#define TSCHCHARTAXISTITLELAYOUTITEM_H



#import "TSCHChartLayoutItem.h"

@interface TSCHChartAxisTitleLayoutItem : TSCHChartLayoutItem

@property (nonatomic) CGSize chartBodySize; // ivar: _chartBodySize
@property (nonatomic) CGFloat minHitSize; // ivar: _minHitSize


-(BOOL)isTitleOn;
-(CGFloat)titlePaddingForAxis:(id)arg0 ;
-(id)axisLayoutItem;
-(id)initWithParent:(id)arg0 ;
-(id)subselectionHaloPositionsForSelections:(id)arg0 ;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(struct CGAffineTransform )p_transformForRenderingRangePtr:(struct _NSRange *)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 ;
-(struct CGAffineTransform )transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1 ;
-(struct CGAffineTransform )transformForRenderingRange:(struct _NSRange )arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 ;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGRect )calcDrawingRect;
-(struct CGSize )calcMinSize;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;


@end


#endif