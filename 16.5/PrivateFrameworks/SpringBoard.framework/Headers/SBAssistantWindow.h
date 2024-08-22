// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBASSISTANTWINDOW_H
#define SBASSISTANTWINDOW_H

@class NSString;
@protocol SBAssistantWindowProtocol;


#import "SBSecureWindow.h"
#import "SBAssistantRootViewController.h"

@interface SBAssistantWindow : SBSecureWindow <SBAssistantWindowProtocol>



@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL touchesPassThroughToSpringBoard; // ivar: _touchesPassThroughToSpringBoard


+(BOOL)sb_autorotates;
+(id)defaultLayoutStrategy;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isOpaque;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hostedSceneIdentityTokens;
-(id)initWithWindowScene:(id)arg0 role:(id)arg1 debugName:(id)arg2 ;
-(void)dealloc;
-(void)setRootViewController:(id)arg0 ;


@end


#endif