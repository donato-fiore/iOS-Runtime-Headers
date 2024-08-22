// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKACTIONMENUWINDOW_H
#define CKACTIONMENUWINDOW_H

@class UIAutoRotatingWindow;


#import "CKActionMenuView.h"

@interface CKActionMenuWindow : UIAutoRotatingWindow

@property (retain, nonatomic) CKActionMenuView *actionMenuView; // ivar: _actionMenuView
@property (nonatomic) BOOL shouldDismissOnTap; // ivar: _shouldDismissOnTap


+(id)sharedInstance;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)actionMenuGestureRecognized:(id)arg0 ;
-(void)dismissActionMenuViewAnimated:(BOOL)arg0 ;
-(void)presentActionMenuView:(id)arg0 fromPoint:(struct CGPoint )arg1 inView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif