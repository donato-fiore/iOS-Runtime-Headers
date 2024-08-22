// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHEVRONBUTTON_H
#define HUCHEVRONBUTTON_H

@class UIControl, UIImageView, UIStackView, UILabel;



@interface HUChevronButton : UIControl

@property (retain, nonatomic) UIImageView *chevronImageView; // ivar: _chevronImageView
@property (retain, nonatomic) UIStackView *containerView; // ivar: _containerView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif