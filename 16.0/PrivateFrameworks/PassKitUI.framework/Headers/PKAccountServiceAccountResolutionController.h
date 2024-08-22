// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTSERVICEACCOUNTRESOLUTIONCONTROLLER_H
#define PKACCOUNTSERVICEACCOUNTRESOLUTIONCONTROLLER_H

@class PKAccount, PKAccountUserCollection, UIViewController, PKTransactionSourceCollection;
@protocol PKAccountBillPaymentObserver, PKAccountServiceAccountResolutionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKBusinessChatController.h"

@interface PKAccountServiceAccountResolutionController : NSObject {
    PKBusinessChatController *_businessChatController;
}


@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (weak, nonatomic) NSObject<PKAccountBillPaymentObserver> *billPaymentObserver; // ivar: _billPaymentObserver
@property (weak, nonatomic) NSObject<PKAccountServiceAccountResolutionControllerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


-(id)_alertControllerForBusinessChatContext:(id)arg0 ;
-(id)initWithAccount:(id)arg0 accountUserCollection:(id)arg1 transactionSourceCollection:(id)arg2 ;
-(void)_callIssuer;
-(void)_handleAccountServiceAccountDidChangeNotification:(id)arg0 ;
-(void)_openBusinessChatWithContext:(id)arg0 ;
-(void)_presentAccountServiceAction:(NSUInteger)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_presentViewController:(id)arg0 ;
-(void)presentFlowForAccountResolution:(NSUInteger)arg0 configuration:(id)arg1 completion:(id)arg2 ;


@end


#endif