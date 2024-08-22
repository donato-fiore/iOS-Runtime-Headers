// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETSECUREAPPENVIRONMENTVIEWCONTROLLER_H
#define SBCOVERSHEETSECUREAPPENVIRONMENTVIEWCONTROLLER_H

@class UIViewController, NSString, SBFZStackParticipant;
@protocol SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController, BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;


#import "SBHomeGestureParticipant.h"
#import "SBDashBoardHostedAppViewController.h"

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController>

 {
    id<BSInvalidatable> *_biometricMatchingAssertion;
    NSUInteger _currentOrientationMask;
}


@property (readonly, nonatomic) BOOL contentOccludesBackground;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // ivar: _homeGestureParticipant
@property (readonly, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController; // ivar: _secureAppViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


-(BOOL)_canShowWhileLocked;
-(BOOL)canHostAnApp;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(BOOL)isHostingAnApp;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_currentSecureAppAction;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)initWithSecureAppViewController:(id)arg0 ;
-(void)_updateSupportedOrientationsMaskForSecureAppAction;
-(void)conformsToCSApplicationHosting;
-(void)conformsToSBApplicationHosting;
-(void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)relinquishHiddenAssertionForHomeGrabber:(id)arg0 animated:(BOOL)arg1 ;
-(void)relinquishHomeGesture;
-(void)requestHomeGestureOwnership;
-(void)secureAppOfTypeDidBegin:(NSUInteger)arg0 ;
-(void)secureAppOfTypeDidTakeNewAssertion:(NSUInteger)arg0 ;
-(void)takeHiddenAssertionForHomeGrabber:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateHomeGrabberHiddenAssertion:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif