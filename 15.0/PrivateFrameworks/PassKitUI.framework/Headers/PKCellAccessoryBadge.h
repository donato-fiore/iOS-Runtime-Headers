// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCELLACCESSORYBADGE_H
#define PKCELLACCESSORYBADGE_H

@class UIView, UILabel;



@interface PKCellAccessoryBadge : UIView {
    UILabel *_titleLabel;
}




+(id)accessoryBadgeWithTitle:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 title:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif