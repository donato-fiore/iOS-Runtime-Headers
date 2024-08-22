// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI33ACHIEVEMENTCARDCOLLECTIONVIEWCELL_H
#define _TTC12GAMECENTERUI33ACHIEVEMENTCARDCOLLECTIONVIEWCELL_H

@class TtC12GameCenterUI22BaseCollectionViewCell;



@interface _TtC12GameCenterUI33AchievementCardCollectionViewCell : TtC12GameCenterUI22BaseCollectionViewCell {
    ? achievementCard;
    ? wantsCompactLayoutMetrics;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif