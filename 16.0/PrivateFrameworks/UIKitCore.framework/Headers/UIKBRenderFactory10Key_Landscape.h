// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBRENDERFACTORY10KEY_LANDSCAPE_H
#define UIKBRENDERFACTORY10KEY_LANDSCAPE_H

@class Portrait;



@interface UIKBRenderFactory10Key_Landscape : Portrait



-(CGFloat)capitalAbcSymbolSize;
-(CGFloat)centerColumnWidthFactor;
-(CGFloat)controlColumnWidthFactor;
-(CGFloat)numberPadKeyPrimarySymbolSize;
-(struct CGPoint )abcKeyTextOffset;
-(struct CGPoint )longVowelSignKeyTextOffset;
-(struct CGPoint )numberPadKeyPrimaryTextOffset;
-(struct CGPoint )numberPadKeySecondaryTextOffset;
-(struct CGPoint )numberPadVBarSecondaryTextOffset;
-(struct UIEdgeInsets )wideShadowPaddleInsets;
-(void)setupColumnLayoutSegmentsWithControlWidth:(CGFloat)arg0 ;


@end


#endif