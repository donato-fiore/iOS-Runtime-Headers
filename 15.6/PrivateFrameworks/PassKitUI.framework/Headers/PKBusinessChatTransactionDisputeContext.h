// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBUSINESSCHATTRANSACTIONDISPUTECONTEXT_H
#define PKBUSINESSCHATTRANSACTIONDISPUTECONTEXT_H

@class PKPaymentPass, PKPaymentTransaction, PKAccount, PKAccountUser, PKFamilyMember, NSSet, NSString;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBusinessChatTransactionDisputeContext : NSObject <PKBusinessChatContext>

 {
    PKPaymentPass *_paymentPass;
    PKPaymentTransaction *_transaction;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    PKFamilyMember *_familyMember;
    NSSet *_physicalCards;
    NSInteger _intent;
    BOOL _disputingAccountUserTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithPaymentPass:(id)arg0 transaction:(id)arg1 account:(id)arg2 accountUser:(id)arg3 familyMember:(id)arg4 physicalCards:(id)arg5 intent:(NSInteger)arg6 ;
-(id)intentParameters;


@end


#endif