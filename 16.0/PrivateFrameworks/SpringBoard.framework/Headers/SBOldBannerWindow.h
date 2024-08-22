// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBOLDBANNERWINDOW_H
#define SBOLDBANNERWINDOW_H



#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"

@interface SBOldBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow



+(BOOL)layoutContentViewControllerWithConstraints;
+(id)_traitsArbiterOrientationActuationRole;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithWindowScene:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif