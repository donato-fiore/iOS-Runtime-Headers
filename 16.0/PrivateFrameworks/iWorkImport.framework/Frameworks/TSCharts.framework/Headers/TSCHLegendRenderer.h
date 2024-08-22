// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHLEGENDRENDERER_H
#define TSCHLEGENDRENDERER_H



#import "TSCHRenderer.h"

@interface TSCHLegendRenderer : TSCHRenderer

@property (nonatomic) CGPoint textEditingPixelAlignmentOffset; // ivar: _textEditingPixelAlignmentOffset


-(BOOL)canRenderSelectionPath:(id)arg0 ;
-(id)legendLayoutItem;
-(id)p_selectionPathForCell:(id)arg0 ;
-(void)addSelection:(id)arg0 toCGPath:(struct CGPath *)arg1 useWrapWidth:(BOOL)arg2 ;
-(void)p_draw3DLineBadgeIntoContext:(struct CGContext *)arg0 forCell:(id)arg1 ;
-(void)p_drawBadgeForCell:(id)arg0 intoContext:(struct CGContext *)arg1 ;
-(void)p_drawDefaultBadgeIntoContext:(struct CGContext *)arg0 forCell:(id)arg1 ;
-(void)p_drawDonutBadgeIntoContext:(struct CGContext *)arg0 forCell:(id)arg1 ;
-(void)p_drawLabelForCell:(id)arg0 intoContext:(struct CGContext *)arg1 rangePtr:(struct _NSRange *)arg2 ;
-(void)p_drawLineAreaBadgeIntoContext:(struct CGContext *)arg0 forCell:(id)arg1 ;
-(void)p_drawPieBadgeIntoContext:(struct CGContext *)arg0 forCell:(id)arg1 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)renderIntoContext:(struct CGContext *)arg0 selection:(id)arg1 ;


@end


#endif