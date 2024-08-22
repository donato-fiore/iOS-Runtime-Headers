// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLEADERBOARDCELL_H
#define GKLEADERBOARDCELL_H

@class UICollectionViewCell, NSString, UIStackView, UILabel, NSArray, UIVisualEffectView, UIView, NSLayoutConstraint, UIImageView, GKLeaderboard, GKLeaderboardSet, UIColor;



@interface GKLeaderboardCell : UICollectionViewCell

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) UIStackView *containerStackView; // ivar: _containerStackView
@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (retain, nonatomic) NSArray *customBackgroundBlur; // ivar: _customBackgroundBlur
@property (retain, nonatomic) NSString *dataToken; // ivar: _dataToken
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) UIView *iconContainer; // ivar: _iconContainer
@property (retain, nonatomic) NSLayoutConstraint *iconContainerHeight; // ivar: _iconContainerHeight
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet; // ivar: _leaderboardSet
@property (retain, nonatomic) NSLayoutConstraint *minimumIconHeight; // ivar: _minimumIconHeight
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIColor *titleLabelColor; // ivar: _titleLabelColor


-(BOOL)canBecomeFocused;
-(void)addVisualEffect;
-(void)awakeFromNib;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupFallbackIcon;
-(void)updateImage;
-(void)updateLayout;
-(void)updateOverlay;
-(void)updateRank;
-(void)updateSummary;


@end


#endif