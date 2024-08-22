// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYRADIOCELL_H
#define PKAPPLYRADIOCELL_H

@class UICollectionViewCell, UILabel, UIButton, NSString;



@interface PKApplyRadioCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UIButton *_button;
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic) BOOL radioButtonSelected; // ivar: _radioButtonSelected
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif