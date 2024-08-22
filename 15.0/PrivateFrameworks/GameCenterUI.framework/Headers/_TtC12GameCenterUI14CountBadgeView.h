// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI14COUNTBADGEVIEW_H
#define _TTC12GAMECENTERUI14COUNTBADGEVIEW_H

@class UIView, NSLayoutYAxisAnchor;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI14CountBadgeView : UIView {
    ? size;
    ? countLabel;
}


@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityCountLabel;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif