// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBASSISTANTACTIVEINTERFACEORIENTATIONWINDOW_H
#define SBASSISTANTACTIVEINTERFACEORIENTATIONWINDOW_H



#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"
#import "SBAssistantRootViewController.h"

@interface SBAssistantActiveInterfaceOrientationWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (nonatomic) BOOL touchesPassThroughToSpringBoard; // ivar: _touchesPassThroughToSpringBoard


+(BOOL)_isSecure;
+(BOOL)sb_autorotates;
+(id)_traitsArbiterOrientationActuationRole;
+(id)defaultLayoutStrategy;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)isOpaque;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithRole:(id)arg0 debugName:(id)arg1 ;


@end


#endif