// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRENDERFACTORYIPAD10KEY_PORTRAIT_H
#define UIKBRENDERFACTORYIPAD10KEY_PORTRAIT_H



#import "UIKBRenderFactory10Key.h"

@interface UIKBRenderFactoryiPad10Key_Portrait : UIKBRenderFactory10Key



-(CGFloat)controlColumnWidthFactor;
-(CGFloat)keyCornerRadius;
-(CGFloat)numberPadKeyPrimarySymbolSize;
-(NSInteger)assetIdiom;
-(NSUInteger)edgesAdjustedForTranslucentGapsForGeometry:(id)arg0 key:(id)arg1 onKeyplane:(id)arg2 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)backgroundTraitsForKeyplane:(id)arg0 ;
-(id)lightKeycapsFontName;
-(id)messagesWriteboardKeyImageName;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(id)shiftKeyImageName;
-(id)shiftLockImageName;
-(id)shiftOnKeyImageName;
-(id)thinKeycapsFontName;
-(struct CGPoint )abcKeyTextOffset;
-(struct CGPoint )dictationKeyTextOffset;
-(struct CGPoint )globeKeyTextOffset;
-(struct CGPoint )numberPadKeyPrimaryTextOffset;
-(struct CGPoint )numberPadKeySecondaryTextOffset;
-(struct CGPoint )numberPadVBarSecondaryTextOffset;
-(struct UIEdgeInsets )topEdgeAdjustmentInsets;
-(struct UIEdgeInsets )wideShadowPaddleInsets;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;
-(void)setupLayoutSegments;


@end


#endif