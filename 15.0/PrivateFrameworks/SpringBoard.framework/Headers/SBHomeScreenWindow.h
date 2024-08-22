// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(id)autorotationPreventionReasons;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithScreen:(id)arg0 scene:(id)arg1 rootViewController:(id)arg2 layoutStrategy:(id)arg3 role:(id)arg4 debugName:(id)arg5 ;


@end


#endif