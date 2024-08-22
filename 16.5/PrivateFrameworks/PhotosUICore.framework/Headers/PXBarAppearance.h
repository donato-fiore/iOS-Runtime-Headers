// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXBARAPPEARANCE_H
#define PXBARAPPEARANCE_H

@class NSString, UIColor, UIViewController;
@protocol PXMutableBarAppearance, PXChangeObserver, PXBarAppearanceImplementationDelegate;


#import "PXObservable.h"
#import "PXBarAnimationOptions.h"

@interface PXBarAppearance : PXObservable <PXMutableBarAppearance, PXChangeObserver>

 {
    ? _implementationDelegateFlags;
    NSInteger _transitionsCounter;
}


@property (copy, nonatomic, setter=_setAnimationOptions:) PXBarAnimationOptions *_animationOptions; // ivar: __animationOptions
@property (weak, nonatomic, setter=_setImplementationDelegate:) NSObject<PXBarAppearanceImplementationDelegate> *_implementationDelegate; // ivar: __implementationDelegate
@property (nonatomic, setter=_setPreferredStatusBarUpdateAnimation:) NSInteger _preferredStatusBarUpdateAnimation; // ivar: __preferredStatusBarUpdateAnimation
@property (readonly, nonatomic) NSInteger barAppearancePreferredStatusBarStyle; // ivar: _barAppearancePreferredStatusBarStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXBarAppearanceImplementationDelegate> *implementationDelegate; // ivar: _implementationDelegate
@property (readonly, copy, nonatomic) UIColor *navigationBarTintColor; // ivar: _navigationBarTintColor
@property (readonly, nonatomic) BOOL prefersNavigationBarVisible; // ivar: _prefersNavigationBarVisible
@property (readonly, nonatomic) BOOL prefersStatusBarVisible; // ivar: _prefersStatusBarVisible
@property (readonly, nonatomic) BOOL prefersTabBarVisible; // ivar: _prefersTabBarVisible
@property (readonly, nonatomic) BOOL prefersToolbarVisible; // ivar: _prefersToolbarVisible
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)adjustedPrefersStatusBarHidden:(BOOL)arg0 ;
-(NSInteger)adjustedPreferredStatusBarStyle:(NSInteger)arg0 ;
-(NSInteger)adjustedPreferredStatusBarUpdateAnimation:(NSInteger)arg0 ;
-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(id)mutableChangeObject;
-(void)_performBarsTransition:(id)arg0 ;
-(void)_setNavigationBarVisible:(BOOL)arg0 withAnimationOptions:(id)arg1 ;
-(void)_setTabBarVisible:(BOOL)arg0 withAnimationOptions:(id)arg1 ;
-(void)_setToolbarVisible:(BOOL)arg0 withAnimationOptions:(id)arg1 ;
-(void)_update;
-(void)_updateImplementationDelegate;
-(void)_updateOnViewWillAppear:(BOOL)arg0 ;
-(void)_updateStatusBarStyleAndVisibilityWithAnimationOptions:(id)arg0 ;
-(void)_updateWithAnimationOptions:(id)arg0 isStatusBarHidden:(BOOL)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)performChangesWithAnimationOptions:(id)arg0 changes:(id)arg1 ;
-(void)viewControllerViewDidDisappear:(BOOL)arg0 ;
-(void)viewControllerViewWillAppear:(BOOL)arg0 ;


@end


#endif