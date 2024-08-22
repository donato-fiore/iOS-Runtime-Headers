// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONAUTHENTICATIONPASSCODEVIEWCONTROLLER_H
#define PKTRANSACTIONAUTHENTICATIONPASSCODEVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, NSData, NSString;
@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate, PKTransactionAuthenticationPasscodeViewControllerDelegate;


#import "PKRemoteTransactionAuthenticationPasscodeViewController.h"

@interface PKTransactionAuthenticationPasscodeViewController : UIViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate>

 {
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteTransactionAuthenticationPasscodeViewController *_remoteVC;
    id<PKTransactionAuthenticationPasscodeViewControllerDelegate> *_delegate;
    os_unfair_lock_s _delegateLock;
    NSData *_archivedAnalyticsSessionToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTransactionAuthenticationPasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)init;
-(id)initWithPassUniqueIdentifier:(id)arg0 transactionIdentifier:(id)arg1 archivedAnalyticsSessionToken:(id)arg2 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_setRemoteVC:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)passcodeViewControllerDidCancel;
-(void)passcodeViewControllerDidEndSessionExchange;
-(void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg0 ;
-(void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(id)arg0 ;
-(void)resetWithTransactionAuthenticationFailure:(NSInteger)arg0 completion:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif