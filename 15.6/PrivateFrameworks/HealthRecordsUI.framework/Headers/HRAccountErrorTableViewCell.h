// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRACCOUNTERRORTABLEVIEWCELL_H
#define HRACCOUNTERRORTABLEVIEWCELL_H

@class UITableViewCell;



@interface HRAccountErrorTableViewCell : UITableViewCell {
    ? accountErrorView;
}




+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif