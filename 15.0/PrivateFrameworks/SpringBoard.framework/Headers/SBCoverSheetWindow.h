// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETWINDOW_H
#define SBCOVERSHEETWINDOW_H



#import "SBSecureWindow.h"

@interface SBCoverSheetWindow : SBSecureWindow



+(BOOL)sb_autorotates;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif