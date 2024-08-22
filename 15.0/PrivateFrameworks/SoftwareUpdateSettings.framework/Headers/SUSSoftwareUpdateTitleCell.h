// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSSOFTWAREUPDATETITLECELL_H
#define SUSSOFTWAREUPDATETITLECELL_H

@class PSTableCell, UIImageView, UIImage, UIStackView, UILabel, UIProgressView, PSWebContainerView, NSLayoutConstraint;
@protocol SUSUISoftwareUpdateTitleCellDelegate;


#import "SUSSoftwareUpdateAnimatedIcon.h"

@interface SUSSoftwareUpdateTitleCell : PSTableCell {
    int _progressStyle;
    SUSSoftwareUpdateAnimatedIcon *_animatedGearView;
    UIImageView *_imageView;
    UIImage *_updateIcon;
    BOOL _animatingGearView;
    BOOL _showLearnMoreButton;
    UIStackView *_stackView;
}


@property (weak, nonatomic) NSObject<SUSUISoftwareUpdateTitleCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIImage *gearBackgroundImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *learnMoreLabel; // ivar: _learnMoreLabel
@property (readonly, nonatomic) UIProgressView *progressBar; // ivar: _progressBar
@property (nonatomic) int progressDisplayStyle;
@property (readonly, nonatomic) PSWebContainerView *releaseNotesSummaryView; // ivar: _releaseNotesSummaryView
@property (readonly, nonatomic) UILabel *updateStatusLabel; // ivar: _updateStatusLabel
@property (retain, nonatomic) NSLayoutConstraint *updateStatusLabelVerticalConstraint; // ivar: _updateStatusLabelVerticalConstraint


+(NSInteger)cellStyle;
-(CGFloat)preferredHeightWithTable:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 updateIcon:(id)arg3 showLearnMore:(BOOL)arg4 delegate:(id)arg5 ;
-(id)newGearBackgroundImageView;
-(id)newLearnMoreLabel;
-(id)newProgressBar;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect )arg0 ;
-(id)newUpdateIconImageView;
-(id)newUpdateStatusLabel;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)configureAnimatedGearViewFromImageSize:(struct CGSize )arg0 ;
-(void)configureImageView;
-(void)configureProgressBar:(BOOL)arg0 ;
-(void)configurePublisherLabel:(BOOL)arg0 ;
-(void)configureReleaseNotesSummaryView:(BOOL)arg0 ;
-(void)configureUpdateImageViewFromImageSize:(struct CGSize )arg0 ;
-(void)configureUpdateNameLabel:(BOOL)arg0 ;
-(void)configureUpdateStatusLabel:(BOOL)arg0 ;
-(void)createGearIconConstraints;
-(void)createUpdateIconConstraints;
-(void)handleLearnMoreTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)setAnimatingGearView:(BOOL)arg0 ;
-(void)setLearnMoreText:(id)arg0 ;
-(void)setProgress:(float)arg0 ;
-(void)setPublisherText:(id)arg0 ;
-(void)setReleaseNotesSummary:(id)arg0 ;
-(void)setStatusMessage:(id)arg0 ;
-(void)setUpdateName:(id)arg0 ;
-(void)setupViews;
-(void)updateConstraints;
-(void)updateProgressTintColor;


@end


#endif