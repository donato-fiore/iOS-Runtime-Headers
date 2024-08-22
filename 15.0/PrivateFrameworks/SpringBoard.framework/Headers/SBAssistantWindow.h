// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBASSISTANTWINDOW_H
#define SBASSISTANTWINDOW_H



#import "SBWindow.h"
#import "SBAssistantRootViewController.h"

@interface SBAssistantWindow : SBWindow

@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (nonatomic) BOOL touchesPassThroughToSpringBoard; // ivar: _touchesPassThroughToSpringBoard


+(BOOL)_isSecure;
+(BOOL)sb_autorotates;
+(id)defaultLayoutStrategy;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isOpaque;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithScreen:(id)arg0 role:(id)arg1 debugName:(id)arg2 ;
-(void)dealloc;
-(void)setRootViewController:(id)arg0 ;


@end


#endif