// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUIHEADERBLURVIEW_H
#define SPUIHEADERBLURVIEW_H

@class UIVisualEffectView, UIColor;



@interface SPUIHeaderBlurView : UIVisualEffectView

@property (retain) UIColor *baseTintColor; // ivar: _baseTintColor
@property (nonatomic) BOOL keyboardIsUp; // ivar: _keyboardIsUp
@property (nonatomic) BOOL useInPlaceFilteredBlur; // ivar: _useInPlaceFilteredBlur


+(CGFloat)backgroundViewBlurAlphaForProgress:(CGFloat)arg0 isDarkBackground:(BOOL)arg1 ;
-(id)init;
-(void)keyboardWillHide;
-(void)keyboardWillShow;
-(void)setTintColor:(id)arg0 ;
-(void)updateEffect;


@end


#endif