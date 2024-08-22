// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDLEADERBOARDSCORECELL_H
#define GKDASHBOARDLEADERBOARDSCORECELL_H

@class UIView, UILabel, NSLayoutConstraint, GKScore;


#import "GKRectShadowCell.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell

@property (nonatomic) UIView *bottomLine; // ivar: _bottomLine
@property (nonatomic) BOOL linesVisible;
@property (nonatomic) UIView *monogramColorView; // ivar: _monogramColorView
@property (nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) GKDashboardPlayerPhotoView *playerView; // ivar: _playerView
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint; // ivar: _playerViewHeightConstraint
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (nonatomic) UILabel *rankLabel; // ivar: _rankLabel
@property (retain, nonatomic) GKScore *score; // ivar: _score
@property (nonatomic) UILabel *scoreLabel; // ivar: _scoreLabel
@property (nonatomic) UIView *topLine; // ivar: _topLine


+(id)highRankNib;
+(id)lowRankNib;
+(struct CGSize )defaultSize;
-(void)awakeFromNib;
-(void)setupForScore:(id)arg0 ;


@end


#endif