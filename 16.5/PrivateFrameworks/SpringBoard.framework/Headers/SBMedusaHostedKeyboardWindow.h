// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMEDUSAHOSTEDKEYBOARDWINDOW_H
#define SBMEDUSAHOSTEDKEYBOARDWINDOW_H

@class NSString, NSMutableArray;
@protocol BSInvalidatable, UIScenePresenter;


#import "SBWindow.h"
#import "SBMedusaHostedKeyboardWindowLevelAssertion.h"

@interface SBMedusaHostedKeyboardWindow : SBWindow <BSInvalidatable>

 {
    id<UIScenePresenter> *_remoteHostedKeyboardScenePresenter;
    SBMedusaHostedKeyboardWindowLevelAssertion *_defaultWindowLevelAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *windowLevelAssertions; // ivar: _windowLevelAssertions


+(BOOL)_isSecure;
+(BOOL)autorotates;
-(BOOL)_shouldControlAutorotation;
-(BOOL)isActive;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 keyboardScene:(id)arg1 ;
-(id)newWindowLevelAssertionWithPriority:(NSUInteger)arg0 windowLevel:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_updateWindowLevel;
-(void)addWindowLevelAssertion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)medusaHostedKeyboardWindowWillHide:(id)arg0 ;
-(void)medusaHostedKeyboardWindowWillShow:(id)arg0 ;
-(void)removeWindowLevelAssertion:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif