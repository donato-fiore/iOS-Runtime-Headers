// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFOSXSERVERIMAPACCOUNT_H
#define MFOSXSERVERIMAPACCOUNT_H

@class DeliveryAccount;


#import "IMAPAccount.h"

@interface MFOSXServerIMAPAccount : IMAPAccount {
    DeliveryAccount *_deliveryAccount;
}




+(BOOL)primaryDeliveryAccountIsDynamic;
+(id)_authSchemeForAuthenticationMethod:(id)arg0 ;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(id)newChildAccountWithParentAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)_credentialCreateIfNecessary:(BOOL)arg0 error:(*id)arg1 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg0 ;
-(id)displayName;
-(void)dealloc;
-(void)setPassword:(id)arg0 ;


@end


#endif