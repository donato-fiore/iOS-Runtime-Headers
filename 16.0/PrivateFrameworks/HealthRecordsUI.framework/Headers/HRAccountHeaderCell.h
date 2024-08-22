// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRACCOUNTHEADERCELL_H
#define HRACCOUNTHEADERCELL_H

@class UITableViewCell;



@interface HRAccountHeaderCell : UITableViewCell {
    ? accountView;
    ? paddedView;
}




+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureWithAccount:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif