// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREMOTEALERTVIEWCONTROLLER_H
#define PKPAYMENTREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, PKPaymentService, PKFieldProperties, NSArray, NSString, CLInUseAssertion, SBSAssertion, PKAssertion;
@protocol PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming, BSInvalidatable, OS_dispatch_group;


#import "PKPassGroupsViewController.h"

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming>

 {
    PKPassGroupsViewController *_passGroupsViewController;
    id *_staticGlyphResources;
    PKPaymentService *_paymentService;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
    NSString *_passUniqueIdentifier;
    CLInUseAssertion *_passbookForegroundAssertion;
    id<BSInvalidatable> *_lockButtonObserver;
    SBSAssertion *_lockButtonAssertion;
    PKAssertion *_notificationSuppressionAssertion;
    NSObject<OS_dispatch_group> *_fieldPropertiesLookupGroup;
    NSInteger _presentationSource;
    NSInteger _standAloneTransactionType;
    NSUInteger _presentationStartTime;
    BOOL _backlightActive;
    BOOL _isLockScreenPresented;
    BOOL _processHomeButtonEvents;
    BOOL _brightnessRampingAllowed;
    BOOL _appearedOnce;
    BOOL _insertedGroupsVC;
    BOOL _shouldInsertGroupsVC;
    NSInteger _invalidationStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)groupsControllerWithSource:(NSInteger)arg0 isLockScreenPresented:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isInGroup;
-(BOOL)_notificationIsFromChildViewController:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)init;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_appearIfNecessary;
-(void)_contactlessInterfaceSessionDidAuthorize:(id)arg0 ;
-(void)_contactlessInterfaceSessionFinishTransaction:(id)arg0 ;
-(void)_dismissForSource:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_dismissIfRestricted;
-(void)_insertGroupController;
-(void)_invalidate;
-(void)_invalidateForType:(NSInteger)arg0 ;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg0 ;
-(void)_presentHomeButtonDoubleTapAlertIfNecessary;
-(void)_presentPassAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_setupGroupController;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)consumeDoublePressUpForButtonKind:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didInvalidateForRemoteAlert;
-(void)handleButtonActions:(id)arg0 ;
-(void)loadView;
-(void)openApplication:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif