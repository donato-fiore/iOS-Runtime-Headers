// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10PODCASTSUI23EPISODEUPSELLBANNERVIEW_H
#define _TTC10PODCASTSUI23EPISODEUPSELLBANNERVIEW_H

@class UIControl;



@interface _TtC10PodcastsUI23EpisodeUpsellBannerView : UIControl {
    ? tapBannerBlock;
    ? tapCloseButtonBlock;
    ? contentView;
    ? artworkContainerView;
    ? titleLabel;
    ? $__lazy_storage_$_subtitleLabel;
    ? $__lazy_storage_$_dismissButton;
    ? $__lazy_storage_$_tapBannerGestureRecognizer;
    ? $__lazy_storage_$_textLayout;
    ? $__lazy_storage_$_titleLabelCenterYConstraint;
    ? $__lazy_storage_$_subtitleTopAnchorConstraint;
    ? $__lazy_storage_$_subtitleBottomAnchorConstraint;
    ? $__lazy_storage_$_titleBottomAnchorConstraint;
    ? config;
    ? hoverRecognizer;
    ? isHovering;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cellTapped;
-(void)closeButtonTapped;
-(void)didHover:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif