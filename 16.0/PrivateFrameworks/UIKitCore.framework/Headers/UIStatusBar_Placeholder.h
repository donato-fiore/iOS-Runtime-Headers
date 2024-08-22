// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBAR_PLACEHOLDER_H
#define UISTATUSBAR_PLACEHOLDER_H

@class Base;



@interface UIStatusBar_Placeholder : Base



+(CGFloat)_heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 forStatusBarFrame:(BOOL)arg2 inWindow:(id)arg3 isAzulBLinked:(BOOL)arg4 ;
-(CGFloat)defaultDoubleHeight;
-(NSInteger)currentStyle;
-(id)_initWithFrame:(struct CGRect )arg0 showForegroundView:(BOOL)arg1 wantsServer:(BOOL)arg2 inProcessStateProvider:(id)arg3 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_requestStyle:(NSInteger)arg0 partStyles:(id)arg1 legibilityStyle:(NSInteger)arg2 foregroundColor:(id)arg3 animationParameters:(id)arg4 forced:(BOOL)arg5 ;
-(void)_setHidden:(BOOL)arg0 animationParameters:(id)arg1 ;
-(void)setForegroundColor:(id)arg0 animationParameters:(id)arg1 ;
-(void)setLegibilityStyle:(NSInteger)arg0 animationParameters:(id)arg1 ;
-(void)setStyleRequest:(id)arg0 animationParameters:(id)arg1 ;


@end


#endif