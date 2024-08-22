// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTTITLELAYOUTITEM_H
#define TSCHCHARTTITLELAYOUTITEM_H

@class NSString;


#import "TSCHChartLayoutItem.h"

@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem

@property (nonatomic) CGFloat chartBodyWidth; // ivar: _chartBodyWidth
@property (copy, nonatomic) NSString *editedString; // ivar: _editedString
@property (nonatomic) CGFloat minHitSize; // ivar: _minHitSize


-(BOOL)pointHitsTitleRect:(struct CGPoint )arg0 ;
-(BOOL)shouldPlaceTitleAtCenter;
-(id)initWithParent:(id)arg0 ;
-(id)p_titleParagraphStyle;
-(id)renderersWithRep:(id)arg0 ;
-(id)subselectionHaloPositionsForSelections:(id)arg0 ;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(id)titleText;
-(struct CGAffineTransform )p_transformForRenderingRangePtr:(struct _NSRange *)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 forSubselection:(BOOL)arg3 forSearchSelection:(BOOL)arg4 ;
-(struct CGAffineTransform )searchSelectionTransformForRenderingRange:(struct _NSRange )arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 ;
-(struct CGAffineTransform )transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1 ;
-(struct CGAffineTransform )transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1 forSubselection:(BOOL)arg2 ;
-(struct CGAffineTransform )transformForRenderingRange:(struct _NSRange )arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 ;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )calcOverhangRect;
-(struct CGSize )calcMinSize;
-(struct CGSize )calcMinSizeForModel:(id)arg0 ;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;


@end


#endif