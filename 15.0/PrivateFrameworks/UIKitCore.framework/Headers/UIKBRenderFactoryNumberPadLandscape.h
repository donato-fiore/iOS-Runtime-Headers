// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRENDERFACTORYNUMBERPADLANDSCAPE_H
#define UIKBRENDERFACTORYNUMBERPADLANDSCAPE_H



#import "UIKBRenderFactoryNumberPad.h"

@interface UIKBRenderFactoryNumberPadLandscape : UIKBRenderFactoryNumberPad



-(CGFloat)letterFontSize;
-(CGFloat)numberFontSize;
-(struct CGPoint )centerColumnLetterOffset;
-(struct CGPoint )centerColumnNumberOffset;
-(struct CGPoint )deleteGlyphOffset;
-(struct CGPoint )dictationGlyphOffset;
-(struct CGPoint )leftColumnLetterOffset;
-(struct CGPoint )leftColumnNumberOffset;
-(struct CGPoint )loneZeroOffset;
-(struct CGPoint )rightColumnLetterOffset;
-(struct CGPoint )rightColumnNumberOffset;
-(struct CGPoint )specialSymbolOffset;
-(void)_customizeSymbolStyle:(id)arg0 secondaryStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3 ;


@end


#endif