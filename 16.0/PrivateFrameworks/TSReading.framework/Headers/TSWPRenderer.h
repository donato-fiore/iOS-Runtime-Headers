// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPRENDERER_H
#define TSWPRENDERER_H


#import <Foundation/Foundation.h>

#import "TSDBezierPath.h"

@interface TSWPRenderer : NSObject {
    *CGContext _context;
}


@property (nonatomic) BOOL flipShadows; // ivar: _flipShadows
@property (retain, nonatomic) TSDBezierPath *interiorClippingPath; // ivar: _interiorClippingPath
@property (nonatomic) BOOL preventClipToColumn; // ivar: _preventClipToColumn
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


+(struct __CTFont *)invisiblesFont;
-(?)p_drawAdornmentLineBackgroundRect:(?)arg0 lineDrawFlags:(?)arg1 drawingStatebounds;
-(?)p_drawInvisiblesBreakLine:(?)arg0 lineFragmentstate;
-(BOOL)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(NSUInteger)arg0 state:(*void)arg1 ;
-(BOOL)p_shouldClipFragment:(*void)arg0 drawingState:(*void)arg1 lineDrawFlags:(unsigned int)arg2 updateRect:(struct CGRect )arg3 outClipRect:(struct CGRect *)arg4 ;
-(id)initWithContext:(struct CGContext *)arg0 ;
-(struct CGRect )getClipBoundingBox;
-(struct CGSize )convertSizeToDeviceSpace:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)didRenderFragments;
-(void)drawAdornmentRects:(*void)arg0 forColumn:(id)arg1 foreground:(BOOL)arg2 ;
-(void)drawFragment:(*void)arg0 updateRect:(struct CGRect )arg1 drawingState:(*void)arg2 runState:(struct ? *)arg3 lineDrawFlags:(unsigned int)arg4 ;
-(void)p_calculateMarkAdornments:(*void)arg0 drawingState:(*void)arg1 lineFragment:(*void)arg2 ;
-(void)p_drawAdornmentGlyphs:(*void)arg0 lineFragment:(*void)arg1 state:(*void)arg2 ;
-(void)p_drawAdornmentLine:(struct TSWPAdornmentLine *)arg0 drawingState:(*void)arg1 lineFragment:(*void)arg2 lineFragmentStart:(struct CGPoint )arg3 vertical:(BOOL)arg4 ;
-(void)p_drawAdornments:(*void)arg0 lineFragment:(*void)arg1 state:(*void)arg2 ;
-(void)p_drawAttachmentAdornments:(*void)arg0 lineFragment:(*void)arg1 state:(*void)arg2 ;
-(void)p_drawAttachmentGlyphAtPosition:(struct ? )arg0 fragment:(*void)arg1 ;
-(void)p_drawAutocorrectionMarkingsFragment:(*void)arg0 drawingState:(*void)arg1 ;
-(void)p_drawDictationMarkingsFragment:(*void)arg0 drawingState:(*void)arg1 ;
-(void)p_drawHiddenDeletionsAdornments:(*void)arg0 lineFragment:(*void)arg1 state:(*void)arg2 ;
-(void)p_drawInvisiblesAdornments:(*void)arg0 lineFragment:(*void)arg1 state:(*void)arg2 ;
-(void)p_drawListLabelForFragment:(*void)arg0 drawingState:(*void)arg1 lineDrawFlags:(unsigned int)arg2 ;
-(void)p_drawMisspelledWordMarkingsFragment:(*void)arg0 drawingState:(*void)arg1 ;
-(void)p_drawTextInRunsForLine:(struct __CTLine *)arg0 fragment:(*void)arg1 state:(*void)arg2 tateChuYoko:(BOOL)arg3 baseRange:(struct _NSRange )arg4 isFirstLineRef:(BOOL)arg5 ;
-(void)p_drawUngrammaticMarkingsFragment:(*void)arg0 drawingState:(*void)arg1 ;
-(void)p_drawWordMarkingsForFragment:(*void)arg0 color:(id)arg1 ranges:(*void)arg2 suppressRange:(struct _NSRange )arg3 drawingState:(*void)arg4 ;
-(void)p_strokeLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 width:(CGFloat)arg2 ;
-(void)p_strokeWavyLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 width:(CGFloat)arg2 ;
-(void)willRenderFragmentsWithDrawingState:(*void)arg0 ;


@end


#endif