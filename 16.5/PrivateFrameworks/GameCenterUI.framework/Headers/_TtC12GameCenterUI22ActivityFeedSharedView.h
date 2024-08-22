// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI22ACTIVITYFEEDSHAREDVIEW_H
#define _TTC12GAMECENTERUI22ACTIVITYFEEDSHAREDVIEW_H

@class UIView, NSString;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI22ActivityFeedSharedView : UIView {
    ? titleLabel;
    ? playerGroupView;
    ? playerGroupSubartworkView;
    ? objectGraph;
    ? componentData;
}


@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif