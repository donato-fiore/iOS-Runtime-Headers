// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DELIVERYACCOUNT_H
#define DELIVERYACCOUNT_H



#import "MFAccount.h"

@interface DeliveryAccount : MFAccount



+(id)accountTypeIdentifier;
+(id)accountWithHostname:(id)arg0 username:(id)arg1 ;
+(id)accountWithHostname:(id)arg0 username:(id)arg1 lookForExistingAccounts:(BOOL)arg2 ;
+(id)accountWithIdentifier:(id)arg0 ;
+(id)accountWithUniqueId:(id)arg0 ;
+(id)carrierDeliveryAccount;
+(id)deliveryAccounts;
+(id)existingAccountForUniqueID:(id)arg0 ;
+(id)existingAccountWithHostname:(id)arg0 username:(id)arg1 ;
+(id)existingAccountWithIdentifier:(id)arg0 ;
+(id)newDefaultInstance;
+(void)_postDeliveryAccountsHaveChanged;
+(void)addDeliveryAccount:(id)arg0 ;
+(void)reloadDeliveryAccounts;
+(void)removeDeliveryAccount:(id)arg0 ;
-(BOOL)canBeFallbackAccount;
-(BOOL)hasEnoughInformationForEasySetup;
-(BOOL)hasNoReferences;
-(BOOL)shouldUseAuthentication;
-(BOOL)shouldUseSaveSentForAccount:(id)arg0 ;
-(BOOL)supportsOutboxCopy;
-(Class)deliveryClass;
-(NSUInteger)maximumMessageBytes;
-(id)displayHostname;
-(id)identifier;
-(id)mailAccountIfAvailable;
-(id)newDeliveryWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 charsets:(id)arg4 ;
-(id)newDeliveryWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
-(id)newDeliveryWithMessage:(id)arg0 ;
-(void)_setAccountProperties:(id)arg0 ;
-(void)_updateAccountDescriptionWithUsername:(id)arg0 hostname:(id)arg1 ;
-(void)setMaximumMessageBytes:(NSUInteger)arg0 ;
-(void)setShouldUseAuthentication:(BOOL)arg0 ;
-(void)setUsername:(id)arg0 ;


@end


#endif