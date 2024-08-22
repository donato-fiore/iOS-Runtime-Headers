// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIFINGERPRINTENROLLTUTORIALVIEWCONTROLLER_H
#define BKUIFINGERPRINTENROLLTUTORIALVIEWCONTROLLER_H

@class OBWelcomeController, OBAnimationController, NSTimer, NSLayoutConstraint, OBTrayButton, UIImageView;
@protocol OS_os_log, BKUIEmbeddedEnrollmentSelectionType;


#import "BKUIAnimationView.h"
#import "BKUIFingerPrintPosedVideoPlayerView.h"

@interface BKUIFingerPrintEnrollTutorialViewController : OBWelcomeController {
    NSObject<OS_os_log> *bkui_animation_view_log;
}


@property (retain, nonatomic) OBAnimationController *animationController; // ivar: _animationController
@property (retain, nonatomic) NSTimer *animationTimer; // ivar: _animationTimer
@property (retain, nonatomic) BKUIAnimationView *animationView; // ivar: _animationView
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (weak, nonatomic) NSObject<BKUIEmbeddedEnrollmentSelectionType> *delegate; // ivar: _delegate
@property (nonatomic) CGRect displayRect; // ivar: _displayRect
@property (retain, nonatomic) UIImageView *enrollTutorialImageView; // ivar: _enrollTutorialImageView
@property (nonatomic) NSUInteger enrollViewState; // ivar: _enrollViewState
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (nonatomic) NSInteger initialInterfaceOrientation; // ivar: _initialInterfaceOrientation
@property (nonatomic) BOOL isSecondEnrollment; // ivar: _isSecondEnrollment
@property (retain, nonatomic) BKUIFingerPrintPosedVideoPlayerView *posedVideoPlayerView; // ivar: _posedVideoPlayerView
@property (nonatomic) BOOL showDisclaimer; // ivar: _showDisclaimer
@property (nonatomic) BOOL showFollowUpEnrollmentUpSellContent; // ivar: _showFollowUpEnrollmentUpSellContent
@property (retain, nonatomic) OBTrayButton *skipButton; // ivar: _skipButton


-(BOOL)_touchIDV2Device;
-(CGFloat)_contentViewHeight;
-(CGFloat)_contentViewTopOffset;
-(id)_detailTextPhase1;
-(id)_devicePrefix;
-(id)_headerTitlePhase1;
-(id)_headerTitlePhase2;
-(id)_videoAssetName;
-(id)combinedTutorialText;
-(id)initInBuddy:(BOOL)arg0 showDisclaimer:(BOOL)arg1 displayRect:(struct CGRect )arg2 ;
-(id)tutorialImage;
-(id)tutorialText;
-(void)_continuePressed:(id)arg0 ;
-(void)_enrollSkipped:(id)arg0 ;
-(void)_performInitialAnimationSetup;
-(void)_restartAnimation;
-(void)_setupTouchIDAnimation;
-(void)loadAVPlayer;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif