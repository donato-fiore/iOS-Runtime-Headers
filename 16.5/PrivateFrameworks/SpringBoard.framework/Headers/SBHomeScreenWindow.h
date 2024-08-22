// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENWINDOW_H
#define SBHOMESCREENWINDOW_H



#import "SBWindow.h"
#import "SBHomeScreenViewController.h"

@interface SBHomeScreenWindow : SBWindow

@property (readonly, nonatomic) SBHomeScreenViewController *homeScreenViewController;


+(BOOL)sb_autorotates;
+(struct CGRect )constrainFrameToScreen:(struct CGRect )arg0 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isContentHidden;
-(BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
-(id)autorotationPreventionReasons;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 rootViewController:(id)arg1 layoutStrategy:(id)arg2 role:(id)arg3 debugName:(id)arg4 ;


@end


#endif