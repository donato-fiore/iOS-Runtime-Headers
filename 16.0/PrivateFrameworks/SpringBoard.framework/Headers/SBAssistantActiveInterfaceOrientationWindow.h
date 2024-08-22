// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBASSISTANTACTIVEINTERFACEORIENTATIONWINDOW_H
#define SBASSISTANTACTIVEINTERFACEORIENTATIONWINDOW_H

@class NSString;
@protocol SBAssistantWindowProtocol;


#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"
#import "SBAssistantRootViewController.h"

@interface SBAssistantActiveInterfaceOrientationWindow : SBSecureMainScreenActiveInterfaceOrientationWindow <SBAssistantWindowProtocol>



@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
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
-(id)initWithWindowScene:(id)arg0 role:(id)arg1 debugName:(id)arg2 ;


@end


#endif