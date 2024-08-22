// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSTARTPAGESECTIONHEADER_H
#define SFSTARTPAGESECTIONHEADER_H

@class UICollectionReusableView, NSLayoutConstraint, UIStackView, UIVisualEffectView, NSArray;


#import "SFBannerCell.h"
#import "SFStartPageSectionHeaderTitleView.h"
#import "SFBannerModel.h"

@interface SFStartPageSectionHeader : UICollectionReusableView {
    SFBannerCell *_bannerView;
    NSLayoutConstraint *_bannerViewBottomConstraint;
    UIStackView *_buttonStackView;
    NSLayoutConstraint *_titleBottomConstraint;
    SFStartPageSectionHeaderTitleView *_titleView;
    UIVisualEffectView *_separatorView;
    NSLayoutConstraint *_stackLeadingConstraint;
    NSLayoutConstraint *_stackCenterXConstraint;
}


@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) SFBannerModel *banner; // ivar: _banner
@property (nonatomic) CGFloat bottomGap;


+(id)reuseIdentifier;
-(id)_disclosureButtonForLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createSeparatorViewIfNeeded;
-(void)layoutSubviews;
-(void)setModel:(id)arg0 visualStyleProvider:(id)arg1 resolvingActionsUsingBlock:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewsDependingOnCustomTraits;


@end


#endif