// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPEDUCATIONPANELCONTROLLER_H
#define PNPEDUCATIONPANELCONTROLLER_H

@class NSLayoutConstraint, NSTimer;
@protocol PencilEducationViewControllerDelegate;


#import "PNPWelcomeController.h"
#import "PencilEducationViewController.h"

@interface PNPEducationPanelController : PNPWelcomeController <PencilEducationViewControllerDelegate>



@property (nonatomic) BOOL didAdjustHeightForWidth; // ivar: _didAdjustHeightForWidth
@property (retain, nonatomic) PencilEducationViewController *educationController; // ivar: _educationController
@property (nonatomic) CGPoint forcedContentOffset; // ivar: _forcedContentOffset
@property (retain, nonatomic) NSLayoutConstraint *forcedHeightLayoutConstraint; // ivar: _forcedHeightLayoutConstraint
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (retain, nonatomic) NSTimer *watchdogTimer; // ivar: _watchdogTimer


+(id)_controllerWithType:(NSInteger)arg0 buttonType:(NSInteger)arg1 deviceType:(NSInteger)arg2 delegate:(id)arg3 ;
-(void)buttonPressed:(id)arg0 ;
-(void)cancelWatchdogTimer;
-(void)dealloc;
-(void)educationController:(id)arg0 didChangeAnimationState:(BOOL)arg1 ;
-(void)educationControllerDidChangePanel:(id)arg0 ;
-(void)educationControllerWillReplay:(id)arg0 ;
-(void)scheduleWatchdogTimer;
-(void)setUpForIsAnimating:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif