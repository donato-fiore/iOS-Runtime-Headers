// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREMOTEALERTVIEWCONTROLLER_H
#define PKPAYMENTREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, PKPaymentService, PKFieldProperties, NSArray, NSString, CLInUseAssertion, SBSAssertion, PKAssertion, PKAuthenticator;
@protocol PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming, PKAuthorizationCoverSheetViewControllerDelegate, BSInvalidatable, OS_dispatch_group;


#import "PKPassGroupsViewController.h"
#import "PKAuthorizationCoverSheetViewController.h"
#import "PKBackgroundContactlessInterfaceSessionController.h"

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming, PKAuthorizationCoverSheetViewControllerDelegate>

 {
    PKPassGroupsViewController *_passGroupsViewController;
    PKAuthorizationCoverSheetViewController *_coverSheetViewController;
    id *_staticGlyphResources;
    PKPaymentService *_paymentService;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
    NSString *_passUniqueIdentifier;
    CLInUseAssertion *_passbookForegroundAssertion;
    BOOL _hasAquiredStaticResources;
    id<BSInvalidatable> *_lockButtonObserver;
    SBSAssertion *_lockButtonAssertion;
    PKAssertion *_notificationSuppressionAssertion;
    NSObject<OS_dispatch_group> *_fieldPropertiesLookupGroup;
    NSInteger _presentationSource;
    NSUInteger _presentationStartTime;
    BOOL _shouldViewAnimateIn;
    BOOL _isLockScreenPresented;
    BOOL _processHomeButtonEvents;
    BOOL _brightnessRampingAllowed;
    PKAuthenticator *_coverSheetAuthenticator;
    BOOL _currentShowWhileLockedValue;
    PKBackgroundContactlessInterfaceSessionController *_backgroundContactlessInterfaceSession;
    BOOL _showCoverSheet;
    BOOL _isBlockingUIForUserAuthorization;
    id *_blockingUIForUserAuthorizationCompletion;
    ? _state;
    NSInteger _invalidationStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)groupsControllerWithSource:(NSInteger)arg0 hasUserBeenAuthenticated:(BOOL)arg1 passUniqueID:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isInGroup;
-(BOOL)_notificationIsFromChildViewController:(id)arg0 ;
-(BOOL)_releaseUIBlockIfNeededTimeout:(BOOL)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_activeViewController;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)init;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_acquireStaticResources;
-(void)_animateViewBackgroundColorIn:(id)arg0 ;
-(void)_contactlessInterfaceSessionDidAuthorize:(id)arg0 ;
-(void)_contactlessInterfaceSessionFinishTransaction:(id)arg0 ;
-(void)_dismissForSource:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_dismissIfRestricted;
-(void)_insertViewControllerIfNeeded:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateForType:(NSInteger)arg0 ;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg0 ;
-(void)_presentHomeButtonDoubleTapAlertIfNecessary;
-(void)_presentPassAnimated:(BOOL)arg0 externalizedContext:(id)arg1 completion:(id)arg2 ;
-(void)_removeViewController:(id)arg0 ;
-(void)_setupCoverSheetIfNeeded;
-(void)_setupGroupControllerIfNeeded;
-(void)_startBackgroundContactlessInterfaceSessionIfNeeded;
-(void)_startGroupControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_transitionToAppeared;
-(void)_transitionToViewState:(struct ? )arg0 animated:(BOOL)arg1 ;
-(void)_transitionToViewStateScreen:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)authorizationCoverSheetViewControllerDidCompleteWithSuccess:(BOOL)arg0 ;
-(void)authorizationCoverSheetViewControllerDidGetBiometricUnavailableOrFailure;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)consumeDoublePressUpForButtonKind:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didInvalidateForRemoteAlert;
-(void)handleButtonActions:(id)arg0 ;
-(void)loadView;
-(void)openApplication:(id)arg0 ;
-(void)prepareForActivationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif