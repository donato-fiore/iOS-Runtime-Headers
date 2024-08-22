// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTACTIONVIEWCONTROLLER_H
#define PKPEERPAYMENTACTIONVIEWCONTROLLER_H

@class UIViewController, PKPeerPaymentAccount, NSDecimalNumber, NSString, PKPeerPaymentAccountFeatureDescriptor, PKPaymentPass, PKPeerPaymentWebService;
@protocol PKPeerPaymentActionControllerDelegate, PKPeerPaymentActionViewControllerDelegate, PKPassLibraryDataProvider;


#import "PKPeerPaymentActionController.h"

@interface PKPeerPaymentActionViewController : UIViewController <PKPeerPaymentActionControllerDelegate>

 {
    BOOL _viewHasAppeared;
    BOOL _dismissingViewController;
}


@property (retain, nonatomic) PKPeerPaymentAccount *account; // ivar: _account
@property (readonly, nonatomic) PKPeerPaymentActionController *actionController; // ivar: _actionController
@property (copy, nonatomic) NSDecimalNumber *cardBalance; // ivar: _cardBalance
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (nonatomic) NSUInteger controllerAction;
@property (copy, nonatomic) NSDecimalNumber *currentAmount; // ivar: _currentAmount
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPeerPaymentActionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPeerPaymentAccountFeatureDescriptor *feature;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDecimalNumber *maxBalance; // ivar: _maxBalance
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount; // ivar: _maxLoadAmount
@property (copy, nonatomic) NSDecimalNumber *minBalance; // ivar: _minBalance
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount; // ivar: _minLoadAmount
@property (readonly, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (weak, nonatomic) NSObject<PKPassLibraryDataProvider> *passLibraryDataProvider; // ivar: _passLibraryDataProvider
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPeerPaymentWebService *webService; // ivar: _webService


+(id)navigationBarBackgroundColor;
+(id)peerPaymentActionViewControllerForAction:(NSUInteger)arg0 paymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(NSInteger)arg4 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)_cancelBarButton;
-(id)initWithPaymentPass:(id)arg0 webService:(id)arg1 passLibraryDataProvider:(id)arg2 context:(NSInteger)arg3 ;
-(id)presentationSceneIdentifierForPeerPaymentActionController:(id)arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_cancelledAction;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg0 ;
-(void)_performedAction;
-(void)dealloc;
-(void)loadView;
-(void)peerPaymentActionController:(id)arg0 hasChangedState:(NSUInteger)arg1 ;
-(void)peerPaymentActionController:(id)arg0 requestPresentViewController:(id)arg1 ;
-(void)peerPaymentActionController:(id)arg0 requestPresentViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)updateAccountValues;
-(void)updateFirstResponder;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willDismissViewController;


@end


#endif