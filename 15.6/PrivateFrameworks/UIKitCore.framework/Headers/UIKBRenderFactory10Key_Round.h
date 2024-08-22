// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORY10KEY_ROUND_H
#define UIKBRENDERFACTORY10KEY_ROUND_H



#import "UIKBRenderFactory10Key.h"

@interface UIKBRenderFactory10Key_Round : UIKBRenderFactory10Key



-(BOOL)shouldUseRoundCornerForKey:(id)arg0 ;
-(BOOL)useRoundCorner;
-(NSInteger)lightHighQualityEnabledBlendForm;
-(NSUInteger)edgesWithInsetsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(NSUInteger)roundCornersForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)activeControlKeyTraits;
-(id)controlKeyBackgroundColorName;
-(id)controlKeyShadowColorName;
-(id)controlKeyTraits;
-(id)defaultKeyShadowColorName;
-(id)shiftLockControlKeyTraits;
-(id)shiftedControlKeyTraits;
-(struct UIEdgeInsets )symbolFrameInsets;
-(struct UIEdgeInsets )wideShadowPaddleInsets;
-(void)_customizeGeometry:(id)arg0 forKey:(id)arg1 contents:(id)arg2 onKeyplane:(id)arg3 ;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;


@end


#endif