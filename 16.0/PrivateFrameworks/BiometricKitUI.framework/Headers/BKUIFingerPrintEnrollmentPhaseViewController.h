// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIFINGERPRINTENROLLMENTPHASEVIEWCONTROLLER_H
#define BKUIFINGERPRINTENROLLMENTPHASEVIEWCONTROLLER_H

@class OBTouchIDEnrollmentWelcomeController, NSLayoutConstraint, OBTrayButton, NSString, NSArray, UIButton, UIView;
@protocol OS_os_log, BKUIEmbeddedEnrollmentSelectionType;


#import "BKUIAlertView.h"
#import "BKUICurvesView.h"
#import "BKUIIndicatorWindow.h"

@interface BKUIFingerPrintEnrollmentPhaseViewController : OBTouchIDEnrollmentWelcomeController {
    NSObject<OS_os_log> *bkui_fingerprint_enroll_view_controller_log;
}


@property (retain, nonatomic) BKUIAlertView *alertView; // ivar: _alertView
@property (nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (nonatomic) CGSize buttonTraySize; // ivar: _buttonTraySize
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // ivar: _contentViewHeightConstraint
@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (weak, nonatomic) NSObject<BKUIEmbeddedEnrollmentSelectionType> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableContentViewSizing; // ivar: _disableContentViewSizing
@property (retain, nonatomic) NSLayoutConstraint *enrollCurvesViewCenterConstraint; // ivar: _enrollCurvesViewCenterConstraint
@property (retain, nonatomic) NSLayoutConstraint *enrollCurvesViewTopConstraint; // ivar: _enrollCurvesViewTopConstraint
@property (nonatomic) CGFloat enrollProgress; // ivar: _enrollProgress
@property (nonatomic) NSUInteger enrollViewState; // ivar: _enrollViewState
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) BOOL hideUnlockMessage; // ivar: _hideUnlockMessage
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (nonatomic) NSInteger initialInterfaceOrientation; // ivar: _initialInterfaceOrientation
@property (nonatomic) CGFloat innerAndOuterCurvesViewHeightDiff; // ivar: _innerAndOuterCurvesViewHeightDiff
@property (nonatomic) BOOL isSecondEnrollment; // ivar: _isSecondEnrollment
@property (retain, nonatomic) NSArray *mesaEnrollContainerConstraints; // ivar: _mesaEnrollContainerConstraints
@property (retain, nonatomic) UIButton *mesaEnrollErrorButtonRestartEnroll; // ivar: _mesaEnrollErrorButtonRestartEnroll
@property (retain, nonatomic) UIView *mesaEnrollErrorButtonsContainer; // ivar: _mesaEnrollErrorButtonsContainer
@property (retain, nonatomic) BKUICurvesView *mesaFirstEnrollView; // ivar: _mesaFirstEnrollView
@property (retain, nonatomic) BKUICurvesView *mesaSecondEnrollView; // ivar: _mesaSecondEnrollView
@property (retain, nonatomic) OBTrayButton *retryButton; // ivar: _retryButton
@property (nonatomic) BOOL rotating; // ivar: _rotating
@property (nonatomic) BOOL shouldShowFollowupFingerEnrollmentUpSell; // ivar: _shouldShowFollowupFingerEnrollmentUpSell
@property (nonatomic) BOOL showDisclaimer; // ivar: _showDisclaimer
@property (nonatomic) BOOL showFollowUpEnrollmentUpSellContent; // ivar: _showFollowUpEnrollmentUpSellContent
@property (retain, nonatomic) OBTrayButton *skipButton; // ivar: _skipButton
@property (retain, nonatomic) BKUIIndicatorWindow *touchindicatorWindow; // ivar: _touchindicatorWindow


-(BOOL)_isIPad;
-(BOOL)_topTouchButtonIpad;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAnimateEntireView;
-(CGFloat)_enrollViewTopPadding;
-(id)_detailPhasesText;
-(id)_detailTextDonePhase;
-(id)_subtitleFont;
-(id)initInBuddy:(BOOL)arg0 showDisclaimer:(BOOL)arg1 hideUnlockMessage:(BOOL)arg2 headerTitle:(id)arg3 firstEnrollView:(id)arg4 secondEnrollView:(id)arg5 ;
-(id)initInBuddy:(BOOL)arg0 showDisclaimer:(BOOL)arg1 hideUnlockMessage:(BOOL)arg2 showFollowUpSell:(BOOL)arg3 headerTitle:(id)arg4 firstEnrollView:(id)arg5 secondEnrollView:(id)arg6 ;
-(struct CGSize )_idealEnrollCurveViewSize;
-(void)_continuePressed:(id)arg0 ;
-(void)_enrollSkipped;
-(void)_forceLayout;
-(void)_forceResetCurvesLayerToPercent:(CGFloat)arg0 ;
-(void)_handleViewState:(NSUInteger)arg0 ;
-(void)_updateButtonTraySize;
-(void)_updateContentViewSizeToMatchConstraints;
-(void)_updateEnrollViewsForSize:(struct CGSize )arg0 ;
-(void)handleEnrollmentDone;
-(void)handleEnrollmentFailure;
-(void)removeTouchIndicator;
-(void)updateHeaderWithTitle:(id)arg0 animated:(BOOL)arg1 heightDifference:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif