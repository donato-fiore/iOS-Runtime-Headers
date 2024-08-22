// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKNOTABLEUSERDATAWALLET_H
#define DKNOTABLEUSERDATAWALLET_H

@class NSArray, PKPaymentSetupAssistantProvisioningContext;

#import <Foundation/Foundation.h>


@interface DKNotableUserDataWallet : NSObject

@property (retain, nonatomic) NSArray *localPaymentCards; // ivar: _localPaymentCards
@property (retain, nonatomic) PKPaymentSetupAssistantProvisioningContext *paymentProvisioningContext; // ivar: _paymentProvisioningContext
@property (readonly, nonatomic) NSArray *walletCards;


-(id)initWithContext:(id)arg0 localCards:(id)arg1 ;
-(id)passSnapshotForCredential:(id)arg0 ;


@end


#endif