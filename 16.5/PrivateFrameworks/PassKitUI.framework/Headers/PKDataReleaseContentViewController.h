// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATARELEASECONTENTVIEWCONTROLLER_H
#define PKDATARELEASECONTENTVIEWCONTROLLER_H

@class UIViewController, PKISO18013DataReleaseRequest, UITableView, UIView, PKAuthenticator, NSArray, PKTransactionReleasedData, UIImage, PKMerchant, LAContext, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, PKDataReleaseHeaderDelegate, PKPaymentAuthorizationFooterViewDelegate, LAUIDelegate, PKAuthenticatorDelegate, PKDataReleaseContentViewControllerDelegate, OS_dispatch_source;


#import "PKDataReleaseHeader.h"
#import "PKPaymentAuthorizationFooterView.h"
#import "PKPaymentTransactionIconGenerator.h"
#import "PKDataReleaseEntityResolver.h"
#import "PKIdleTimerAssertion.h"

@interface PKDataReleaseContentViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PKDataReleaseHeaderDelegate, PKPaymentAuthorizationFooterViewDelegate, LAUIDelegate, PKAuthenticatorDelegate>

 {
    PKISO18013DataReleaseRequest *_request;
    id<PKDataReleaseContentViewControllerDelegate> *_delegate;
    UITableView *_tableViewReleaseData;
    PKDataReleaseHeader *_header;
    PKPaymentAuthorizationFooterView *_footerView;
    BOOL _lastFailureWasUnboundBiometric;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    BOOL _isTemplateLayout;
    NSInteger _layoutRecursionCounter;
    PKAuthenticator *_authenticator;
    UIViewController *_passcodeViewController;
    NSArray *_intentRetainElements;
    NSArray *_intentDoNotRetainElements;
    NSArray *_intentDisplayOnlyElements;
    PKTransactionReleasedData *_dataToRelease;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKDataReleaseEntityResolver *_entityResolver;
    UIImage *_merchantIcon;
    PKMerchant *_merchant;
    BOOL _authenticating;
    BOOL _hasFailedBiometrics;
    BOOL _isInBioLockout;
    PKIdleTimerAssertion *_idleTimerAssertion;
    NSObject<OS_dispatch_source> *_idleTimer;
    BOOL _hasPlayedHaptics;
    LAContext *_localAuthenticationContext;
    *__SecAccessControl _accessControl;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldShowPhysicalButton;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_compactNavigationController;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(void)_configureFooterViewConfirmationTitle;
-(void)_finishedRemovingDoublePressCredentialWithError:(id)arg0 ;
-(void)_reloadMerchantHeader;
-(void)_startEvaluationWithExternalizedContext:(id)arg0 ;
-(void)_startInitialEvaluation;
-(void)_updateMerchantHeaderView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updatePhysicalButtonState;
-(void)_updatePreferredContentSize;
-(void)_updateSeparators;
-(void)authenticator:(id)arg0 didTransitionToEvaluationStateWithEvent:(struct ? )arg1 ;
-(void)authorizationFooterViewPasscodeButtonPressed:(id)arg0 ;
-(void)dataReleaseCompletedWithError:(id)arg0 ;
-(void)dataReleaseHeaderDidTapDismiss;
-(void)dealloc;
-(void)dismissPasscodeViewController;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)presentPasscodeToExitLockout;
// -(void)presentPasscodeViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setIdleTimerDisabled:(BOOL)arg0 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif