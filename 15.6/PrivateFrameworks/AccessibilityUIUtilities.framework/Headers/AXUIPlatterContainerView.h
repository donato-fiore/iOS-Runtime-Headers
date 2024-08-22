// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIPLATTERCONTAINERVIEW_H
#define AXUIPLATTERCONTAINERVIEW_H

@class UIView, UIBlurEffect, NSString;



@interface AXUIPlatterContainerView : UIView

@property (readonly, nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIBlurEffect *platterBlurEffect; // ivar: _platterBlurEffect
@property (readonly, nonatomic) UIView *platterView; // ivar: _platterView
@property (readonly, nonatomic) CGFloat platterWidth;
@property (readonly, nonatomic) NSString *primaryTextStyle;
@property (readonly, nonatomic) BOOL shouldMimicNotificationBannerTopOffset;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif