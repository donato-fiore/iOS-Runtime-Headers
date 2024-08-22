// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORY50ON_PORTRAIT_H
#define UIKBRENDERFACTORY50ON_PORTRAIT_H

@class Round;



@interface UIKBRenderFactory50On_Portrait : Round



-(BOOL)shouldShowBottomRowEdge;
-(BOOL)shouldShowTopRowEdge;
-(CGFloat)controlColumnWidthFactor;
-(CGFloat)deleteKeyFontSize;
-(CGFloat)keyCornerRadius;
-(CGFloat)keyplaneSwitchKeyFontSize;
-(CGFloat)returnKeyFontSize;
-(CGFloat)spaceKeyFontSize;
-(NSInteger)assetIdiom;
-(NSUInteger)edgesWithInsetsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(NSUInteger)roundCornersForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)lightKeycapsFontName;
-(id)messagesWriteboardKeyImageName;
-(id)thinKeycapsFontName;
-(struct UIEdgeInsets )symbolFrameInsets;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;
-(void)setupLayoutSegments;


@end


#endif