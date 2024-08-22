// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIROUNDBUTTON_H
#define VUIROUNDBUTTON_H

@class UIView, UIButton, UIImage, UIStackView, NSArray;
@protocol VUIRoundButtonDelegate;



@interface VUIRoundButton : UIView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) UIImage *buttonImage; // ivar: _buttonImage
@property (weak, nonatomic) NSObject<VUIRoundButtonDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIStackView *textLabelStackView; // ivar: _textLabelStackView
@property (retain, nonatomic) NSArray *textLabels; // ivar: _textLabels


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setUpViews;
-(void)buttonPressed:(id)arg0 ;
-(void)buttonReleased:(id)arg0 ;
-(void)buttonSelected:(id)arg0 ;
-(void)configureTextStackView;


@end


#endif