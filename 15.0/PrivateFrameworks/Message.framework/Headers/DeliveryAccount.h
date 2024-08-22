// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DELIVERYACCOUNT_H
#define DELIVERYACCOUNT_H

@class NSString, NSArray, ACAccount;
@protocol EDDeliveryAccount;


#import "MFAccount.h"

@interface DeliveryAccount : MFAccount <EDDeliveryAccount>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSArray *emailAddressStrings;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostname;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSUInteger maximumMessageBytes;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) BOOL primaryiCloudAccount;
@property (readonly, copy, nonatomic) NSString *statisticsKind;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ACAccount *systemAccount;
@property (readonly, copy, nonatomic) NSString *username;


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
-(id)displayHostname;
-(id)mailAccountIfAvailable;
-(id)newDeliveryWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
-(id)newDeliveryWithMessage:(id)arg0 ;
-(void)_setAccountProperties:(id)arg0 ;
-(void)_updateAccountDescriptionWithUsername:(id)arg0 hostname:(id)arg1 ;
-(void)setShouldUseAuthentication:(BOOL)arg0 ;


@end


#endif