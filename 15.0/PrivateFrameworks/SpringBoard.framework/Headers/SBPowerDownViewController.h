// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPOWERDOWNVIEWCONTROLLER_H
#define SBPOWERDOWNVIEWCONTROLLER_H

@class SPBeaconManager, NSString, SBFUserAuthenticationController;
@protocol SBPowerDownViewDelegate, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBPowerDownViewControllerDelegate, SBFLockOutStatusProvider;


#import "SBTransientOverlayViewController.h"
#import "SBPowerDownView.h"
#import "SBPasscodeEntryTransientOverlayViewController.h"

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate, SBPasscodeEntryTransientOverlayViewControllerDelegate>

 {
    NSUInteger _aggdStartTime;
    BOOL _canAlterScreenBrightness;
    SBPowerDownView *_powerDownView;
}


@property (retain, nonatomic) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPowerDownViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBFLockOutStatusProvider> *lockOutController; // ivar: _lockOutController
@property (retain, nonatomic) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController; // ivar: _passcodeEntryTransientOverlayViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFUserAuthenticationController *userAuthController; // ivar: _userAuthController
@property (nonatomic) BOOL userWantsFindMySuppressed; // ivar: _userWantsFindMySuppressed


-(BOOL)_canShowWhileLocked;
-(BOOL)allowsStackingOverlayContentAbove;
-(BOOL)handleLockButtonPress;
-(BOOL)passcodeEntryTransientOverlayViewController:(id)arg0 authenticatePasscode:(id)arg1 ;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldDisableControlCenter;
-(BOOL)shouldDisableSiri;
-(BOOL)shouldPendAlertItems;
-(NSInteger)idleTimerMode;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(int)_preferredStatusBarVisibility;
-(void)_beginTimeTracking;
-(void)_endTimeTrackingIncludingReportWithKey:(id)arg0 ;
-(void)_incrementCountForKey:(id)arg0 ;
-(void)_resetScreenBrightness;
-(void)_setPasscodeVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)didTapTemporarilyDisableFindMy;
-(void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg0 ;
-(void)powerDownView:(id)arg0 didUpdateSlideWithValue:(CGFloat)arg1 ;
-(void)powerDownViewAnimateOutCompleted:(id)arg0 ;
-(void)powerDownViewDidBeginSlide:(id)arg0 ;
-(void)powerDownViewDidCancelSlide:(id)arg0 ;
-(void)powerDownViewDidCompleteSlide:(id)arg0 ;
-(void)powerDownViewDidFireIdleTimer:(id)arg0 ;
-(void)powerDownViewDidReceiveCancelButtonAction:(id)arg0 ;
-(void)powerDownViewRequestCancel:(id)arg0 ;
-(void)powerDownViewRequestPowerDown:(id)arg0 ;
-(void)powerDownViewWillAnimateIn:(id)arg0 ;
-(void)powerDownViewWillAnimateOut:(id)arg0 ;
-(void)showPowerDownFindMyAlert;
// -(void)showPowerDownFindMyAlertWithProceed:(id)arg0 cancelCompletion:(unk)arg1  ;
-(void)userAcknowledgedFindMyInfo;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif