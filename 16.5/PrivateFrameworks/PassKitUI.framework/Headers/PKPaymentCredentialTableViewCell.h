// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTCREDENTIALTABLEVIEWCELL_H
#define PKPAYMENTCREDENTIALTABLEVIEWCELL_H

@class UILabel, UIImageView;


#import "PKTableViewCell.h"

@interface PKPaymentCredentialTableViewCell : PKTableViewCell

@property (readonly, nonatomic) UILabel *credentialDetailLabel; // ivar: _credentialDetailLabel
@property (nonatomic) BOOL showingPlaceholder; // ivar: _showingPlaceholder
@property (nonatomic) BOOL snapshotImageHasBorder; // ivar: _snapshotImageHasBorder
@property (readonly, nonatomic) UIImageView *snapshotImageView; // ivar: _snapshotImageView


+(struct CGSize )defaultImageViewSize;
-(id)detailTextLabelColor;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif