// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBVOICECONTROLTRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBVOICECONTROLTRANSIENTOVERLAYVIEWCONTROLLER_H

@class _UIBackdropView, NSString, NSArray;
@protocol SBVoiceControlViewControllerDelegate, CSExternalBehaviorProviding, SBVoiceControlTransientOverlayViewControllerDelegate;


#import "SBTransientOverlayViewController.h"
#import "SBVoiceControlViewController.h"

@interface SBVoiceControlTransientOverlayViewController : SBTransientOverlayViewController <SBVoiceControlViewControllerDelegate, CSExternalBehaviorProviding>

 {
    _UIBackdropView *_backdropView;
    SBVoiceControlViewController *_contentViewController;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (nonatomic) BOOL shouldAllowSensitiveActions;
@property (nonatomic) BOOL shouldDisableHandlerActions;
@property (nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SBVoiceControlTransientOverlayViewControllerDelegate> *voiceControlDelegate; // ivar: _voiceControlDelegate
@property (nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled;


-(BOOL)_canShowWhileLocked;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)handleHomeButtonPress;
-(BOOL)prefersProximityDetectionEnabled;
-(BOOL)resignFirstResponder;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(BOOL)shouldDisableOrientationUpdates;
-(NSInteger)idleTimerDuration;
-(NSInteger)idleTimerMode;
-(NSInteger)idleWarnMode;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredLockedGestureDismissalStyle;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredUnlockedGestureDismissalStyle;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)initWithSource:(id)arg0 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(int)_preferredStatusBarVisibility;
-(void)beginIgnoringAppearanceUpdates;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dealloc;
-(void)endIgnoringAppearanceUpdates;
-(void)handleGestureDismissal;
-(void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)arg0 ;
-(void)resetSessionWithSource:(id)arg0 ;
-(void)setContainerOrientation:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)arg0 ;
-(void)voiceControlViewControllerRequestsDismissal:(id)arg0 ;


@end


#endif