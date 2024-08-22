// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMEDUSAHOSTEDKEYBOARDWINDOW_H
#define SBMEDUSAHOSTEDKEYBOARDWINDOW_H

@class NSMutableArray;
@protocol UIScenePresenter;


#import "SBWindow.h"
#import "SBMedusaHostedKeyboardWindowLevelAssertion.h"

@interface SBMedusaHostedKeyboardWindow : SBWindow {
    id<UIScenePresenter> *_remoteHostedKeyboardScenePresenter;
    SBMedusaHostedKeyboardWindowLevelAssertion *_defaultWindowLevelAssertion;
}


@property (retain, nonatomic) NSMutableArray *windowLevelAssertions; // ivar: _windowLevelAssertions


+(BOOL)_isSecure;
+(BOOL)autorotates;
-(BOOL)_shouldControlAutorotation;
-(BOOL)isActive;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithKeyboardScene:(id)arg0 ;
-(id)newWindowLevelAssertionWithPriority:(NSUInteger)arg0 windowLevel:(CGFloat)arg1 ;
-(void)_updateWindowLevel;
-(void)addWindowLevelAssertion:(id)arg0 ;
-(void)dealloc;
-(void)removeWindowLevelAssertion:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif