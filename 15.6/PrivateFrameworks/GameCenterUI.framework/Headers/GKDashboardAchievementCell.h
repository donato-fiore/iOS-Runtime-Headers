// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDACHIEVEMENTCELL_H
#define GKDASHBOARDACHIEVEMENTCELL_H

@class GKAchievement, UILabel, UIView;


#import "GKRectShadowCell.h"
#import "GKResizingLabel.h"
#import "GKAchievementIconView.h"

@interface GKDashboardAchievementCell : GKRectShadowCell

@property (retain, nonatomic) GKAchievement *achievement; // ivar: _achievement
@property (nonatomic) GKResizingLabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) GKAchievementIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) GKAchievement *localAchievement; // ivar: _localAchievement
@property (nonatomic) UILabel *pointsLabel; // ivar: _pointsLabel
@property (nonatomic) UILabel *pointsTextLabel; // ivar: _pointsTextLabel
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (nonatomic) GKResizingLabel *titleLabel; // ivar: _titleLabel


-(void)setupForAchievement:(id)arg0 localAchievement:(id)arg1 ;


@end


#endif