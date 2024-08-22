// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHLEGENDAREALAYOUTITEM_H
#define TSCHLEGENDAREALAYOUTITEM_H

@class NSValue;


#import "TSCHChartLayoutItem.h"
#import "TSCHLegendModelCache.h"

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {
    NSValue *_legendGeometryFrame;
}


@property (readonly) TSCHLegendModelCache *legendModelCache;
@property (nonatomic) CGRect legendModelGeometryFrame;


-(CGFloat)p_legendModelWidth;
-(id)initWithParent:(id)arg0 ;
-(id)renderersWithRep:(id)arg0 ;
-(id)textStyleProvidingSource;
-(struct CGAffineTransform )p_transformForRenderingLabel:(NSUInteger)arg0 paragraphStyle:(id)arg1 cellType:(int)arg2 rangePtr:(struct _NSRange *)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 ;
-(struct CGAffineTransform )transformForRenderingBadge:(NSUInteger)arg0 cellType:(int)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 ;
-(struct CGAffineTransform )transformForRenderingLabel:(NSUInteger)arg0 cellType:(int)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 ;
-(struct CGAffineTransform )transformForRenderingLabel:(NSUInteger)arg0 cellType:(int)arg1 range:(struct _NSRange )arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 ;
-(struct CGAffineTransform )transformForRenderingLabel:(NSUInteger)arg0 paragraphStyle:(id)arg1 cellType:(int)arg2 range:(struct _NSRange )arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 ;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGRect )calcDrawingRect;
-(struct CGSize )calcMinSize;
-(void)clearAll;
-(void)clearLayoutSize;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;
-(void)resetLayoutSize;
-(void)setLayoutSize:(struct CGSize )arg0 ;
-(void)updateLegendGeometryFrameFromLegendModelCache;


@end


#endif