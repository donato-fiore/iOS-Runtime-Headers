// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLEADERBOARDSECTIONHEADERVIEW_H
#define GKLEADERBOARDSECTIONHEADERVIEW_H

@class UICollectionReusableView, UIStackView, NSLayoutConstraint, GKGameRecord, GKLeaderboard;


#import "GKLeaderboardMetadataView.h"

@interface GKLeaderboardSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIStackView *container; // ivar: _container
@property (retain, nonatomic) NSLayoutConstraint *contentInsetBottom; // ivar: _contentInsetBottom
@property (retain, nonatomic) NSLayoutConstraint *contentInsetLeading; // ivar: _contentInsetLeading
@property (retain, nonatomic) NSLayoutConstraint *contentInsetTop; // ivar: _contentInsetTop
@property (retain, nonatomic) NSLayoutConstraint *contentInsetTrailing; // ivar: _contentInsetTrailing
@property (nonatomic) BOOL dataUpdated; // ivar: _dataUpdated
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (retain, nonatomic) GKLeaderboardMetadataView *personalView; // ivar: _personalView
@property (retain, nonatomic) GKLeaderboardMetadataView *socialView; // ivar: _socialView


-(id)attributedStringWithSymbol:(id)arg0 ;
-(id)formattedNumber:(id)arg0 ;
-(void)awakeFromNib;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateHighlightsWithGameRecord:(id)arg0 leaderboardCount:(NSInteger)arg1 setCount:(NSInteger)arg2 ;
-(void)updateLayout;


@end


#endif