// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDMESSAGEACTIONCELL_H
#define PKDASHBOARDMESSAGEACTIONCELL_H

@class UITableViewCell, UILabel, UIImageView, UIActivityIndicatorView, UIFont, NSString, UIColor;



@interface PKDashboardMessageActionCell : UITableViewCell {
    UILabel *_titleLabel;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinnerView;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (copy, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif