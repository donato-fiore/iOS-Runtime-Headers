// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUIP33_E93A106C72447D8B59D99814DDD0B3D39BADGEVIEW_H
#define _TTC12GAMECENTERUIP33_E93A106C72447D8B59D99814DDD0B3D39BADGEVIEW_H

@class UIView;



@interface _TtC12GameCenterUIP33_E93A106C72447D8B59D99814DDD0B3D39BadgeView : UIView {
    ? badgeSize;
    ? badgeBorderWidth;
    ? badgeTransparentMaskLayer;
    ? attachedView;
    ? kvoFrameToken;
}


@property (nonatomic) CGRect frame;
@property (nonatomic) BOOL hidden;


-(BOOL)isHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif