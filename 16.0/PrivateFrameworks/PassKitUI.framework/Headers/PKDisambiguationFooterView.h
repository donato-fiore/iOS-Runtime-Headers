// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISAMBIGUATIONFOOTERVIEW_H
#define PKDISAMBIGUATIONFOOTERVIEW_H

@class UIView, UIButton, UILabel;



@interface PKDisambiguationFooterView : UIView {
    UIButton *_actionButton;
    UIButton *_secondaryActionButton;
}


@property (nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (readonly, retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) CGFloat secondaryActionTopPadding; // ivar: _secondaryActionTopPadding
@property (nonatomic) CGFloat topPadding; // ivar: _topPadding


+(id)buttonWithTitle:(id)arg0 textStyle:(id)arg1 action:(id)arg2 ;
-(CGFloat)_recommendedSecondaryActionTopPaddingForTableView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 action:(id)arg1 secondaryAction:(id)arg2 title:(id)arg3 secondaryTitle:(id)arg4 desscription:(id)arg5 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)sizeToFitForTableView:(id)arg0 ;


@end


#endif