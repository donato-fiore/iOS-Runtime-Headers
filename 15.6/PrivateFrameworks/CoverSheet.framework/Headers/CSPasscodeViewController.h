// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPASSCODEVIEWCONTROLLER_H
#define CSPASSCODEVIEWCONTROLLER_H

@class SBFAuthenticationAssertion, UIView<SBUIPasscodeLockView_Internal>, NSString, SBUIProudLockContainerViewController, UIColor;
@protocol SBUIPasscodeLockViewDelegate, PTSettingsKeyObserver, CSCoverSheetContextProviding, CSPasscodeViewControllerDelegate, CSWallpaperColorProvider;


#import "CSCoverSheetViewControllerBase.h"
#import "CSPasscodeBackgroundView.h"
#import "CSLockScreenPearlSettings.h"
#import "CSFaceOcclusionMonitor.h"

@interface CSPasscodeViewController : CSCoverSheetViewControllerBase <SBUIPasscodeLockViewDelegate, PTSettingsKeyObserver>

 {
    BOOL _attemptingUnlock;
    SBFAuthenticationAssertion *_sustainAuthenticationAssertion;
    NSUInteger _options;
    UIView<SBUIPasscodeLockView_Internal> *_passcodeLockView;
    CSPasscodeBackgroundView *_backgroundView;
    BOOL _isBeingDismissedAfterInterstitialTransitionCancelled;
    CSLockScreenPearlSettings *_pearlSettings;
}


@property (nonatomic) BOOL biometricButtonsInitiallyVisible; // ivar: _biometricButtonsInitiallyVisible
@property (nonatomic) BOOL confirmedNotInPocket; // ivar: _confirmedNotInPocket
@property (retain, nonatomic) NSObject<CSCoverSheetContextProviding> *coverSheetContext; // ivar: _coverSheetContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSPasscodeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CSFaceOcclusionMonitor *faceOcclusionMonitor; // ivar: _faceOcclusionMonitor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewControllerToUpdate; // ivar: _proudLockContainerViewControllerToUpdate
@property (nonatomic) BOOL showProudLock; // ivar: _showProudLock
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *unlockDestination; // ivar: _unlockDestination
@property (nonatomic) BOOL useBiometricPresentation; // ivar: _useBiometricPresentation
@property (nonatomic) UIColor *wallpaperAverageColorOverride; // ivar: _wallpaperAverageColorOverride
@property (retain, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider


-(BOOL)_shouldEmulateInteractivePresentation;
-(BOOL)_shouldUseLightStylePasscodeView;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)presentationCancelsTouches;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationTransition;
-(NSInteger)presentationType;
-(id)_effectiveAverageWallpaperColor;
-(id)displayLayoutElementIdentifier;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(struct CAFrameRateRange )presentationPreferredFrameRateRange;
-(unsigned int)presentationFrameRateRangeReason;
-(void)_emulateInteractivePresentation;
-(void)_passcodeLockViewPasscodeEntered:(id)arg0 authenticationType:(NSUInteger)arg1 ;
-(void)_setBiometricAuthenticationEnabledForTransientAppearanceTransition:(BOOL)arg0 ;
-(void)_updateProudLockViewControllerConfiguration;
-(void)_updateReduceTransparencyBackingColor;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)beginInteractivePresentationTransitionForInitialTransition:(BOOL)arg0 ;
-(void)commitingToEndTransitionToPresented:(BOOL)arg0 forInitialTransition:(BOOL)arg1 ;
-(void)dealloc;
-(void)endInteractiveTransitionToPresented:(BOOL)arg0 forInitialTransition:(BOOL)arg1 ;
-(void)loadView;
-(void)passcodeLockViewCancelButtonPressed:(id)arg0 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg0 ;
-(void)passcodeLockViewPasscodeDidChange:(id)arg0 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg0 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg0 ;
-(void)passcodeLockViewStateChange:(id)arg0 ;
-(void)performCustomTransitionToVisible:(BOOL)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateInteractiveTransitionWithPercent:(CGFloat)arg0 forInitialTransition:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif