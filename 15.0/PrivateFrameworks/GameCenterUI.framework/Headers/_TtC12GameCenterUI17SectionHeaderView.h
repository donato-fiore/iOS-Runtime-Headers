// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI17SECTIONHEADERVIEW_H
#define _TTC12GAMECENTERUI17SECTIONHEADERVIEW_H

@class UICollectionReusableView, UILabel;



@interface _TtC12GameCenterUI17SectionHeaderView : UICollectionReusableView {
    ? avoidanceRegion;
    ? achievementsTheme;
    ? sectionHeaderLabel;
}


@property (nonatomic, readonly) UILabel *accessibilitySectionHeaderLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif