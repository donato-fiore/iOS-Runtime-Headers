// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTCARDNUMBERSPRESENTER_H
#define PKACCOUNTCARDNUMBERSPRESENTER_H

@class PKVirtualCard, PKPhysicalCard, PKAccount, PKPaymentPass, PKAccountService;

#import <Foundation/Foundation.h>


@interface PKAccountCardNumbersPresenter : NSObject {
    PKVirtualCard *_virtualCard;
    PKPhysicalCard *_physicalCard;
    PKAccount *_account;
    PKPaymentPass *_pass;
    NSInteger _context;
    PKAccountService *_accountService;
}


@property (readonly, nonatomic) BOOL isLoadingVirtualCard; // ivar: _isLoadingVirtualCard


+(void)authAndDecryptWithVirtualCard:(id)arg0 completion:(id)arg1 ;
-(id)initWithVirtualCard:(id)arg0 physicalCard:(id)arg1 account:(id)arg2 pass:(id)arg3 context:(NSInteger)arg4 ;
-(void)_prepareAuthForVirtualCard:(id)arg0 completion:(id)arg1 ;
-(void)presentCardNumbersWithCompletion:(id)arg0 ;


@end


#endif