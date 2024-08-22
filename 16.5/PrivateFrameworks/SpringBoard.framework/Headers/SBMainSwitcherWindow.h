// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINSWITCHERWINDOW_H
#define SBMAINSWITCHERWINDOW_H

@class SBFWindow;



@interface SBMainSwitcherWindow : SBFWindow



+(BOOL)sb_autorotates;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_usesWindowServerHitTesting;
-(NSUInteger)_edgesForSystemGesturesTouchDelay;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif