// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUIHEADERBLURVIEW_H
#define SPUIHEADERBLURVIEW_H

@class UIVisualEffectView, UIColor;



@interface SPUIHeaderBlurView : UIVisualEffectView

@property (retain) UIColor *baseTintColor; // ivar: _baseTintColor
@property (nonatomic) BOOL useInPlaceFilteredBlur; // ivar: _useInPlaceFilteredBlur


+(CGFloat)backgroundViewBlurAlphaForProgress:(CGFloat)arg0 isDarkBackground:(BOOL)arg1 ;
-(id)init;
-(void)setTintColor:(id)arg0 ;
-(void)updateEffect;


@end


#endif