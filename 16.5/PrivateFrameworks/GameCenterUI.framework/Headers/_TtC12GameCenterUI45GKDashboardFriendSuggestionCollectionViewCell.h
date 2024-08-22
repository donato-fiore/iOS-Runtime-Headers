// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI45GKDASHBOARDFRIENDSUGGESTIONCOLLECTIONVIEWCELL_H
#define _TTC12GAMECENTERUI45GKDASHBOARDFRIENDSUGGESTIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;


#import "_TtC12GameCenterUI21SmallFriendLockupView.h"

@interface _TtC12GameCenterUI45GKDashboardFriendSuggestionCollectionViewCell : UICollectionViewCell {
    ? tapHandler;
}


@property (nonatomic, readonly) _TtC12GameCenterUI21SmallFriendLockupView *friendSuggesationLockupView; // ivar: friendSuggesationLockupView
@property (nonatomic, copy) id *tapHandler;


+(CGFloat)horizontalPadding;
+(struct CGSize )sizeWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)applyWithContact:(id)arg0 previouslyInvited:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif