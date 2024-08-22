// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBRENDERFACTORYNUMBERPAD_H
#define UIKBRENDERFACTORYNUMBERPAD_H



#import "UIKBRenderFactory.h"

@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory



-(CGFloat)letterFontSize;
-(CGFloat)numberFontSize;
-(CGFloat)symbolImageControlKeyFontSize;
-(NSInteger)lightHighQualityEnabledBlendForm;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)controlKeyBackgroundColorName;
-(id)controlKeyDividerColorName;
-(id)controlKeyForegroundColorName;
-(id)defaultKeyDividerColorName;
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
-(void)setupLayoutSegments;


@end


#endif