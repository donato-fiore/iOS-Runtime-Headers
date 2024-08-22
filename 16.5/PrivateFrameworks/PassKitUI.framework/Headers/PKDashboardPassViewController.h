// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPASSVIEWCONTROLLER_H
#define PKDASHBOARDPASSVIEWCONTROLLER_H

@class BKPresenceDetectOperation, NSMutableArray, PKPaymentPass, UIButton, PKAccountService, NSArray, NFDCKAssertion, NSString, PKPass;
@protocol PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, PKDashboardPassTilesItemPresenterDelegate, PKAccountServiceObserver, PKDashboardMoreMenuFactoryDelegate, BKOperationDelegate, PKInvalidatable, OS_dispatch_source, OS_dispatch_queue, PKDashboardPassViewControllerDelegate><PKDashboardDelegate;


#import "PKDashboardViewController.h"
#import "_PKUIKVisibilityBackdropView.h"
#import "PKDashboardMoreMenuFactory.h"
#import "PKPassPresentationContext.h"
#import "PKDashboardAccountModulePresenter.h"
#import "PKDashboardPassFlowLayout.h"
#import "PKDashboardPaymentTransactionItemPresenter.h"

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, PKDashboardPassTilesItemPresenterDelegate, PKAccountServiceObserver, PKDashboardMoreMenuFactoryDelegate, BKOperationDelegate, PKInvalidatable>

 {
    BOOL _fingerPresent;
    BKPresenceDetectOperation *_fingerDetectionOperation;
    NSObject<OS_dispatch_source> *_fingerTimer;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    uint8_t _invalidated;
    NSMutableArray *_sessionHandles;
    ? _foregroundActiveState;
    unsigned int _deactivationReasons;
    unsigned char _visibility;
    BOOL _footerVisible;
    PKPaymentPass *_frontmostPaymentPass;
    _PKUIKVisibilityBackdropView *_footerBackground;
    CGSize _defaultPasscodeButtonSize;
    UIButton *_passcodeButton;
    PKAccountService *_accountService;
    PKDashboardMoreMenuFactory *_moreMenuFactory;
    NSArray *_navBarButtonTypes;
    PKPassPresentationContext *_context;
    NFDCKAssertion *_dckAssertion;
}


@property (readonly, nonatomic) PKDashboardAccountModulePresenter *accountModulePresenter; // ivar: _accountModulePresenter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardPassViewControllerDelegate><PKDashboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPass *frontmostPass; // ivar: _frontmostPass
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) PKDashboardPassFlowLayout *passFlowLayout; // ivar: _passFlowLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKDashboardPaymentTransactionItemPresenter *transactionPresenter; // ivar: _transactionPresenter


-(BOOL)_isBackgrounded;
-(BOOL)_isDeactivated;
-(BOOL)_isForegroundActive;
-(CGFloat)_navBarButtonSpaceWidth;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)_dashboardInfoButtonWithImage:(id)arg0 ;
-(id)_navigationBarButtonForType:(NSUInteger)arg0 account:(id)arg1 ;
-(id)_navigationBarButtonTypesForAppleCardPass:(id)arg0 account:(id)arg1 ;
-(id)_navigationBarButtonTypesForPeerPaymentPass:(id)arg0 ;
-(id)_passcodeButtonTitle;
-(id)_shareNavigationBarButtonTypesForPass:(id)arg0 ;
-(id)bigInfoButton;
-(id)doneButton;
-(id)initWithDataSource:(id)arg0 presenters:(id)arg1 layout:(id)arg2 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPassGroupView:(id)arg0 context:(id)arg1 presentingViewController:(id)arg2 ;
-(id)moreInfoButton;
-(id)navigationDashboardPassVC;
-(id)presentCardNumbersButtonForAccount:(id)arg0 ;
-(id)searchButton;
-(void)_afterDataSourceContentLoadedUpdateNavigationItemsForPass:(id)arg0 ;
-(void)_createFooter;
-(void)_displayAccountErrorIfNecessary;
-(void)_handleUpdatedAccount:(id)arg0 accountRemoved:(BOOL)arg1 ;
-(void)_passcodeTapped:(id)arg0 ;
-(void)_performActivationStateUpdate:(id)arg0 ;
-(void)_setupNavigationItemsAnimated:(BOOL)arg0 ;
-(void)_updateDefaultPasscodeButtonSize;
-(void)_updateDigitalCarKeyAssertion;
-(void)_updateFingerDetection;
-(void)_updateFooterAnimated:(BOOL)arg0 ;
-(void)_updateNavigationItemsWithAccount:(id)arg0 ;
-(void)_updatePasscodeButtonTitle;
-(void)_visibilityDidChange;
-(void)accountAdded:(id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)configureMoreMenuFactoryWithPass:(id)arg0 ;
-(void)dealloc;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateDeactivationReasons:(unsigned int)arg1 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)infoTapped:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)menuFactoryDidUpdateMenu:(id)arg0 ;
-(void)moreMenuTriggered:(id)arg0 ;
-(void)operation:(id)arg0 presenceStateChanged:(BOOL)arg1 ;
-(void)passTilesItemPresenter:(id)arg0 executeSEActionForPass:(id)arg1 tile:(id)arg2 withCompletion:(id)arg3 ;
-(void)reloadMoreMenuItemsWithMenu:(id)arg0 ;
-(void)reloadNavigationBarAnimated:(BOOL)arg0 ;
-(void)reportEventForPassIfNecessary:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif