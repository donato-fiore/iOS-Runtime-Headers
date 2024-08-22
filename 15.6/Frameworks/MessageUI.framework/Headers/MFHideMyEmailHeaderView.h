// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFHIDEMYEMAILHEADERVIEW_H
#define MFHIDEMYEMAILHEADERVIEW_H

@class UIStackView, UIListContentView, UIButton;



@interface MFHideMyEmailHeaderView : UIStackView {
    UIListContentView *_contentView;
    UIButton *_infoButton;
}




-(id)initWithFrame:(struct CGRect )arg0 address:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)infoButtonPressed:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif