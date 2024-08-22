// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSVIDEOCELL_H
#define STSVIDEOCELL_H

@class UIButton, UIView, UILabel, UIImageView, NSMutableArray, NSString, UIImage;


#import "STSImageCell.h"

@interface STSVideoCell : STSImageCell {
    UIButton *_playButton;
    UIView *_footerContainer;
    UILabel *_titleLabel;
    UIImageView *_providerIconView;
    UILabel *_subtitleLabel;
    UILabel *_providerLabel;
    UILabel *_durationLabel;
    NSMutableArray *_constraints;
}


@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) id *playButtonAction; // ivar: _playButtonAction
@property (retain, nonatomic) UIImage *providerIcon;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


-(CGFloat)imageAspectRatio;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didPressPlay;
-(void)_updateHiddenViewsAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateConstraints;


@end


#endif