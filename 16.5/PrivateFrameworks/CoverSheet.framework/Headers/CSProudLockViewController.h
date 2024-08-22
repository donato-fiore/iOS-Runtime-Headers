// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPROUDLOCKVIEWCONTROLLER_H
#define CSPROUDLOCKVIEWCONTROLLER_H

@class UIView, NSString, SBUIProudLockContainerViewController;
@protocol PTSettingsKeyObserver, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate, BSInvalidatable, SBFAuthenticationStatusProvider, SBUIBiometricResource, CSProudLockViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"
#import "CSLockScreenPearlSettings.h"

@interface CSProudLockViewController : CSCoverSheetViewControllerBase <PTSettingsKeyObserver, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate>

 {
    CSLockScreenPearlSettings *_pearlSettings;
    id<BSInvalidatable> *_faceDetectWantedAssertion;
    NSInteger _deferredAuthenticationState;
    BOOL _isAuthenticated;
    BOOL _shouldReactToAuthentication;
    BOOL _hasReactedToAuthentication;
}


@property (retain, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (retain, nonatomic) NSObject<SBUIBiometricResource> *biometricResource; // ivar: _biometricResource
@property (readonly, nonatomic) UIView *cameraCoveredView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSProudLockViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBiometricLockedOut;
@property (retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewController; // ivar: _proudLockContainerViewController
@property (readonly, nonatomic) UIView *proudLockView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspendLockUpdates; // ivar: _suspendLockUpdates


-(BOOL)_shouldApplyScaleAndBlurForAuthenticated;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)proudLockContainerViewControllerIsCoverSheetVisible:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_clearFaceDetectAssertion;
-(void)_createFaceDetectAssertion;
-(void)_updateForAuthenticated:(BOOL)arg0 ;
-(void)_updateForProudLockStateChangeAnimated:(BOOL)arg0 ;
-(void)_updateForProudLockStateChangeDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_updateProudLockViewControllerConfiguration;
-(void)aggregateAppearance:(id)arg0 ;
-(void)proudLockContainerViewController:(id)arg0 guidanceTextVisibilityDidChange:(id)arg1 animated:(BOOL)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateLockForBiometricMatchFailure;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif