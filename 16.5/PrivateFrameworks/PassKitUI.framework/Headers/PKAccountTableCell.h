// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTTABLECELL_H
#define PKACCOUNTTABLECELL_H

@class PSTableCell, UILabel, UIImageView;



@interface PKAccountTableCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
}




+(CGFloat)estimateHeightForCellWithMinimum:(CGFloat)arg0 ;
+(id)subtitleFont;
+(id)titleFont;
-(id)_subtitleColorForAccountState:(NSUInteger)arg0 ;
-(id)_subtitleForAccount:(id)arg0 ;
-(id)_titleForAccount:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_configureCellForAccount:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSpecifier:(id)arg0 ;


@end


#endif