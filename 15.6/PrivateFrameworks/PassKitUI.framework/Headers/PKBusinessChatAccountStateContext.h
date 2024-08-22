// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBUSINESSCHATACCOUNTSTATECONTEXT_H
#define PKBUSINESSCHATACCOUNTSTATECONTEXT_H

@class PKAccount, PKPaymentPass, NSString;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBusinessChatAccountStateContext : NSObject <PKBusinessChatContext>

 {
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithAccount:(id)arg0 paymentPass:(id)arg1 ;
-(id)intentParameters;


@end


#endif