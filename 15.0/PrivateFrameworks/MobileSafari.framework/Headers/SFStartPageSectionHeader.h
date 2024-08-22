// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTARTPAGESECTIONHEADER_H
#define SFSTARTPAGESECTIONHEADER_H

@class UICollectionReusableView, UIStackView, UIButton, NSLayoutConstraint, NSArray, NSString;


#import "SFBannerCell.h"
#import "SFBannerModel.h"

@interface SFStartPageSectionHeader : UICollectionReusableView {
    SFBannerCell *_bannerView;
    UIStackView *_buttonStackView;
    UIButton *_titleButton;
    NSLayoutConstraint *_bannerViewBottomConstraint;
    NSLayoutConstraint *_titleButtonBottomConstraint;
}


@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) SFBannerModel *banner; // ivar: _banner
@property (nonatomic) CGFloat bottomGap;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL usesLargeTitle; // ivar: _usesLargeTitle


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buildTitleLabel;
-(void)buttonShapesEnabledStatusDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setModel:(id)arg0 resolvingActionsUsingBlock:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewsDependingOnCustomTraits;


@end


#endif