// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI15TITLEHEADERVIEW_H
#define _TTC12GAMECENTERUI15TITLEHEADERVIEW_H

@class TtC12GameCenterUI26BaseCollectionReusableView, UIView, NSString;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI15TitleHeaderView : TtC12GameCenterUI26BaseCollectionReusableView {
    ? detailLabel;
    ? style;
    ? accessory;
    ? accessoryAction;
    ? separatorLineView;
    ? separatorInset;
    ? allowsAccessibilityLayouts;
    ? avoidanceRegion;
}


@property (nonatomic, readonly) UIView *accessibilityAccessoryView;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, retain) UIView *accessoryView; // ivar: accessoryView
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *titleLabel; // ivar: titleLabel


-(BOOL)_disableRasterizeInAnimations;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didTapWithAccessoryView:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif