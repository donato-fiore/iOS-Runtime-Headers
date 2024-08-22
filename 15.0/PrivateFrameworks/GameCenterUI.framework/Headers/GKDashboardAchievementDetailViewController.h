// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDACHIEVEMENTDETAILVIEWCONTROLLER_H
#define GKDASHBOARDACHIEVEMENTDETAILVIEWCONTROLLER_H

@class GKAchievement, UILabel, UIButton;


#import "GKDetailViewController.h"
#import "GKAchievementIconView.h"

@interface GKDashboardAchievementDetailViewController : GKDetailViewController

@property (retain, nonatomic) GKAchievement *achievement; // ivar: _achievement
@property (nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) UILabel *disabledLabel; // ivar: _disabledLabel
@property (nonatomic) UIButton *firstButton; // ivar: _firstButton
@property (nonatomic) GKAchievementIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) GKAchievement *localAchievement; // ivar: _localAchievement
@property (nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (nonatomic) UIButton *secondButton; // ivar: _secondButton
@property (nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithAchievement:(id)arg0 localAchievement:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)challenge:(id)arg0 ;
-(void)configureForAchievements;
-(void)share:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif