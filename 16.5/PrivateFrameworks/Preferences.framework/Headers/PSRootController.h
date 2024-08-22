// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSROOTCONTROLLER_H
#define PSROOTCONTROLLER_H

@class UINavigationController, NSMutableSet, NSString;
@protocol PSController, UINavigationControllerDelegate;


#import "PSSpecifier.h"
#import "PSStackPushAnimationController.h"

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate>

 {
    PSSpecifier *_specifier;
    NSMutableSet *_tasks;
    BOOL _deallocating;
    PSStackPushAnimationController *_stackAnimationController;
    NSUInteger _supportedOrientationsOverride;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)processedBundle:(id)arg0 parentController:(id)arg1 parentSpecifier:(id)arg2 bundleControllers:(*id)arg3 settings:(id)arg4 ;
+(id)readPreferenceValue:(id)arg0 ;
+(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
+(void)writePreference:(id)arg0 ;
-(BOOL)busy;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)deallocating;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)taskIsRunning:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)aggregateDictionaryPath;
-(id)contentViewForTopController;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)parentController;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(id)readPreferenceValue:(id)arg0 ;
-(id)rootController;
-(id)specifier;
-(id)specifiers;
-(id)tasksDescription;
-(void)_delayedControllerReleaseAfterPop:(id)arg0 ;
-(void)_setNavigationBarHidden:(BOOL)arg0 edge:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)addTask:(id)arg0 ;
-(void)dealloc;
-(void)didDismissFormSheetView;
-(void)didDismissPopupView;
-(void)didLock;
-(void)didUnlock;
-(void)didWake;
-(void)handleURL:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)logSettingsPath;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushController:(id)arg0 ;
-(void)pushController:(id)arg0 animate:(BOOL)arg1 ;
-(void)pushControllersAsStack:(id)arg0 ;
-(void)sendWillBecomeActive;
-(void)sendWillResignActive;
-(void)setParentController:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)setRootController:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)setSupportedInterfaceOrientations:(NSUInteger)arg0 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)showLeftButton:(id)arg0 withStyle:(NSInteger)arg1 rightButton:(id)arg2 withStyle:(NSInteger)arg3 ;
-(void)statusBarWillAnimateByHeight:(CGFloat)arg0 ;
-(void)statusBarWillChangeHeight:(id)arg0 ;
-(void)suspend;
-(void)taskFinished:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willBecomeActive;
-(void)willDismissFormSheetView;
-(void)willDismissPopupView;
-(void)willResignActive;
-(void)willUnlock;


@end


#endif