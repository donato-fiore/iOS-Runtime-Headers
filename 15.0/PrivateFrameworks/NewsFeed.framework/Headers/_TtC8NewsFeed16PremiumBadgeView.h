// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8NEWSFEED16PREMIUMBADGEVIEW_H
#define _TTC8NEWSFEED16PREMIUMBADGEVIEW_H

@class UIView, _TtC5TeaUI9ShineView;


#import "_TtC8NewsFeed16PremiumBadgeMask.h"

@interface _TtC8NewsFeed16PremiumBadgeView : UIView {
    ? $__lazy_storage_$_shineMaskLayer;
    ? context;
}


@property (nonatomic) BOOL isMotionEnabled; // ivar: isMotionEnabled
@property (nonatomic, retain) _TtC8NewsFeed16PremiumBadgeMask *premiumBadgeMask; // ivar: premiumBadgeMask
@property (nonatomic, readonly) _TtC5TeaUI9ShineView *shineView; // ivar: shineView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif