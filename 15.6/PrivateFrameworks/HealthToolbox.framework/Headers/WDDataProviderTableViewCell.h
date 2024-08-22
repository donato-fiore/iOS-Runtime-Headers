// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDATAPROVIDERTABLEVIEWCELL_H
#define WDDATAPROVIDERTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIButton, NSLayoutConstraint;



@interface WDDataProviderTableViewCell : UITableViewCell {
    UILabel *_inactiveLabel;
    UIButton *_checkmarkButton;
    NSLayoutConstraint *_iconImageWidth;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) NSLayoutConstraint *checkmarkLeadingConstraint; // ivar: _checkmarkLeadingConstraint
@property (readonly, nonatomic) CGSize iconSize;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupUI;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDisplayName:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setIconImage:(id)arg0 ;


@end


#endif