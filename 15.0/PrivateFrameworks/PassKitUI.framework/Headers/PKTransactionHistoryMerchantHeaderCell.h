// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONHISTORYMERCHANTHEADERCELL_H
#define PKTRANSACTIONHISTORYMERCHANTHEADERCELL_H

@class UIVisualEffectView, UIView, UIVisualEffect, UIColor;


#import "PKDashboardCollectionViewCell.h"
#import "PKSplashImageHeaderView.h"

@interface PKTransactionHistoryMerchantHeaderCell : PKDashboardCollectionViewCell {
    UIVisualEffectView *_overlayEffectView;
    UIView *_shadowView;
}


@property (readonly, nonatomic) PKSplashImageHeaderView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat overlayAlpha; // ivar: _overlayAlpha
@property (retain, nonatomic) UIVisualEffect *overlayEffect; // ivar: _overlayEffect
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif