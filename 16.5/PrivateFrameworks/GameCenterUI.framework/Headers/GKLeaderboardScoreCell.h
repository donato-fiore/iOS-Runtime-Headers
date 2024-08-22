// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLEADERBOARDSCORECELL_H
#define GKLEADERBOARDSCORECELL_H

@class UIView, GKLeaderboardEntry, UILabel, NSLayoutConstraint;
@protocol GKLeaderboardScoreActionDelegate;


#import "GKFocusHighlightingCollectionViewCell.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKLeaderboardScoreCell : GKFocusHighlightingCollectionViewCell

@property (retain, nonatomic) UIView *backView; // ivar: _backView
@property (weak, nonatomic) NSObject<GKLeaderboardScoreActionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) GKLeaderboardEntry *entry; // ivar: _entry
@property (nonatomic) BOOL isLocalPlayerScore; // ivar: _isLocalPlayerScore
@property (nonatomic) BOOL lineVisible;
@property (retain, nonatomic) UIView *monogramColorView; // ivar: _monogramColorView
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerView; // ivar: _playerView
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint; // ivar: _playerViewHeightConstraint
@property (retain, nonatomic) UILabel *rankLabel; // ivar: _rankLabel
@property (retain, nonatomic) UILabel *scoreLabel; // ivar: _scoreLabel
@property (nonatomic) BOOL shouldShowContextMenu; // ivar: _shouldShowContextMenu
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UIView *topLine; // ivar: _topLine


+(id)highRankNib;
+(id)lowRankNib;
+(struct CGSize )defaultSize;
-(BOOL)canBecomeFocused;
-(id)cellBackgroundColor:(BOOL)arg0 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupForLeaderboardEntry:(id)arg0 ;
-(void)updateLayerMask:(id)arg0 ;


@end


#endif