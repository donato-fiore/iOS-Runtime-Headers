// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGWIZARDCONTROLLER_H
#define CNFREGWIZARDCONTROLLER_H

@class PSSetupController, _UIBackdropView, NSString;
@protocol CNFRegFirstRunDelegate, CNFRegWizardControllerDelegate;


#import "CNFRegController.h"

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate>

 {
    NSInteger _serviceType;
    id *_resignListener;
    id *_resumeListener;
    ? _wizardFlags;
}


@property (nonatomic) BOOL allowCancel;
@property (nonatomic) BOOL allowSMS;
@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (nonatomic) BOOL canShowDisabledScreen;
@property (nonatomic) BOOL canShowSplashScreen;
@property (nonatomic) BOOL canStartNested;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<CNFRegWizardControllerDelegate> *firstRunDelegate; // ivar: _firstRunDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideLearnMoreButton;
@property (retain, nonatomic) CNFRegController *regController; // ivar: _regController
@property (nonatomic) BOOL shouldListenForSuspension;
@property (nonatomic) BOOL shouldTerminateInBackground;
@property (nonatomic) BOOL showSplashOnSignin;
@property (readonly) Class superclass;


+(void)setGlobalAppearanceStyle:(NSInteger)arg0 ;
+(void)setSupportsAutoRotation:(BOOL)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldShowFirstRunController;
-(BOOL)skipReloadOnNextViewWillAppear;
-(id)controllerClassesToShow:(BOOL)arg0 ;
-(id)controllersToShow;
-(id)controllersToShow:(BOOL)arg0 ;
-(id)init;
-(id)initWithRegController:(id)arg0 ;
-(id)initWithServiceTypes:(NSInteger)arg0 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(id)popViewControllerWithTransition:(int)arg0 ;
-(int)_firstRunState:(id)arg0 ;
-(void)_applicationDidEnterBackground;
-(void)_applicationDidFinishLaunching;
-(void)_checkRestrictions;
-(void)_doCancel;
-(void)_restrictionsChanged;
-(void)_startListeningForResignResume;
-(void)_stopListeningForResignResume;
-(void)_updateNavigationBarHiddenForCurrentState;
-(void)_updateNavigationBarHiddenForPop;
-(void)_updateNavigationBarHiddenForPush;
-(void)_updateNavigationBarTitle;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(void)dealloc;
-(void)dismissFinished:(BOOL)arg0 ;
-(void)dismissWithState:(NSUInteger)arg0 ;
-(void)firstRunController:(id)arg0 finishedWithState:(NSUInteger)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 transition:(int)arg1 ;
-(void)setSkipReloadOnNextViewWillAppear:(BOOL)arg0 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupController;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif