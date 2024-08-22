// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFIELDEDITORLAYOUTMANAGER_H
#define _UIFIELDEDITORLAYOUTMANAGER_H

@class NSLayoutManager, UIFont;



@interface _UIFieldEditorLayoutManager : NSLayoutManager {
    UIFont *_fontForExtraBulletRendering;
}




-(NSInteger)_generateBulletGlyphs:(*unsigned short)arg0 properties:(*NSInteger)arg1 characterIndexes:(*NSUInteger)arg2 font:(id)arg3 forGlyphRange:(struct _NSRange )arg4 unobscuredRange:(struct _NSRange )arg5 ;
-(struct CGRect )_boundingBoxForBulletAtCharIndex:(NSInteger)arg0 inUnobscuredRange:(struct _NSRange )arg1 ;
-(void)_completeBulletRenderingForTextContainer:(id)arg0 ;
-(void)resetFontForExtraBulletRendering;
-(void)showCGGlyphs:(*unsigned short)arg0 positions:(struct CGPoint *)arg1 count:(NSInteger)arg2 font:(id)arg3 textMatrix:(struct CGAffineTransform )arg4 attributes:(id)arg5 inContext:(struct CGContext *)arg6 ;
-(void)useFontForExtraBulletRendering:(id)arg0 ;


@end


#endif