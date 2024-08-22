// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCHALLENGEDETAILVIEWCONTROLLER_H
#define GKCHALLENGEDETAILVIEWCONTROLLER_H

@class UIStackView, NSLayoutConstraint, UILabel, GKChallenge, UIView;


#import "GKDashboardCollectionViewController.h"
#import "GKButton.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKChallengeDetailViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) UIStackView *actionStack; // ivar: _actionStack
@property (retain, nonatomic) NSLayoutConstraint *actionStackPortraitBottomConstraint; // ivar: _actionStackPortraitBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *actionStackPortraitTopConstraint; // ivar: _actionStackPortraitTopConstraint
@property (retain, nonatomic) UIStackView *artworkStack; // ivar: _artworkStack
@property (retain, nonatomic) NSLayoutConstraint *artworkStackPortraitTopConstraint; // ivar: _artworkStackPortraitTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *artworkViewHeightConstraint; // ivar: _artworkViewHeightConstraint
@property (retain, nonatomic) UILabel *categoryLabel; // ivar: _categoryLabel
@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (retain, nonatomic) UILabel *challengeByNameLabel; // ivar: _challengeByNameLabel
@property (retain, nonatomic) UIStackView *challengerStack; // ivar: _challengerStack
@property (retain, nonatomic) NSLayoutConstraint *challengerStackLandscapeTopConstraint; // ivar: _challengerStackLandscapeTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *challengerStackPortraitTopConstraint; // ivar: _challengerStackPortraitTopConstraint
@property (retain, nonatomic) GKButton *declineButton; // ivar: _declineButton
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIView *iconView; // ivar: _iconView
@property (retain, nonatomic) GKButton *playNowButton; // ivar: _playNowButton
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView; // ivar: _playerAvatarView
@property (nonatomic) BOOL shouldShowPlay; // ivar: _shouldShowPlay
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithChallenge:(id)arg0 ;
-(id)title;
-(void)adjustFontSizeForLabel:(id)arg0 ;
-(void)adjustLabelFonts;
-(void)challengeOK:(id)arg0 ;
-(void)configureButtons;
-(void)configureForChallenge;
-(void)declinePressed:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)playNowPressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateIconViewWithSubView:(id)arg0 ;
-(void)updateLeaderboardImage;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif