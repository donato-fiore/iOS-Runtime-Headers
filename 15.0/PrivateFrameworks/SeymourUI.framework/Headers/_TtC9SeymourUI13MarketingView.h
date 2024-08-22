// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI13MARKETINGVIEW_H
#define _TTC9SEYMOURUI13MARKETINGVIEW_H

@class UIView, UIImageView;



@interface _TtC9SeymourUI13MarketingView : UIView {
    ? delegate;
    ? isLoading;
    ? backgroundImageView;
    ? layout;
    ? stackView;
    ? titleLabel;
    ? subtitleLabel;
    ? actionItemTitles;
    ? actionItemViews;
    ? offer;
    ? pendingOffer;
}


@property (nonatomic, readonly) UIImageView *logoImageView; // ivar: logoImageView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)actionItemButtonTapped:(id)arg0 ;
-(void)dismissButtonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif