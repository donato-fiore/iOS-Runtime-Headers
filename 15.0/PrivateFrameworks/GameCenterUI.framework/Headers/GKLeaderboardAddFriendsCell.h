// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLEADERBOARDADDFRIENDSCELL_H
#define GKLEADERBOARDADDFRIENDSCELL_H

@class UICollectionViewCell, UIView;


#import "_TtC12GameCenterUI22GKAddFriendsLockupView.h"
#import "_TtC12GameCenterUI14EmptyStateView.h"

@interface GKLeaderboardAddFriendsCell : UICollectionViewCell

@property (weak, nonatomic) _TtC12GameCenterUI22GKAddFriendsLockupView *addFriendsLockupView; // ivar: _addFriendsLockupView
@property (retain, nonatomic) UIView *container; // ivar: _container
@property (nonatomic) NSInteger friendCount; // ivar: _friendCount
@property (nonatomic) BOOL lineVisible;
@property (weak, nonatomic) _TtC12GameCenterUI14EmptyStateView *noFriendsView; // ivar: _noFriendsView
@property (retain, nonatomic) UIView *topLine; // ivar: _topLine


-(struct CGSize )preferredLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)awakeFromNib;
-(void)clearContainer;
-(void)configureAddFriendsLockupWithHandler:(id)arg0 ;
-(void)configureNoFriendsViewWithHandler:(id)arg0 ;


@end


#endif