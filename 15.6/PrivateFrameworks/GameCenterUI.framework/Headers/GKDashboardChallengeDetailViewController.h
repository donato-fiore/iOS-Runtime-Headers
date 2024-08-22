// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDCHALLENGEDETAILVIEWCONTROLLER_H
#define GKDASHBOARDCHALLENGEDETAILVIEWCONTROLLER_H

@class GKChallenge, UIButton, UILabel, NSLayoutConstraint;


#import "GKDetailViewController.h"
#import "GKAchievementIconView.h"

@interface GKDashboardChallengeDetailViewController : GKDetailViewController

@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (nonatomic) UIButton *declineButton; // ivar: _declineButton
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) UILabel *fromLabel; // ivar: _fromLabel
@property (nonatomic) NSLayoutConstraint *iconHeightConstraint; // ivar: _iconHeightConstraint
@property (nonatomic) GKAchievementIconView *iconView; // ivar: _iconView
@property (nonatomic) UIButton *playButton; // ivar: _playButton
@property (nonatomic) BOOL shouldShowPlay; // ivar: _shouldShowPlay
@property (nonatomic) NSLayoutConstraint *speechToFromConstraint; // ivar: _speechToFromConstraint
@property (nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (nonatomic) CGFloat topMargin; // ivar: _topMargin


-(id)initWithChallenge:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(void)challengeOK:(id)arg0 ;
-(void)configureForChallenge;
-(void)decline:(id)arg0 ;
-(void)play:(id)arg0 ;
-(void)updateLeaderboardImage;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif