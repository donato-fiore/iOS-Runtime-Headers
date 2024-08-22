// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSPENDINGSUMMARYACCOUNTUSERCELL_H
#define PKSPENDINGSUMMARYACCOUNTUSERCELL_H

@class UILabel, UIImageView, NSString, UIImage;


#import "PKDashboardCollectionViewCell.h"

@interface PKSpendingSummaryAccountUserCell : PKDashboardCollectionViewCell {
    UILabel *_amountLabel;
    UILabel *_nameLabel;
    UIImageView *_avatarView;
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) NSString *amount; // ivar: _amount
@property (copy, nonatomic) UIImage *avatar; // ivar: _avatar
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif