// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARTVVISUALSTYLE_H
#define _UINAVIGATIONBARTVVISUALSTYLE_H

@class UINavigationBarVisualStyle;



@interface _UINavigationBarTVVisualStyle : UINavigationBarVisualStyle



-(CGFloat)barHeight;
-(CGFloat)buttonFontSize;
-(CGFloat)buttonHeight;
-(CGFloat)buttonImagePadding;
-(CGFloat)headingFontSize;
-(CGFloat)interItemSpace;
-(CGFloat)leftTitleMargin;
-(CGFloat)navigationItemBaselineOffset;
-(CGFloat)topMargin;
-(id)buttonFontForStyle:(NSInteger)arg0 ;
-(id)defaultTitleColorForUserInterfaceStyle:(NSInteger)arg0 barStyle:(NSInteger)arg1 ;
-(id)defaultTitleFont;
-(id)timingFunctionForAnimationInView:(id)arg0 withKeyPath:(id)arg1 isInteractive:(BOOL)arg2 ;
-(struct UIEdgeInsets )buttonContentEdgeInsets;


@end


#endif