// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUISTARTUPTOLOGINWINDOWANIMATIONCONTROLLER_H
#define SBUISTARTUPTOLOGINWINDOWANIMATIONCONTROLLER_H

@class BKSDisplayRenderOverlay, BSTransaction, NSString;
@protocol SBLoginAppContainerViewControllerObserver;


#import "SBUIMainScreenAnimationController.h"
#import "SBWindow.h"

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver>

 {
    SBWindow *_transitionWindow;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
    BSTransaction *_waitForLoginAppToFinishLaunchingTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldDismissBanner;
-(id)_getTransitionWindow;
-(id)animationSettings;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 overlay:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_startAnimation;
-(void)loginAppDidFinishLaunching:(id)arg0 ;


@end


#endif