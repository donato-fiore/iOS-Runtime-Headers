// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSOFTWAREUPDATETITLECELL_H
#define PSSOFTWAREUPDATETITLECELL_H

@class UIImage, UIImageView, UIProgressView, UILabel, NSLayoutConstraint;


#import "PSTableCell.h"
#import "PSSoftwareUpdateAnimatedIcon.h"
#import "PSWebContainerView.h"

@interface PSSoftwareUpdateTitleCell : PSTableCell {
    int _progressStyle;
    PSSoftwareUpdateAnimatedIcon *_animatedGearView;
    BOOL _animatingGearView;
}


@property (readonly, nonatomic) UIImage *gearBackgroundImage;
@property (retain, nonatomic) UIImageView *gearBackgroundImageView; // ivar: _gearBackgroundImageView
@property (readonly, nonatomic) UIProgressView *progressBar; // ivar: _progressBar
@property (nonatomic) int progressDisplayStyle;
@property (readonly, nonatomic) PSWebContainerView *releaseNotesSummaryView; // ivar: _releaseNotesSummaryView
@property (readonly, nonatomic) UILabel *updateStatusLabel; // ivar: _updateStatusLabel
@property (retain, nonatomic) NSLayoutConstraint *updateStatusLabelVerticalConstraint; // ivar: _updateStatusLabelVerticalConstraint


+(NSInteger)cellStyle;
-(CGFloat)preferredHeightWithTable:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)newGearBackgroundImageView;
-(id)newProgressBar;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect )arg0 ;
-(id)newUpdateStatusLabel;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)configureAnimatedGearViewFromImageSize:(struct CGSize )arg0 ;
-(void)configureImageView;
-(void)configureProgressBar:(BOOL)arg0 ;
-(void)configurePublisherLabel:(BOOL)arg0 ;
-(void)configureReleaseNotesSummaryView:(BOOL)arg0 ;
-(void)configureUpdateNameLabel:(BOOL)arg0 ;
-(void)configureUpdateStatusLabel:(BOOL)arg0 ;
-(void)createGearIconConstraints;
-(void)layoutSubviews;
-(void)setAnimatingGearView:(BOOL)arg0 ;
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