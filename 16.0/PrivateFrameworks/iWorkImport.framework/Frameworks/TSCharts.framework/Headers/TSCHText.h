// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHTEXT_H
#define TSCHTEXT_H


#import <Foundation/Foundation.h>


@interface TSCHText : NSObject {
    Class _tswpTextClass;
}


@property (nonatomic) BOOL textColorShouldBeBlack; // ivar: _textColorShouldBeBlack


+(BOOL)shouldLayoutTextForWrapWidth:(CGFloat)arg0 textLayoutProperties:(id)arg1 ;
+(id)sharedInteriorWrappingText;
+(id)sharedText;
+(struct TSCHTextLayoutResults )initializeTextLayoutResults;
+(void)clearCachesForDocumentRoot:(id)arg0 ;
-(BOOL)p_styleSupportsEqualDigits:(id)arg0 textCache:(id)arg1 ;
-(id)initWithTSWPTextClass:(Class)arg0 ;
-(id)p_newWPColumnForText:(id)arg0 wpTextObject:(id)arg1 wrapWidth:(CGFloat)arg2 layoutProperties:(id)arg3 ;
-(id)p_textCacheForParagraphStyle:(id)arg0 styleProvidingSource:(id)arg1 ;
-(id)p_wpColumnForText:(id)arg0 paragraphStyle:(id)arg1 textBlack:(BOOL)arg2 wrapWidth:(CGFloat)arg3 styleProvidingSource:(id)arg4 textCache:(id)arg5 layoutProperties:(id)arg6 ;
-(id)p_wpStorageForAttributedString:(struct __CFAttributedString *)arg0 paragraphStyle:(id)arg1 ;
-(id)p_wpTextForParagraphStyle:(id)arg0 text:(id)arg1 textBlack:(BOOL)arg2 styleProvidingSource:(id)arg3 cacheKey:(id)arg4 textCache:(id)arg5 ;
-(struct CGRect )frameForRange:(struct _NSRange )arg0 inText:(id)arg1 paragraphStyle:(id)arg2 ;
-(struct CGRect )frameForRange:(struct _NSRange )arg0 inText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect *)arg3 ;
-(struct CGRect )frameForRange:(struct _NSRange )arg0 inText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(CGFloat)arg3 layoutProperties:(id)arg4 styleProvidingSource:(id)arg5 outErasableFrame:(struct CGRect *)arg6 ;
-(struct CGRect )frameForRange:(struct _NSRange )arg0 inText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(CGFloat)arg3 outErasableFrame:(struct CGRect *)arg4 ;
-(struct CGSize )measureAttributedString:(struct __CFAttributedString *)arg0 paragraphStyle:(id)arg1 styleProvidingSource:(id)arg2 outErasableFrame:(struct CGRect *)arg3 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 outErasableFrame:(struct CGRect *)arg2 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 wrapWidth:(CGFloat)arg2 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 wrapWidth:(CGFloat)arg2 checkNumberTemplates:(BOOL)arg3 layoutProperties:(id)arg4 styleProvidingSource:(id)arg5 outErasableFrame:(struct CGRect *)arg6 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg7 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 wrapWidth:(CGFloat)arg2 layoutProperties:(id)arg3 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 wrapWidth:(CGFloat)arg2 outErasableFrame:(struct CGRect *)arg3 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 wrapWidth:(CGFloat)arg2 outErasableFrame:(struct CGRect *)arg3 checkNumberTemplates:(BOOL)arg4 ;
-(struct CGSize )measureText:(id)arg0 paragraphStyle:(id)arg1 wrapWidth:(CGFloat)arg2 outErasableFrame:(struct CGRect *)arg3 layoutProperties:(id)arg4 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg5 ;
-(struct CGSize )p_sizeForNumberTemplate:(id)arg0 paragraphStyle:(id)arg1 styleProvidingSource:(id)arg2 textCache:(id)arg3 layoutProperties:(id)arg4 ;
-(struct TSCHTextLayoutResults )textLayoutResultsForColumn:(id)arg0 ;
-(struct __CTFont *)retainedCTFontForParagraphStyle:(id)arg0 ;
-(void)drawAttributedString:(struct __CFAttributedString *)arg0 paragraphStyle:(id)arg1 styleProvidingSource:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint )arg4 range:(struct _NSRange )arg5 viewScale:(CGFloat)arg6 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 atPosition:(struct CGPoint )arg3 range:(struct _NSRange )arg4 viewScale:(CGFloat)arg5 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 atPosition:(struct CGPoint )arg3 viewScale:(CGFloat)arg4 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 range:(struct _NSRange )arg3 viewScale:(CGFloat)arg4 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 viewScale:(CGFloat)arg3 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(CGFloat)arg3 atPosition:(struct CGPoint )arg4 range:(struct _NSRange )arg5 viewScale:(CGFloat)arg6 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(CGFloat)arg3 atPosition:(struct CGPoint )arg4 range:(struct _NSRange )arg5 viewScale:(CGFloat)arg6 layoutProperties:(id)arg7 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(CGFloat)arg3 atPosition:(struct CGPoint )arg4 range:(struct _NSRange )arg5 viewScale:(CGFloat)arg6 layoutProperties:(id)arg7 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg8 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(CGFloat)arg3 atPosition:(struct CGPoint )arg4 range:(struct _NSRange )arg5 viewScale:(CGFloat)arg6 layoutProperties:(id)arg7 styleProvidingSource:(id)arg8 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg9 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(CGFloat)arg3 atPosition:(struct CGPoint )arg4 viewScale:(CGFloat)arg5 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(CGFloat)arg3 atPosition:(struct CGPoint )arg4 viewScale:(CGFloat)arg5 layoutProperties:(id)arg6 ;
-(void)drawText:(id)arg0 paragraphStyle:(id)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(CGFloat)arg3 atPosition:(struct CGPoint )arg4 viewScale:(CGFloat)arg5 layoutProperties:(id)arg6 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg7 ;
-(void)drawTextIntoContext:(struct CGContext *)arg0 position:(struct CGPoint )arg1 textEngine:(id)arg2 column:(id)arg3 range:(struct _NSRange )arg4 viewScale:(CGFloat)arg5 ;


@end


#endif