// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIPAYMENTSPECIFIERPROVIDER_H
#define AMSUIPAYMENTSPECIFIERPROVIDER_H

@class ACAccount, AIDAAccountManager, NSString, NSArray;
@protocol AAUISpecifierProvider, AMSUIWebDelegate, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface AMSUIPaymentSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate>

 {
    ACAccount *_grandSlamAccount;
}


@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *paymentSummaryDescription; // ivar: _paymentSummaryDescription
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(id)_findViewController;
-(id)_grandSlamAccount;
-(id)_paymentSummaryDescriptionForSpecifier:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 ;
-(void)_loadControllerForSpecifier:(id)arg0 ;
-(void)webViewController:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)webViewController:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif