// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLENROLLCONTROLLER_H
#define BKUIPEARLENROLLCONTROLLER_H

@class PSViewController, NSString, BKIdentity, UINavigationBar;
@protocol BKUIPearlCoachingControllerDelegate, BKUIPearlEnrollViewControllerDelegate, BKUIPearlEnrollControllerDelegate, NSObject;


#import "BKUIPearlCoachingController.h"
#import "BKUIPearlEnrollViewController.h"
#import "BKUIOrientationStateHandler.h"

@interface BKUIPearlEnrollController : PSViewController <BKUIPearlCoachingControllerDelegate, BKUIPearlEnrollViewControllerDelegate>

 {
    BOOL _systemRotationAnimating;
    NSInteger _orientation;
}


@property (retain, nonatomic) BKUIPearlCoachingController *coachingController; // ivar: _coachingController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BKUIPearlEnrollControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKUIPearlEnrollViewController *enrollViewController; // ivar: _enrollViewController
@property (nonatomic) NSUInteger enrollmentConfiguration;
@property (retain, nonatomic) BKIdentity *existingIdentity; // ivar: _existingIdentity
@property (nonatomic) BOOL hasBeenPortrait; // ivar: _hasBeenPortrait
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL inDemo;
@property (nonatomic) BOOL inSheet; // ivar: _inSheet
@property (readonly, nonatomic) UINavigationBar *navbarCopy; // ivar: _navbarCopy
@property (retain, nonatomic) BKUIOrientationStateHandler *orientationStateHandler; // ivar: _orientationStateHandler
@property (retain, nonatomic) NSObject<NSObject> *rotationChangeToken; // ivar: _rotationChangeToken
@property (retain, nonatomic) NSObject<NSObject> *rotationLockToken; // ivar: _rotationLockToken
@property (readonly) Class superclass;


+(BOOL)isDisplayZoomEnabled;
+(BOOL)isPearlAvailable;
+(BOOL)isPearlInterlocked;
+(void)preloadWithCompletion:(id)arg0 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)isModalInPresentation;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(NSInteger)preferredStatusBarStyle;
-(id)init;
-(id)initWithPreloadedState:(id)arg0 ;
-(id)navigationItem;
-(struct CGSize )preferredContentSize;
-(void)_copyAndShowInternalNavBar;
-(void)_startObserving;
-(void)coachingSkipped;
-(void)dealloc;
-(void)deviceOrientationChanged:(NSInteger)arg0 ;
-(void)deviceOrientationChanged:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)deviceOrientationDidChange:(id)arg0 ;
-(void)diffSystemAndForcedRotationOrientations;
-(void)pearlEnrollControllerCompleted:(id)arg0 ;
-(void)pearlEnrollViewController:(id)arg0 finishedEnrollWithError:(id)arg1 ;
-(void)primeWithExternalizedAuthContext:(id)arg0 ;
-(void)primeWithPasscode:(id)arg0 ;
-(void)resetLayout;
-(void)setCoachingHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setCustomDetailString:(id)arg0 forState:(int)arg1 ;
-(void)setCustomInstructionString:(id)arg0 forState:(int)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif