// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFOLDERCONTROLLERANIMATIONCONTEXT_H
#define SBFOLDERCONTROLLERANIMATIONCONTEXT_H

@class UIWindow, UIView, UIScreen;

#import <Foundation/Foundation.h>


@interface SBFolderControllerAnimationContext : NSObject

@property (readonly, nonatomic) UIWindow *animationWindow; // ivar: _animationWindow
@property (readonly, nonatomic) UIView *fallbackIconContainer; // ivar: _fallbackIconContainer
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen


+(id)contextWithScreen:(id)arg0 animationWindow:(id)arg1 fallbackIconContainer:(id)arg2 ;
-(id)initWithScreen:(id)arg0 animationWindow:(id)arg1 fallbackIconContainer:(id)arg2 ;


@end


#endif