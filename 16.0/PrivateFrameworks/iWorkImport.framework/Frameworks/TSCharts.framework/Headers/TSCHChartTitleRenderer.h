// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTTITLERENDERER_H
#define TSCHCHARTTITLERENDERER_H



#import "TSCHRenderer.h"

@interface TSCHChartTitleRenderer : TSCHRenderer {
    CGRect _startingEditingFrame;
}




+(id)defaultParagraphStyleForCenteredTitleEllipsisWithChartInfo:(id)arg0 originalParagraphStyle:(id)arg1 scaleTextPercent:(CGFloat)arg2 titleRootedLayoutRect:(struct CGRect )arg3 ;
-(BOOL)canEditTextForSelectionPath:(id)arg0 ;
-(BOOL)canRenderSelectionPath:(id)arg0 ;
-(BOOL)shouldPlaceTitleAtCenter;
-(CGFloat)frameHeightChangeForPath:(id)arg0 ;
-(id)textLayoutPropertiesWithWrapWidth:(CGFloat)arg0 ;
-(struct CGRect )frameForEditingTextForSelectionPath:(id)arg0 ;
-(struct CGRect )p_rawFrameForEditingTextForSelectionPath:(id)arg0 ;
-(void)addSelection:(id)arg0 toCGPath:(struct CGPath *)arg1 useWrapWidth:(BOOL)arg2 ;
-(void)p_drawTitle:(struct CGContext *)arg0 rangePtr:(struct _NSRange *)arg1 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)renderIntoContext:(struct CGContext *)arg0 selection:(id)arg1 ;
-(void)useEditedString:(id)arg0 ;


@end


#endif