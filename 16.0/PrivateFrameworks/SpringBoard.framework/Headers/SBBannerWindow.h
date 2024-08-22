// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBANNERWINDOW_H
#define SBBANNERWINDOW_H

@class SBFSecureWindow;



@interface SBBannerWindow : SBFSecureWindow



-(BOOL)_canBecomeKeyWindow;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif