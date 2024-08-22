// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTBANKACCOUNTINFORMATION_H
#define PKPEERPAYMENTBANKACCOUNTINFORMATION_H



#import "PKBankAccountInformation.h"

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation



-(id)_bankAccountInformationInKeychain;
-(id)_wrapperWithType:(NSUInteger)arg0 ;
-(id)init;
-(void)_writeBankAccountInformationToKeychain;
-(void)deleteAllBankInformation;
-(void)deleteAllLocalBankInformation;
-(void)setAccountNumber:(id)arg0 ;
-(void)setBankName:(id)arg0 ;
-(void)setRoutingNumber:(id)arg0 ;
-(void)updateToLatestKeychainData;


@end


#endif