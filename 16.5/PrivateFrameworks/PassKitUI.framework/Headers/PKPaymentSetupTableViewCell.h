// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPTABLEVIEWCELL_H
#define PKPAYMENTSETUPTABLEVIEWCELL_H

@class UILabel, UIImageView, UIImage;


#import "PKTableViewCell.h"

@interface PKPaymentSetupTableViewCell : PKTableViewCell {
    UILabel *_betaLabel;
    UIImageView *_cardImageView;
    UIImageView *_iconImageView;
    NSInteger _thumbnailType;
}


@property (nonatomic) BOOL showBetaBadge; // ivar: _showBetaBadge
@property (readonly, nonatomic) UIImage *thumbnail; // ivar: _thumbnail


+(struct CGSize )defaultImageViewSize;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif