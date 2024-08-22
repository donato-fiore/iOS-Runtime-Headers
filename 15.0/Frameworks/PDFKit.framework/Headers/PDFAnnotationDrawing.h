// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFANNOTATIONDRAWING_H
#define PDFANNOTATIONDRAWING_H


#import <Foundation/Foundation.h>


@interface PDFAnnotationDrawing : NSObject



+(?)createCGPathArrayWithBezierPaths;
+(BOOL)renderString:(id)arg0 forRect:(struct CGRect )arg1 font:(id)arg2 color:(id)arg3 alignment:(NSInteger)arg4 rotation:(int)arg5 breaks:(BOOL)arg6 context:(struct CGContext *)arg7 withAnnotation:(id)arg8 ;
+(id)createLigtherColor:(struct CGColor *)arg0 withIntensity:(CGFloat)arg1 ;
+(id)stringByTrimmingTrailingCharactersInSet:(id)arg0 forString:(id)arg1 ;
+(struct CGRect )adjustedRectForBox:(NSInteger)arg0 withAnnotation:(id)arg1 ;
+(void)createPillBezier:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
+(void)drawAppearance:(int)arg0 ofAnnotation:(id)arg1 withBox:(NSInteger)arg2 inContext:(struct CGContext *)arg3 ;
+(void)drawAppearance:(int)arg0 ofAnnotation:(id)arg1 withBox:(NSInteger)arg2 inContext:(struct CGContext *)arg3 scaleProportional:(BOOL)arg4 ;
+(void)drawArrowFrom:(struct CGPoint )arg0 to:(struct CGPoint )arg1 open:(BOOL)arg2 inContext:(struct CGContext *)arg3 withBorder:(id)arg4 ;
+(void)drawBulletAtPoint:(struct CGPoint )arg0 shape:(int)arg1 inContext:(struct CGContext *)arg2 withBorder:(id)arg3 ;
+(void)drawCheckBox:(id)arg0 inContext:(struct CGContext *)arg1 withState:(NSInteger)arg2 withBackgroundColor:(id)arg3 withBorderColor:(id)arg4 withFontColor:(id)arg5 isHighlighted:(BOOL)arg6 ;
+(void)drawComboBox:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withAnnotation:(id)arg2 withStringValue:(id)arg3 withFont:(id)arg4 withFontColor:(id)arg5 ;
+(void)drawCommentIconInRect:(struct CGRect )arg0 withColor:(id)arg1 inContext:(struct CGContext *)arg2 ;
+(void)drawCommonCommentNoteIconToContext:(struct CGContext *)arg0 colorComponents:(*CGFloat)arg1 rect:(struct CGRect )arg2 ;
+(void)drawDisclosureBox:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
+(void)drawHelpIconInRect:(struct CGRect )arg0 withColor:(id)arg1 inContext:(struct CGContext *)arg2 ;
+(void)drawInContext:(struct CGContext *)arg0 withBounds:(struct CGRect )arg1 withPopupAnnotation:(id)arg2 ;
+(void)drawInsertIconInRect:(struct CGRect )arg0 withColor:(id)arg1 inContext:(struct CGContext *)arg2 ;
+(void)drawKeyIconInRect:(struct CGRect )arg0 withColor:(id)arg1 inContext:(struct CGContext *)arg2 ;
+(void)drawListBox:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withAnnotation:(id)arg2 withOptions:(id)arg3 withStringValue:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6 ;
+(void)drawNewParagraphIconInRect:(struct CGRect )arg0 withColor:(id)arg1 inContext:(struct CGContext *)arg2 ;
+(void)drawNoteAsSelected:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
+(void)drawNoteIconInRect:(struct CGRect )arg0 withColor:(id)arg1 inContext:(struct CGContext *)arg2 ;
+(void)drawNoteInContext:(struct CGContext *)arg0 withParentAnnotation:(id)arg1 ;
+(void)drawParagraphIconInRect:(struct CGRect )arg0 withColor:(id)arg1 inContext:(struct CGContext *)arg2 ;
+(void)drawPushButton:(id)arg0 inContext:(struct CGContext *)arg1 withBackgroundColor:(id)arg2 withCaption:(id)arg3 withFont:(id)arg4 withFontColor:(id)arg5 isHighlighted:(BOOL)arg6 ;
+(void)drawRadioButton:(id)arg0 inContext:(struct CGContext *)arg1 withState:(NSInteger)arg2 withBackgroundColor:(id)arg3 withBorderColor:(id)arg4 withFontColor:(id)arg5 isHighlighted:(BOOL)arg6 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withAKAnnotation:(id)arg2 forAnnotation:(id)arg3 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withButtonWidgetAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withChoiceWidgetAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withCircleAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withFreeTextAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withInkAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withLineAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withLinkAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withMarkupAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withPopupAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withRedactAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withSquareAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withStampAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withTextAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withTextWidgetAnnotation:(id)arg2 ;
+(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withUnknownAnnotation:(id)arg2 ;
+(void)fillOval:(struct CGRect )arg0 color:(id)arg1 context:(struct CGContext *)arg2 ;
+(void)fillRect:(struct CGRect )arg0 color:(id)arg1 context:(struct CGContext *)arg2 ;
+(void)setupDrawColor:(id)arg0 withComponents:(*CGFloat)arg1 forContext:(struct CGContext *)arg2 ;
+(void)strokeOval:(struct CGRect )arg0 color:(id)arg1 context:(struct CGContext *)arg2 ;
+(void)strokeRect:(struct CGRect )arg0 color:(id)arg1 context:(struct CGContext *)arg2 ;


@end


#endif