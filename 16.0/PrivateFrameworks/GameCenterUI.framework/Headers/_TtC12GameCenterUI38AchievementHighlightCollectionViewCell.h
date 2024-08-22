// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI38ACHIEVEMENTHIGHLIGHTCOLLECTIONVIEWCELL_H
#define _TTC12GAMECENTERUI38ACHIEVEMENTHIGHLIGHTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel;



@interface _TtC12GameCenterUI38AchievementHighlightCollectionViewCell : UICollectionViewCell {
    ? decorationView;
    ? title;
    ? subtitle;
    ? wantsVerticalLayout;
    ? achievementsTheme;
}


@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif