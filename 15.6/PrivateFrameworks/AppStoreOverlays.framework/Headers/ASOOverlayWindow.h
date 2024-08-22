// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASOOVERLAYWINDOW_H
#define ASOOVERLAYWINDOW_H

@class UIApplicationRotationFollowingWindow;



@interface ASOOverlayWindow : UIApplicationRotationFollowingWindow



+(BOOL)_isSystemWindow;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)isInternalWindow;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 ;


@end


#endif