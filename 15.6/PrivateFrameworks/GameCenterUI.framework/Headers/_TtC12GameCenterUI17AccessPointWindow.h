// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI17ACCESSPOINTWINDOW_H
#define _TTC12GAMECENTERUI17ACCESSPOINTWINDOW_H

@class UIWindow;



@interface _TtC12GameCenterUI17AccessPointWindow : UIWindow {
    ? accessPoint;
    ? parent;
    ? observations;
    ? sinks;
    ? rootView;
    ? layoutView;
    ? hostingView;
    ? leadingConstraint;
    ? trailingConstraint;
    ? topConstraint;
    ? bottomConstraint;
    ? verticalOffset;
    ? horizontalOffset;
}




-(BOOL)_canAffectStatusBarAppearance;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentRect:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(void)dealloc;


@end


#endif