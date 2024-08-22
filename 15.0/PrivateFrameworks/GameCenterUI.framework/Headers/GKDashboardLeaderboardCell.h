// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDLEADERBOARDCELL_H
#define GKDASHBOARDLEADERBOARDCELL_H

@class UICollectionViewCell, NSString, UILabel, UIImageView, GKLeaderboard, GKLeaderboardSet, UIView, UIColor;



@interface GKDashboardLeaderboardCell : UICollectionViewCell

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet; // ivar: _leaderboardSet
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIColor *titleLabelColor; // ivar: _titleLabelColor


-(BOOL)canBecomeFocused;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateImage;
-(void)updateOverlay;
-(void)updateRank;


@end


#endif