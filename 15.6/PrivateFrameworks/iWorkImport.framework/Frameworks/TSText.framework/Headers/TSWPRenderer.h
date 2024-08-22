// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPRENDERER_H
#define TSWPRENDERER_H

@class NSString, TSUBezierPath;
@protocol TSWPRendering;

#import <Foundation/Foundation.h>


@interface TSWPRenderer : NSObject <TSWPRendering>



@property (readonly, nonatomic) *CGContext context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL flipShadows; // ivar: _flipShadows
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSUBezierPath *interiorClippingPath; // ivar: _interiorClippingPath
@property (readonly) Class superclass;
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


+(id)correctionAndDictationMarkColor;
+(id)grammarMarkColor;
+(id)spellingMarkColor;
+(struct __CTFont *)flippedInvisiblesFont;
+(struct __CTFont *)invisiblesFont;
+(void)initialize;
-(BOOL)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(NSUInteger)arg0 state:(struct TSWPDrawingState *)arg1 ;
-(BOOL)shouldClipFragment:(*void)arg0 drawingState:(struct TSWPDrawingState *)arg1 lineDrawFlags:(NSUInteger)arg2 updateRect:(struct CGRect )arg3 outClipRect:(struct CGRect *)arg4 ;
-(id)initWithContext:(struct CGContext *)arg0 ;
-(struct CGRect )getClipBoundingBox;
-(struct CGSize )convertSizeToDeviceSpace:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)didRenderFragments;
-(void)drawAdornmentRects:(id)arg0 forColumn:(id)arg1 foreground:(BOOL)arg2 drawingState:(struct TSWPDrawingState *)arg3 ;
-(void)drawAdornmentsForFragment:(*void)arg0 updateRect:(struct CGRect )arg1 drawingState:(struct TSWPDrawingState *)arg2 runState:(struct ? *)arg3 lineDrawFlags:(NSUInteger)arg4 ;
-(void)drawCharacterFillAdornmentRects:(id)arg0 forColumn:(id)arg1 excludeRange:(struct _NSRange )arg2 drawingState:(struct TSWPDrawingState *)arg3 ;
-(void)drawCharacterStrokeAdornmentRects:(id)arg0 forColumn:(id)arg1 excludeRange:(struct _NSRange )arg2 drawingState:(struct TSWPDrawingState *)arg3 ;
-(void)drawFragment:(*void)arg0 updateRect:(struct CGRect )arg1 drawingState:(struct TSWPDrawingState *)arg2 runState:(struct ? *)arg3 lineDrawFlags:(NSUInteger)arg4 ;
-(void)p_clipToInteriorClippingPath;
-(void)p_drawAdornmentGlyphs:(id)arg0 lineFragment:(*void)arg1 state:(struct TSWPDrawingState *)arg2 ;
-(void)p_drawAdornmentLine:(id)arg0 drawingState:(struct TSWPDrawingState *)arg1 lineFragment:(*void)arg2 lineFragmentStart:(struct CGPoint )arg3 vertical:(BOOL)arg4 ;
-(void)p_drawAdornmentLineBackgroundRect:(id)arg0 lineDrawFlags:(NSUInteger)arg1 drawingState:(struct TSWPDrawingState *)arg2 bounds:(struct CGRect )arg3 ;
-(void)p_drawAdornments:(id)arg0 lineFragment:(*void)arg1 state:(struct TSWPDrawingState *)arg2 ;
-(void)p_drawAttachmentAdornments:(id)arg0 lineFragment:(*void)arg1 state:(struct TSWPDrawingState *)arg2 ;
-(void)p_drawAttachmentGlyphAtPosition:(struct ? )arg0 fragment:(*void)arg1 ;
-(void)p_drawAutocorrectionMarkingsFragment:(*void)arg0 drawingState:(struct TSWPDrawingState *)arg1 ;
-(void)p_drawDictationMarkingsFragment:(*void)arg0 drawingState:(struct TSWPDrawingState *)arg1 ;
-(void)p_drawHiddenDeletionsAdornments:(id)arg0 lineFragment:(*void)arg1 state:(struct TSWPDrawingState *)arg2 ;
-(void)p_drawInvisiblesAdornments:(id)arg0 lineFragment:(*void)arg1 state:(struct TSWPDrawingState *)arg2 ;
-(void)p_drawInvisiblesBreakLine:(id)arg0 lineFragment:(*void)arg1 state:(struct TSWPDrawingState *)arg2 ;
-(void)p_drawListLabelForFragment:(*void)arg0 drawingState:(struct TSWPDrawingState *)arg1 lineDrawFlags:(NSUInteger)arg2 ;
-(void)p_drawRun:(struct __CTRun *)arg0 range:(struct ? )arg1 attributes:(id)arg2 canvasIsInteractive:(BOOL)arg3 ;
-(void)p_drawTextInRunsForLine:(struct TSWPLineRef )arg0 fragment:(*void)arg1 state:(struct TSWPDrawingState *)arg2 listLabel:(BOOL)arg3 tateChuYoko:(BOOL)arg4 ruby:(BOOL)arg5 baseRange:(struct _NSRange )arg6 isFirstLineRef:(BOOL)arg7 ;
-(void)p_drawWordMarkingsForFragment:(*void)arg0 color:(id)arg1 ranges:(id)arg2 suppressRange:(struct _NSRange )arg3 drawingState:(struct TSWPDrawingState *)arg4 ;
-(void)p_setCTMAndTextPositionForFragment:(*void)arg0 state:(struct TSWPDrawingState *)arg1 ;
-(void)p_strokeLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 width:(CGFloat)arg2 ;
-(void)p_strokeWavyLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 width:(CGFloat)arg2 ;
-(void)willRenderFragmentsWithDrawingState:(struct TSWPDrawingState *)arg0 ;


@end


#endif