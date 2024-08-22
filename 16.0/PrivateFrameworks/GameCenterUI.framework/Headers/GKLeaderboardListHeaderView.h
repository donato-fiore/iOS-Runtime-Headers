// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLEADERBOARDLISTHEADERVIEW_H
#define GKLEADERBOARDLISTHEADERVIEW_H

@class UICollectionReusableView, UILabel;



@interface GKLeaderboardListHeaderView : UICollectionReusableView

@property (nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)defaultHeight;


@end


#endif