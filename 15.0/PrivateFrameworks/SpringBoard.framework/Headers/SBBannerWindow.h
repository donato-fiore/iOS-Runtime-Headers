// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBANNERWINDOW_H
#define SBBANNERWINDOW_H



#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"

@interface SBBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow



+(BOOL)layoutContentViewControllerWithConstraints;
+(id)_traitsArbiterOrientationActuationRole;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(id)init;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif