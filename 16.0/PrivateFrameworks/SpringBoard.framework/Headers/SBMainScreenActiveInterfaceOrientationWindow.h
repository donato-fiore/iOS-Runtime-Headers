// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINSCREENACTIVEINTERFACEORIENTATIONWINDOW_H
#define SBMAINSCREENACTIVEINTERFACEORIENTATIONWINDOW_H

@class NSCountedSet, UIViewController, NSString;
@protocol BSDescriptionProviding, SBUIActiveOrientationObserver;


#import "SBWindow.h"

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver>

 {
    NSCountedSet *_orientationUpdateDisableReasons;
}


@property (retain, nonatomic, setter=setContentViewController:) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *debugName; // ivar: _debugName
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL passesTouchesThrough; // ivar: _passesTouchesThrough
@property (readonly) Class superclass;


+(BOOL)_traitsArbiterOrientationActuationEnabled;
+(BOOL)layoutContentViewControllerWithConstraints;
+(BOOL)sb_autorotates;
+(id)_traitsArbiterOrientationActuationRole;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isActive;
-(BOOL)isDisablingInterfaceOrientationChanges;
-(NSUInteger)effectiveRootViewControllerSupportedInterfaceOrientations;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithRole:(id)arg0 debugName:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 role:(id)arg1 debugName:(id)arg2 ;
-(id)rootViewController;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(CGFloat)arg0 ;
-(void)_updateSupportedInterfaceOrientationsForTraitArbiterActuationIfNeeded;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)disableInterfaceOrientationChangesForReason:(id)arg0 ;
-(void)enableInterfaceOrientationChangesForReason:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setRootViewController:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif