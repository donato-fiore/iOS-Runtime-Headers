// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUITRAYBUTTON_H
#define APUITRAYBUTTON_H

@class UIButton;



@interface APUITrayButton : UIButton



+(CGFloat)standardHeight;
+(id)buttonWithType:(NSInteger)arg0 ;
-(id)_buttonFont;
-(id)_fontTextStyle;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif