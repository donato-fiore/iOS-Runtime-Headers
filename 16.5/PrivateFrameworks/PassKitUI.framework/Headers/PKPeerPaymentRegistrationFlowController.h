// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTREGISTRATIONFLOWCONTROLLER_H
#define PKPEERPAYMENTREGISTRATIONFLOWCONTROLLER_H

@class PKPeerPaymentAccount, PKCurrencyAmount, NSString;
@protocol PKPaymentSetupDelegate;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentRegistrationFlowController : NSObject

@property (readonly, nonatomic) PKPeerPaymentAccount *account; // ivar: _account
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, nonatomic) NSString *senderAddress; // ivar: _senderAddress
@property (readonly, weak, nonatomic) NSObject<PKPaymentSetupDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)initWithAccount:(id)arg0 currencyAmount:(id)arg1 state:(NSUInteger)arg2 senderAddress:(id)arg3 setupDelegate:(id)arg4 ;
-(id)initWithUserInfo:(id)arg0 setupDelegate:(id)arg1 ;
-(void)preflightWithCompletion:(id)arg0 ;


@end


#endif