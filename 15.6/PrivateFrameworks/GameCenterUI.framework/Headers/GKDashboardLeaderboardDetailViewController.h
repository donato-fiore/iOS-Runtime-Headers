// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDLEADERBOARDDETAILVIEWCONTROLLER_H
#define GKDASHBOARDLEADERBOARDDETAILVIEWCONTROLLER_H

@class UILabel, UIButton, GKLeaderboard, GKScore;


#import "GKDetailViewController.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController

@property (nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) UILabel *earnedOnLabel; // ivar: _earnedOnLabel
@property (nonatomic) UIButton *firstButton; // ivar: _firstButton
@property (nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) GKDashboardPlayerPhotoView *playerView; // ivar: _playerView
@property (nonatomic) UIButton *reportProblemButton; // ivar: _reportProblemButton
@property (retain, nonatomic) GKScore *score; // ivar: _score
@property (nonatomic) UIButton *secondButton; // ivar: _secondButton


-(id)initWithScore:(id)arg0 leaderboard:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)challenge:(id)arg0 ;
-(void)configureForScore;
-(void)report:(id)arg0 ;
-(void)share:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif